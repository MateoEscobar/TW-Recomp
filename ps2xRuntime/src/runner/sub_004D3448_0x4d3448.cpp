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

// Function: sub_004D3448
// Address: 0x4d3448 - 0x4d3698
void sub_004D3448_0x4d3448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3448_0x4d3448");
#endif

    switch (ctx->pc) {
        case 0x4d34a8u: goto label_4d34a8;
        case 0x4d34ccu: goto label_4d34cc;
        case 0x4d34f8u: goto label_4d34f8;
        case 0x4d354cu: goto label_4d354c;
        case 0x4d3564u: goto label_4d3564;
        case 0x4d3590u: goto label_4d3590;
        case 0x4d35a8u: goto label_4d35a8;
        case 0x4d35d0u: goto label_4d35d0;
        case 0x4d35e4u: goto label_4d35e4;
        case 0x4d360cu: goto label_4d360c;
        case 0x4d3638u: goto label_4d3638;
        default: break;
    }

    ctx->pc = 0x4d3448u;

    // 0x4d3448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d3448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d344c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d3450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d3450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d3454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d3454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d3458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d345c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4d345cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d3460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d3464: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4d3464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3468: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d3468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4d346c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4d346cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3470: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d3470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d3474: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d3474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d3478: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4d347c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d3480: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x4d3480u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d3484: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x4d3484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x4d3488: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4d3488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d348c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D348Cu;
    {
        const bool branch_taken_0x4d348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D348Cu;
        // 0x4d3490: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d348c) {
            ctx->pc = 0x4D34A8u;
            goto label_4d34a8;
        }
    }
    ctx->pc = 0x4D3494u;
    // 0x4d3494: 0x10a083  sra         $s4, $s0, 2
    ctx->pc = 0x4d3494u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 16), 2));
    // 0x4d3498: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d3498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d349c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d34a0: 0xc134da6  jal         func_4D3698
    ctx->pc = 0x4D34A0u;
    SET_GPR_U32(ctx, 31, 0x4D34A8u);
    ctx->pc = 0x4D34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D34A0u;
    // 0x4d34a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D3698u, 0x4D34A0u, 0x4D34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D34A8u;
label_4d34a8:
    // 0x4d34a8: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x4d34a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4d34ac: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x4d34acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d34b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D34B0u;
    {
        const bool branch_taken_0x4d34b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D34B0u;
        // 0x4d34b4: 0x14a880  sll         $s5, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d34b0) {
            ctx->pc = 0x4D34CCu;
            goto label_4d34cc;
        }
    }
    ctx->pc = 0x4D34B8u;
    // 0x4d34b8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x4d34b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d34bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d34bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d34c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d34c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d34c4: 0xc135c4c  jal         func_4D7130
    ctx->pc = 0x4D34C4u;
    SET_GPR_U32(ctx, 31, 0x4D34CCu);
    ctx->pc = 0x4D34C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D34C4u;
    // 0x4d34c8: 0x2553021  addu        $a2, $s2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7130u, 0x4D34C4u, 0x4D34CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D34CCu;
label_4d34cc:
    // 0x4d34cc: 0x6e30031  bgezl       $s7, . + 4 + (0x31 << 2)
    ctx->pc = 0x4D34CCu;
    {
        const bool branch_taken_0x4d34cc = (GPR_S32(ctx, 23) >= 0);
        if (branch_taken_0x4d34cc) {
            ctx->pc = 0x4D34D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D34CCu;
            // 0x4d34d0: 0x255a821  addu        $s5, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3594u;
            goto label_4d3594;
        }
    }
    ctx->pc = 0x4D34D4u;
    // 0x4d34d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4d34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d34d8: 0x2604fffe  addiu       $a0, $s0, -0x2
    ctx->pc = 0x4d34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x4d34dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4d34e0: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x4d34e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d34e4: 0xc443fffc  lwc1        $f3, -0x4($v0)
    ctx->pc = 0x4d34e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d34e8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4D34E8u;
    {
        const bool branch_taken_0x4d34e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D34E8u;
        // 0x4d34ec: 0x2a050005  slti        $a1, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d34e8) {
            ctx->pc = 0x4D3520u;
            goto label_4d3520;
        }
    }
    ctx->pc = 0x4D34F0u;
    // 0x4d34f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4d34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d34f4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x4d34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d34f8:
    // 0x4d34f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4d34f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d34fc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x4d34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x4d3500: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x4d3500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3504: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x4d3504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d3508: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x4d3508u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4d350c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4d350cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d3510: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d3514: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3518: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4D3518u;
    {
        const bool branch_taken_0x4d3518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3518u;
        // 0x4d351c: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3518) {
            ctx->pc = 0x4D34F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d34f8;
        }
    }
    ctx->pc = 0x4D3520u;
