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

// Function: sub_00358930
// Address: 0x358930 - 0x358aa0
void sub_00358930_0x358930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358930_0x358930");
#endif

    switch (ctx->pc) {
        case 0x358960u: goto label_358960;
        case 0x358968u: goto label_358968;
        case 0x35897cu: goto label_35897c;
        case 0x358998u: goto label_358998;
        case 0x3589c0u: goto label_3589c0;
        case 0x3589c8u: goto label_3589c8;
        case 0x3589d8u: goto label_3589d8;
        case 0x3589f0u: goto label_3589f0;
        case 0x3589f8u: goto label_3589f8;
        case 0x358a1cu: goto label_358a1c;
        case 0x358a28u: goto label_358a28;
        case 0x358a3cu: goto label_358a3c;
        case 0x358a54u: goto label_358a54;
        case 0x358a68u: goto label_358a68;
        default: break;
    }

    ctx->pc = 0x358930u;

    // 0x358930: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x358930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x358934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358938: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x358938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x35893c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35893cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358940: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x358940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x358944: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x358944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x358948: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x358948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x35894c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x35894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x358950: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x358950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x358954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x358954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x358958: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358958u;
    SET_GPR_U32(ctx, 31, 0x358960u);
    ctx->pc = 0x35895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358958u;
    // 0x35895c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358958u, 0x358960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358960u;
label_358960:
    // 0x358960: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358960u;
    SET_GPR_U32(ctx, 31, 0x358968u);
    ctx->pc = 0x358964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358960u;
    // 0x358964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358960u, 0x358968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358968u;
label_358968:
    // 0x358968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35896c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358970: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x358970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358974: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358974u;
    SET_GPR_U32(ctx, 31, 0x35897Cu);
    ctx->pc = 0x358978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358974u;
    // 0x358978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358974u, 0x35897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35897Cu;
label_35897c:
    // 0x35897c: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x35897cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358980: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x358980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x358984: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x358984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x358988: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x358988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35898c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x35898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x358990: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x358994: 0x0  nop
    ctx->pc = 0x358994u;
    // NOP
label_358998:
    // 0x358998: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x358998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35899c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3589a0: 0x0  nop
    ctx->pc = 0x3589a0u;
    // NOP
    // 0x3589a4: 0x0  nop
    ctx->pc = 0x3589a4u;
    // NOP
    // 0x3589a8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3589A8u;
    {
        const bool branch_taken_0x3589a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3589ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589A8u;
        // 0x3589ac: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589a8) {
            ctx->pc = 0x358998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358998;
        }
    }
    ctx->pc = 0x3589B0u;
    // 0x3589b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3589b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3589b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3589b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3589B8u;
    SET_GPR_U32(ctx, 31, 0x3589C0u);
    ctx->pc = 0x3589BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589B8u;
    // 0x3589bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3589B8u, 0x3589C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589C0u;
label_3589c0:
    // 0x3589c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3589C0u;
    SET_GPR_U32(ctx, 31, 0x3589C8u);
    ctx->pc = 0x3589C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589C0u;
    // 0x3589c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3589C0u, 0x3589C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589C8u;
label_3589c8:
    // 0x3589c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3589c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3589ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589d0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3589d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589d4: 0x0  nop
    ctx->pc = 0x3589d4u;
    // NOP
label_3589d8:
    // 0x3589d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3589d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3589dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3589dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3589e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3589e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3589e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3589e8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3589E8u;
    SET_GPR_U32(ctx, 31, 0x3589F0u);
    ctx->pc = 0x3589ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589E8u;
    // 0x3589ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3589E8u, 0x3589F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589F0u;
label_3589f0:
    // 0x3589f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3589F0u;
    SET_GPR_U32(ctx, 31, 0x3589F8u);
    ctx->pc = 0x3589F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589F0u;
    // 0x3589f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3589F0u, 0x3589F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589F8u;
label_3589f8:
    // 0x3589f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3589f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3589fc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x3589fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x358a00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x358A00u;
    {
        const bool branch_taken_0x358a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A00u;
        // 0x358a04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a00) {
            ctx->pc = 0x3589D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3589d8;
        }
    }
    ctx->pc = 0x358A08u;
    // 0x358a08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x358a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x358a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x358a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a14: 0xc08d0c6  jal         func_234318
    ctx->pc = 0x358A14u;
    SET_GPR_U32(ctx, 31, 0x358A1Cu);
    ctx->pc = 0x358A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A14u;
    // 0x358a18: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234318u, 0x358A14u, 0x358A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A1Cu;
label_358a1c:
    // 0x358a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a20: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x358a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x358a24: 0x0  nop
    ctx->pc = 0x358a24u;
    // NOP
label_358a28:
    // 0x358a28: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x358a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x358a2c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x358a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x358a30: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x358a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358a34: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x358A34u;
    SET_GPR_U32(ctx, 31, 0x358A3Cu);
    ctx->pc = 0x358A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A34u;
    // 0x358a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x358A34u, 0x358A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A3Cu;
label_358a3c:
    // 0x358a3c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358A3Cu;
    {
        const bool branch_taken_0x358a3c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x358A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A3Cu;
        // 0x358a40: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a3c) {
            ctx->pc = 0x358A58u;
            goto label_358a58;
        }
    }
    ctx->pc = 0x358A44u;
    // 0x358a44: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x358a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x358a48: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x358a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x358a4c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x358A4Cu;
    SET_GPR_U32(ctx, 31, 0x358A54u);
    ctx->pc = 0x358A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A4Cu;
    // 0x358a50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x358A4Cu, 0x358A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A54u;
label_358a54:
    // 0x358a54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x358a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358a58:
    // 0x358a58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x358a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a60: 0xc102576  jal         func_4095D8
    ctx->pc = 0x358A60u;
    SET_GPR_U32(ctx, 31, 0x358A68u);
    ctx->pc = 0x358A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358A60u;
    // 0x358a64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x358A60u, 0x358A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358A68u;
label_358a68:
    // 0x358a68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x358a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a6c: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x358a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x358a70: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x358A70u;
    {
        const bool branch_taken_0x358a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A70u;
        // 0x358a74: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a70) {
            ctx->pc = 0x358A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358a28;
        }
    }
    ctx->pc = 0x358A78u;
    // 0x358a78: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x358a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x358a7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358a80: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x358a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x358a84: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x358a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x358a88: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x358a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x358a8c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x358a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x358a90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x358a90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x358a94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x358a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x358a98: 0x3e00008  jr          $ra
    ctx->pc = 0x358A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A98u;
        // 0x358a9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358AA0u;
}
