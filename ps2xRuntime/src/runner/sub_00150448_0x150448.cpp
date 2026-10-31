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

// Function: sub_00150448
// Address: 0x150448 - 0x150628
void sub_00150448_0x150448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150448_0x150448");
#endif

    switch (ctx->pc) {
        case 0x1504b8u: goto label_1504b8;
        case 0x1504d0u: goto label_1504d0;
        case 0x1504dcu: goto label_1504dc;
        case 0x1504fcu: goto label_1504fc;
        case 0x15050cu: goto label_15050c;
        case 0x150528u: goto label_150528;
        case 0x150538u: goto label_150538;
        case 0x150548u: goto label_150548;
        case 0x15057cu: goto label_15057c;
        case 0x150594u: goto label_150594;
        case 0x15059cu: goto label_15059c;
        case 0x1505b0u: goto label_1505b0;
        case 0x1505bcu: goto label_1505bc;
        case 0x1505c8u: goto label_1505c8;
        case 0x1505d4u: goto label_1505d4;
        case 0x1505e0u: goto label_1505e0;
        case 0x1505e8u: goto label_1505e8;
        case 0x1505f0u: goto label_1505f0;
        case 0x1505f8u: goto label_1505f8;
        default: break;
    }

    ctx->pc = 0x150448u;

    // 0x150448: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x150448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15044c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x150450: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x150450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x150454: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x150454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x150458: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x150458u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x15045c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15045cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150460: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x150460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x150464: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x150464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x150468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15046c: 0x8e63c20c  lw          $v1, -0x3DF4($s3)
    ctx->pc = 0x15046cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x150470: 0x202b024  and         $s6, $s0, $v0
    ctx->pc = 0x150470u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x150474: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x150474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x150478: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x150478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x15047c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x150480: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x150480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150484: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x150484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x150488: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x150488u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15048c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x15048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x150490: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x150490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150494: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x150494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x150498: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x150498u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15049c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1504a0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1504a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1504a4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1504A4u;
    {
        const bool branch_taken_0x1504a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504A4u;
        // 0x1504a8: 0x140f02d  daddu       $fp, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504a4) {
            ctx->pc = 0x1504E4u;
            goto label_1504e4;
        }
    }
    ctx->pc = 0x1504ACu;
    // 0x1504ac: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1504b0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1504B0u;
    SET_GPR_U32(ctx, 31, 0x1504B8u);
    ctx->pc = 0x1504B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504B0u;
    // 0x1504b4: 0x2484c0a0  addiu       $a0, $a0, -0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1504B0u, 0x1504B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504B8u;
label_1504b8:
    // 0x1504b8: 0x8e66c20c  lw          $a2, -0x3DF4($s3)
    ctx->pc = 0x1504b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951436)));
    // 0x1504bc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1504bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1504c0: 0x2484c040  addiu       $a0, $a0, -0x3FC0
    ctx->pc = 0x1504c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950976));
    // 0x1504c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1504c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504c8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1504C8u;
    SET_GPR_U32(ctx, 31, 0x1504D0u);
    ctx->pc = 0x1504CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504C8u;
    // 0x1504cc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1504C8u, 0x1504D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504D0u;
label_1504d0:
    // 0x1504d0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1504d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1504d4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1504D4u;
    SET_GPR_U32(ctx, 31, 0x1504DCu);
    ctx->pc = 0x1504D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504D4u;
    // 0x1504d8: 0x2484c068  addiu       $a0, $a0, -0x3F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1504D4u, 0x1504DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504DCu;
label_1504dc:
    // 0x1504dc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1504DCu;
    {
        const bool branch_taken_0x1504dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1504E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504DCu;
        // 0x1504e0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504dc) {
            ctx->pc = 0x1505FCu;
            goto label_1505fc;
        }
    }
    ctx->pc = 0x1504E4u;
label_1504e4:
    // 0x1504e4: 0x2e420030  sltiu       $v0, $s2, 0x30
    ctx->pc = 0x1504e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1504e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1504E8u;
    {
        const bool branch_taken_0x1504e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1504ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504E8u;
        // 0x1504ec: 0x2e020030  sltiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504e8) {
            ctx->pc = 0x150514u;
            goto label_150514;
        }
    }
    ctx->pc = 0x1504F0u;
    // 0x1504f0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1504f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1504f4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1504F4u;
    SET_GPR_U32(ctx, 31, 0x1504FCu);
    ctx->pc = 0x1504F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504F4u;
    // 0x1504f8: 0x2484c0a0  addiu       $a0, $a0, -0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1504F4u, 0x1504FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504FCu;
label_1504fc:
    // 0x1504fc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1504fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150500: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x150500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150504: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150504u;
    SET_GPR_U32(ctx, 31, 0x15050Cu);
    ctx->pc = 0x150508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150504u;
    // 0x150508: 0x2484c0c8  addiu       $a0, $a0, -0x3F38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150504u, 0x15050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15050Cu;
label_15050c:
    // 0x15050c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x15050Cu;
    {
        const bool branch_taken_0x15050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15050Cu;
        // 0x150510: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15050c) {
            ctx->pc = 0x1505FCu;
            goto label_1505fc;
        }
    }
    ctx->pc = 0x150514u;