label_4d3520:
    // 0x4d3520: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x4d3520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3524: 0x46030040  add.s       $f1, $f0, $f3
    ctx->pc = 0x4d3524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4d3528: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4d3528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4d352c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x4d352cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x4d3530: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4D3530u;
    {
        const bool branch_taken_0x4d3530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3530u;
        // 0x4d3534: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3530) {
            ctx->pc = 0x4D356Cu;
            goto label_4d356c;
        }
    }
    ctx->pc = 0x4D3538u;
    // 0x4d3538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d3538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d353c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3540: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4d3540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3544: 0xc135d98  jal         func_4D7660
    ctx->pc = 0x4D3544u;
    SET_GPR_U32(ctx, 31, 0x4D354Cu);
    ctx->pc = 0x4D3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3544u;
    // 0x4d3548: 0x2553821  addu        $a3, $s2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7660u, 0x4D3544u, 0x4D354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D354Cu;
label_4d354c:
    // 0x4d354c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3550: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d3550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3554: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x4d3554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4d3558: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4d3558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d355c: 0xc135cfa  jal         func_4D73E8
    ctx->pc = 0x4D355Cu;
    SET_GPR_U32(ctx, 31, 0x4D3564u);
    ctx->pc = 0x4D3560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D355Cu;
    // 0x4d3560: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D73E8u, 0x4D355Cu, 0x4D3564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3564u;
label_4d3564:
    // 0x4d3564: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4D3564u;
    {
        const bool branch_taken_0x4d3564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3564u;
        // 0x4d3568: 0x255a821  addu        $s5, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3564) {
            ctx->pc = 0x4D3594u;
            goto label_4d3594;
        }
    }
    ctx->pc = 0x4D356Cu;
label_4d356c:
    // 0x4d356c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4d356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d3570: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D3570u;
    {
        const bool branch_taken_0x4d3570 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4d3570) {
            ctx->pc = 0x4D3574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D3570u;
            // 0x4d3574: 0x255a821  addu        $s5, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3594u;
            goto label_4d3594;
        }
    }
    ctx->pc = 0x4D3578u;
    // 0x4d3578: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d3578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d357c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d357cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3580: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x4d3580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4d3584: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4d3584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3588: 0xc135cfa  jal         func_4D73E8
    ctx->pc = 0x4D3588u;
    SET_GPR_U32(ctx, 31, 0x4D3590u);
    ctx->pc = 0x4D358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3588u;
    // 0x4d358c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D73E8u, 0x4D3588u, 0x4D3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3590u;
label_4d3590:
    // 0x4d3590: 0x255a821  addu        $s5, $s2, $s5
    ctx->pc = 0x4d3590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_4d3594:
    // 0x4d3594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d3594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d3598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d359c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4d359cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35a0: 0xc135f6e  jal         func_4D7DB8
    ctx->pc = 0x4D35A0u;
    SET_GPR_U32(ctx, 31, 0x4D35A8u);
    ctx->pc = 0x4D35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D35A0u;
    // 0x4d35a4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7DB8u, 0x4D35A0u, 0x4D35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D35A8u;
