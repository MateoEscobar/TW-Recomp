#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D73E8
// Address: 0x4d73e8 - 0x4d7590
void sub_004D73E8_0x4d73e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D73E8_0x4d73e8");
#endif

    switch (ctx->pc) {
        case 0x4d7438u: goto label_4d7438;
        case 0x4d7458u: goto label_4d7458;
        case 0x4d7470u: goto label_4d7470;
        case 0x4d7488u: goto label_4d7488;
        case 0x4d74a4u: goto label_4d74a4;
        case 0x4d74c4u: goto label_4d74c4;
        case 0x4d74dcu: goto label_4d74dc;
        case 0x4d74ecu: goto label_4d74ec;
        case 0x4d751cu: goto label_4d751c;
        case 0x4d7524u: goto label_4d7524;
        case 0x4d7534u: goto label_4d7534;
        case 0x4d753cu: goto label_4d753c;
        case 0x4d7554u: goto label_4d7554;
        case 0x4d756cu: goto label_4d756c;
        default: break;
    }

    ctx->pc = 0x4d73e8u;

    // 0x4d73e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d73e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d73ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d73ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d73f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d73f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d73f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d73f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d73fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4d73fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7400: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d7404: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4d7404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7408: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d7408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d740c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4d740cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7414: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4d7414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7418: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x4d7418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x4d741c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4D741Cu;
    {
        const bool branch_taken_0x4d741c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D741Cu;
        // 0x4d7420: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d741c) {
            ctx->pc = 0x4D74F4u;
            goto label_4d74f4;
        }
    }
    ctx->pc = 0x4D7424u;
    // 0x4d7424: 0x148083  sra         $s0, $s4, 2
    ctx->pc = 0x4d7424u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 2));
    // 0x4d7428: 0x2303023  subu        $a2, $s1, $s0
    ctx->pc = 0x4d7428u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x4d742c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d742cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d7430: 0xc1351d4  jal         func_4D4750
    ctx->pc = 0x4D7430u;
    SET_GPR_U32(ctx, 31, 0x4D7438u);
    ctx->pc = 0x4D7434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7430u;
    // 0x4d7434: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D4750u, 0x4D7430u, 0x4D7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7438u;
label_4d7438:
    // 0x4d7438: 0x2a820201  slti        $v0, $s4, 0x201
    ctx->pc = 0x4d7438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x4d743c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4D743Cu;
    {
        const bool branch_taken_0x4d743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D743Cu;
        // 0x4d7440: 0x2a020021  slti        $v0, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d743c) {
            ctx->pc = 0x4D74ACu;
            goto label_4d74ac;
        }
    }
    ctx->pc = 0x4D7444u;
    // 0x4d7444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d7444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d744c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d744cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7450: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D7450u;
    SET_GPR_U32(ctx, 31, 0x4D7458u);
    ctx->pc = 0x4D7454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7450u;
    // 0x4d7454: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D7450u, 0x4D7458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7458u;
label_4d7458:
    // 0x4d7458: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4d7458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d745c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7460: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4d7460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4d7464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d7464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7468: 0xc1353de  jal         func_4D4F78
    ctx->pc = 0x4D7468u;
    SET_GPR_U32(ctx, 31, 0x4D7470u);
    ctx->pc = 0x4D746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7468u;
    // 0x4d746c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D4F78u, 0x4D7468u, 0x4D7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7470u;
label_4d7470:
    // 0x4d7470: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x4d7470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4d7474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7478: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4d7478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4d747c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d747cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7480: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D7480u;
    SET_GPR_U32(ctx, 31, 0x4D7488u);
    ctx->pc = 0x4D7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7480u;
    // 0x4d7484: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D7480u, 0x4D7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7488u;
label_4d7488:
    // 0x4d7488: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4d7488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4d748c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7490: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x4d7490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d7494: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d7494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7498: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d7498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d749c: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D749Cu;
    SET_GPR_U32(ctx, 31, 0x4D74A4u);
    ctx->pc = 0x4D74A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D749Cu;
    // 0x4d74a0: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D749Cu, 0x4D74A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D74A4u;
label_4d74a4:
    // 0x4d74a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4D74A4u;
    {
        const bool branch_taken_0x4d74a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D74A4u;
        // 0x4d74a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d74a4) {
            ctx->pc = 0x4D74E0u;
            goto label_4d74e0;
        }
    }
    ctx->pc = 0x4D74ACu;
label_4d74ac:
    // 0x4d74ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D74ACu;
    {
        const bool branch_taken_0x4d74ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D74ACu;
        // 0x4d74b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d74ac) {
            ctx->pc = 0x4D74CCu;
            goto label_4d74cc;
        }
    }
    ctx->pc = 0x4D74B4u;
    // 0x4d74b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d74b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d74b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d74b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d74bc: 0xc135462  jal         func_4D5188
    ctx->pc = 0x4D74BCu;
    SET_GPR_U32(ctx, 31, 0x4D74C4u);
    ctx->pc = 0x4D74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D74BCu;
    // 0x4d74c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5188u, 0x4D74BCu, 0x4D74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D74C4u;
label_4d74c4:
    // 0x4d74c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D74C4u;
    {
        const bool branch_taken_0x4d74c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D74C4u;
        // 0x4d74c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d74c4) {
            ctx->pc = 0x4D74E0u;
            goto label_4d74e0;
        }
    }
    ctx->pc = 0x4D74CCu;