label_150514:
    // 0x150514: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x150514u;
    {
        const bool branch_taken_0x150514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150514) {
            ctx->pc = 0x150540u;
            goto label_150540;
        }
    }
    ctx->pc = 0x15051Cu;
    // 0x15051c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x15051cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150520: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150520u;
    SET_GPR_U32(ctx, 31, 0x150528u);
    ctx->pc = 0x150524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150520u;
    // 0x150524: 0x2484c0a0  addiu       $a0, $a0, -0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150520u, 0x150528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150528u;
label_150528:
    // 0x150528: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x15052c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150530: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150530u;
    SET_GPR_U32(ctx, 31, 0x150538u);
    ctx->pc = 0x150534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150530u;
    // 0x150534: 0x2484c0f0  addiu       $a0, $a0, -0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150530u, 0x150538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150538u;
label_150538:
    // 0x150538: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x150538u;
    {
        const bool branch_taken_0x150538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150538u;
        // 0x15053c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150538) {
            ctx->pc = 0x1505FCu;
            goto label_1505fc;
        }
    }
    ctx->pc = 0x150540u;
label_150540:
    // 0x150540: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150540u;
    SET_GPR_U32(ctx, 31, 0x150548u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150540u, 0x150548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150548u;
label_150548:
    // 0x150548: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x15054c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15054cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x150550: 0x24423ac8  addiu       $v0, $v0, 0x3AC8
    ctx->pc = 0x150550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x150554: 0x2463c248  addiu       $v1, $v1, -0x3DB8
    ctx->pc = 0x150554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951496));
    // 0x150558: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x150558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15055c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15055cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150560: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x150560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x150564: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x150564u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x150568: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x150568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15056c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15056cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150570: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x150570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x150574: 0xc05446a  jal         func_1511A8
    ctx->pc = 0x150574u;
    SET_GPR_U32(ctx, 31, 0x15057Cu);
    ctx->pc = 0x150578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150574u;
    // 0x150578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511A8u, 0x150574u, 0x15057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15057Cu;
label_15057c:
    // 0x15057c: 0x142c00  sll         $a1, $s4, 16
    ctx->pc = 0x15057cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x150580: 0x153400  sll         $a2, $s5, 16
    ctx->pc = 0x150580u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x150584: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x150584u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x150588: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x150588u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x15058c: 0xc054494  jal         func_151250
    ctx->pc = 0x15058Cu;
    SET_GPR_U32(ctx, 31, 0x150594u);
    ctx->pc = 0x150590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15058Cu;
    // 0x150590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151250u, 0x15058Cu, 0x150594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150594u;
label_150594:
    // 0x150594: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150594u;
    SET_GPR_U32(ctx, 31, 0x15059Cu);
    ctx->pc = 0x150598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150594u;
    // 0x150598: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150594u, 0x15059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15059Cu;
label_15059c:
    // 0x15059c: 0x112200  sll         $a0, $s1, 8
    ctx->pc = 0x15059cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x1505a0: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x1505a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x1505a4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1505a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1505a8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1505A8u;
    SET_GPR_U32(ctx, 31, 0x1505B0u);
    ctx->pc = 0x1505ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505A8u;
    // 0x1505ac: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1505A8u, 0x1505B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505B0u;
label_1505b0:
    // 0x1505b0: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1505b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1505b4: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1505B4u;
    SET_GPR_U32(ctx, 31, 0x1505BCu);
    ctx->pc = 0x1505B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505B4u;
    // 0x1505b8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1505B4u, 0x1505BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505BCu;
label_1505bc:
    // 0x1505bc: 0x172400  sll         $a0, $s7, 16
    ctx->pc = 0x1505bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x1505c0: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1505C0u;
    SET_GPR_U32(ctx, 31, 0x1505C8u);
    ctx->pc = 0x1505C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505C0u;
    // 0x1505c4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1505C0u, 0x1505C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505C8u;
label_1505c8:
    // 0x1505c8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1505c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1505cc: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1505CCu;
    SET_GPR_U32(ctx, 31, 0x1505D4u);
    ctx->pc = 0x1505D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505CCu;
    // 0x1505d0: 0x844441a8  lh          $a0, 0x41A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1505CCu, 0x1505D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505D4u;
label_1505d4:
    // 0x1505d4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1505d8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1505D8u;
    SET_GPR_U32(ctx, 31, 0x1505E0u);
    ctx->pc = 0x1505DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505D8u;
    // 0x1505dc: 0x844441ac  lh          $a0, 0x41AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1505D8u, 0x1505E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505E0u;
label_1505e0:
    // 0x1505e0: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x1505E0u;
    SET_GPR_U32(ctx, 31, 0x1505E8u);
    ctx->pc = 0x1505E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505E0u;
    // 0x1505e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x1505E0u, 0x1505E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505E8u;
label_1505e8:
    // 0x1505e8: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1505E8u;
    SET_GPR_U32(ctx, 31, 0x1505F0u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1505E8u, 0x1505F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505F0u;
label_1505f0:
    // 0x1505f0: 0xc05471c  jal         func_151C70
    ctx->pc = 0x1505F0u;
    SET_GPR_U32(ctx, 31, 0x1505F8u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x1505F0u, 0x1505F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505F8u;
label_1505f8:
    // 0x1505f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1505f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1505fc:
    // 0x1505fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1505fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150600: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x150600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x150604: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x150604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150608: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x150608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15060c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x15060cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150610: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x150610u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150614: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x150614u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150618: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x150618u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15061c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150620: 0x3e00008  jr          $ra
    ctx->pc = 0x150620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150620u;
        // 0x150624: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150628u;
}