label_4d35a8:
    // 0x4d35a8: 0x6e0002f  bltz        $s7, . + 4 + (0x2F << 2)
    ctx->pc = 0x4D35A8u;
    {
        const bool branch_taken_0x4d35a8 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x4D35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D35A8u;
        // 0x4d35ac: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d35a8) {
            ctx->pc = 0x4D3668u;
            goto label_4d3668;
        }
    }
    ctx->pc = 0x4D35B0u;
    // 0x4d35b0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4D35B0u;
    {
        const bool branch_taken_0x4d35b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D35B0u;
        // 0x4d35b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d35b0) {
            ctx->pc = 0x4D35ECu;
            goto label_4d35ec;
        }
    }
    ctx->pc = 0x4D35B8u;
    // 0x4d35b8: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x4d35b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4d35bc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4d35bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d35c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d35c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35c8: 0xc135c90  jal         func_4D7240
    ctx->pc = 0x4D35C8u;
    SET_GPR_U32(ctx, 31, 0x4D35D0u);
    ctx->pc = 0x4D35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D35C8u;
    // 0x4d35cc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7240u, 0x4D35C8u, 0x4D35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D35D0u;
label_4d35d0:
    // 0x4d35d0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4d35d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35d4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4d35d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d35d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35dc: 0xc135d64  jal         func_4D7590
    ctx->pc = 0x4D35DCu;
    SET_GPR_U32(ctx, 31, 0x4D35E4u);
    ctx->pc = 0x4D35E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D35DCu;
    // 0x4d35e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7590u, 0x4D35DCu, 0x4D35E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D35E4u;
label_4d35e4:
    // 0x4d35e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D35E4u;
    {
        const bool branch_taken_0x4d35e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D35E4u;
        // 0x4d35e8: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d35e4) {
            ctx->pc = 0x4D3610u;
            goto label_4d3610;
        }
    }
    ctx->pc = 0x4D35ECu;
label_4d35ec:
    // 0x4d35ec: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D35ECu;
    {
        const bool branch_taken_0x4d35ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4d35ec) {
            ctx->pc = 0x4D35F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D35ECu;
            // 0x4d35f0: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3610u;
            goto label_4d3610;
        }
    }
    ctx->pc = 0x4D35F4u;
    // 0x4d35f4: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x4d35f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4d35f8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4d35f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d35fc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4d35fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3600: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d3600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d3604: 0xc135c90  jal         func_4D7240
    ctx->pc = 0x4D3604u;
    SET_GPR_U32(ctx, 31, 0x4D360Cu);
    ctx->pc = 0x4D3608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3604u;
    // 0x4d3608: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7240u, 0x4D3604u, 0x4D360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D360Cu;
label_4d360c:
    // 0x4d360c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x4d360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d3610:
    // 0x4d3610: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4d3610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d3614: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x4d3614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3618: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x4d3618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d361c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4d361cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d3620: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x4d3620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4d3624: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x4d3624u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4d3628: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4D3628u;
    {
        const bool branch_taken_0x4d3628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3628u;
        // 0x4d362c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3628) {
            ctx->pc = 0x4D3660u;
            goto label_4d3660;
        }
    }
    ctx->pc = 0x4D3630u;
    // 0x4d3630: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x4d3630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4d3634: 0x0  nop
    ctx->pc = 0x4d3634u;
    // NOP
label_4d3638:
    // 0x4d3638: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4d3638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d363c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4d363cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4d3640: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d3640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3644: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x4d3644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d3648: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x4d3648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4d364c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4d364cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d3650: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d3654: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x4d3654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x4d3658: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4D3658u;
    {
        const bool branch_taken_0x4d3658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3658u;
        // 0x4d365c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3658) {
            ctx->pc = 0x4D3638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3638;
        }
    }
    ctx->pc = 0x4D3660u;
label_4d3660:
    // 0x4d3660: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x4d3660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x4d3664: 0xe443fffc  swc1        $f3, -0x4($v0)
    ctx->pc = 0x4d3664u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
label_4d3668:
    // 0x4d3668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d366c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d366cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d3670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d3674: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d3678: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d3678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d367c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d367cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d3680: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d3680u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d3684: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d3684u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d3688: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d3688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d368c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D368Cu;
        // 0x4d3690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D368Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3694u;
    // 0x4d3694: 0x0  nop
    ctx->pc = 0x4d3694u;
    // NOP
    ctx->pc = 0x4d3698u;
}