label_4d74cc:
    // 0x4d74cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d74ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d74d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d74d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d74d4: 0xc135e4a  jal         func_4D7928
    ctx->pc = 0x4D74D4u;
    SET_GPR_U32(ctx, 31, 0x4D74DCu);
    ctx->pc = 0x4D74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D74D4u;
    // 0x4d74d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7928u, 0x4D74D4u, 0x4D74DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D74DCu;
label_4d74dc:
    // 0x4d74dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d74dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d74e0:
    // 0x4d74e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d74e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d74e4: 0xc134eea  jal         func_4D3BA8
    ctx->pc = 0x4D74E4u;
    SET_GPR_U32(ctx, 31, 0x4D74ECu);
    ctx->pc = 0x4D74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D74E4u;
    // 0x4d74e8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D3BA8u, 0x4D74E4u, 0x4D74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D74ECu;
label_4d74ec:
    // 0x4d74ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4D74ECu;
    {
        const bool branch_taken_0x4d74ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D74F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D74ECu;
        // 0x4d74f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d74ec) {
            ctx->pc = 0x4D7570u;
            goto label_4d7570;
        }
    }
    ctx->pc = 0x4D74F4u;
label_4d74f4:
    // 0x4d74f4: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x4d74f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4d74f8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4D74F8u;
    {
        const bool branch_taken_0x4d74f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D74F8u;
        // 0x4d74fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d74f8) {
            ctx->pc = 0x4D7544u;
            goto label_4d7544;
        }
    }
    ctx->pc = 0x4D7500u;
    // 0x4d7500: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4d7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4d7504: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D7504u;
    {
        const bool branch_taken_0x4d7504 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7504u;
        // 0x4d7508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7504) {
            ctx->pc = 0x4D752Cu;
            goto label_4d752c;
        }
    }
    ctx->pc = 0x4D750Cu;
    // 0x4d750c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x4d750cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4d7510: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x4d7510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4d7514: 0xc135804  jal         func_4D6010
    ctx->pc = 0x4D7514u;
    SET_GPR_U32(ctx, 31, 0x4D751Cu);
    ctx->pc = 0x4D7518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7514u;
    // 0x4d7518: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6010u, 0x4D7514u, 0x4D751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D751Cu;
label_4d751c:
    // 0x4d751c: 0xc135eac  jal         func_4D7AB0
    ctx->pc = 0x4D751Cu;
    SET_GPR_U32(ctx, 31, 0x4D7524u);
    ctx->pc = 0x4D7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D751Cu;
    // 0x4d7520: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7AB0u, 0x4D751Cu, 0x4D7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7524u;
label_4d7524:
    // 0x4d7524: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4D7524u;
    {
        const bool branch_taken_0x4d7524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7524u;
        // 0x4d7528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7524) {
            ctx->pc = 0x4D7570u;
            goto label_4d7570;
        }
    }
    ctx->pc = 0x4D752Cu;
label_4d752c:
    // 0x4d752c: 0xc135ae4  jal         func_4D6B90
    ctx->pc = 0x4D752Cu;
    SET_GPR_U32(ctx, 31, 0x4D7534u);
    ctx->pc = 0x4D7530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D752Cu;
    // 0x4d7530: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6B90u, 0x4D752Cu, 0x4D7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7534u;
label_4d7534:
    // 0x4d7534: 0xc135efa  jal         func_4D7BE8
    ctx->pc = 0x4D7534u;
    SET_GPR_U32(ctx, 31, 0x4D753Cu);
    ctx->pc = 0x4D7538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7534u;
    // 0x4d7538: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7BE8u, 0x4D7534u, 0x4D753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D753Cu;
label_4d753c:
    // 0x4d753c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4D753Cu;
    {
        const bool branch_taken_0x4d753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D753Cu;
        // 0x4d7540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d753c) {
            ctx->pc = 0x4D7570u;
            goto label_4d7570;
        }
    }
    ctx->pc = 0x4D7544u;
label_4d7544:
    // 0x4d7544: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D7544u;
    {
        const bool branch_taken_0x4d7544 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7544u;
        // 0x4d7548: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7544) {
            ctx->pc = 0x4D755Cu;
            goto label_4d755c;
        }
    }
    ctx->pc = 0x4D754Cu;
    // 0x4d754c: 0xc135f18  jal         func_4D7C60
    ctx->pc = 0x4D754Cu;
    SET_GPR_U32(ctx, 31, 0x4D7554u);
    ctx->pc = 0x4D7550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D754Cu;
    // 0x4d7550: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7C60u, 0x4D754Cu, 0x4D7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7554u;
label_4d7554:
    // 0x4d7554: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D7554u;
    {
        const bool branch_taken_0x4d7554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7554u;
        // 0x4d7558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7554) {
            ctx->pc = 0x4D7570u;
            goto label_4d7570;
        }
    }
    ctx->pc = 0x4D755Cu;
label_4d755c:
    // 0x4d755c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D755Cu;
    {
        const bool branch_taken_0x4d755c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D755Cu;
        // 0x4d7560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d755c) {
            ctx->pc = 0x4D7570u;
            goto label_4d7570;
        }
    }
    ctx->pc = 0x4D7564u;
    // 0x4d7564: 0xc135e9e  jal         func_4D7A78
    ctx->pc = 0x4D7564u;
    SET_GPR_U32(ctx, 31, 0x4D756Cu);
    ctx->pc = 0x4D7568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7564u;
    // 0x4d7568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7A78u, 0x4D7564u, 0x4D756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D756Cu;
label_4d756c:
    // 0x4d756c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d756cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7570:
    // 0x4d7570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7574: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d7574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7578: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d7578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d757c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d757cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7580: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d7580u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d7584: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d7584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d7588: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7588u;
        // 0x4d758c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7590u;
}
