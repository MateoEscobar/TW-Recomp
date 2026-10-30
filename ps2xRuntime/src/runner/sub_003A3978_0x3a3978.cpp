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

// Function: sub_003A3978
// Address: 0x3a3978 - 0x3a3ba0
void sub_003A3978_0x3a3978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3978_0x3a3978");
#endif

    switch (ctx->pc) {
        case 0x3a39b8u: goto label_3a39b8;
        case 0x3a39c4u: goto label_3a39c4;
        case 0x3a3a20u: goto label_3a3a20;
        case 0x3a3a2cu: goto label_3a3a2c;
        case 0x3a3a4cu: goto label_3a3a4c;
        case 0x3a3a58u: goto label_3a3a58;
        case 0x3a3a70u: goto label_3a3a70;
        case 0x3a3a80u: goto label_3a3a80;
        case 0x3a3a9cu: goto label_3a3a9c;
        case 0x3a3aacu: goto label_3a3aac;
        case 0x3a3ad0u: goto label_3a3ad0;
        case 0x3a3ae8u: goto label_3a3ae8;
        case 0x3a3b04u: goto label_3a3b04;
        case 0x3a3b2cu: goto label_3a3b2c;
        case 0x3a3b3cu: goto label_3a3b3c;
        default: break;
    }

    ctx->pc = 0x3a3978u;

    // 0x3a3978: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a3978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a397c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3a397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3a3980: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3a3980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3a3984: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3a3984u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3a3988: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3a3988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3a398c: 0x262316c0  addiu       $v1, $s1, 0x16C0
    ctx->pc = 0x3a398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
    // 0x3a3990: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a3990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a3994: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a3994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3998: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3a3998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3a399c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a399cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a39a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a39a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a39a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a39a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a39a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a39ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a39acu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x3a39b0: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A39B0u;
    SET_GPR_U32(ctx, 31, 0x3A39B8u);
    ctx->pc = 0x3A39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A39B0u;
    // 0x3a39b4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A39B0u, 0x3A39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A39B8u;
label_3a39b8:
    // 0x3a39b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a39b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a39bc: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x3A39BCu;
    SET_GPR_U32(ctx, 31, 0x3A39C4u);
    ctx->pc = 0x3A39C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A39BCu;
    // 0x3a39c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x3A39BCu, 0x3A39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A39C4u;
label_3a39c4:
    // 0x3a39c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a39c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a39c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3a39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3a39cc: 0x12620019  beq         $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A39CCu;
    {
        const bool branch_taken_0x3a39cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A39D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39CCu;
        // 0x3a39d0: 0x2a62000d  slti        $v0, $s3, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39cc) {
            ctx->pc = 0x3A3A34u;
            goto label_3a3a34;
        }
    }
    ctx->pc = 0x3A39D4u;
    // 0x3a39d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A39D4u;
    {
        const bool branch_taken_0x3a39d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39D4u;
        // 0x3a39d8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39d4) {
            ctx->pc = 0x3A39ECu;
            goto label_3a39ec;
        }
    }
    ctx->pc = 0x3A39DCu;
    // 0x3a39dc: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A39DCu;
    {
        const bool branch_taken_0x3a39dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39DCu;
        // 0x3a39e0: 0x262316c0  addiu       $v1, $s1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39dc) {
            ctx->pc = 0x3A3A08u;
            goto label_3a3a08;
        }
    }
    ctx->pc = 0x3A39E4u;
    // 0x3a39e4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3A39E4u;
    {
        const bool branch_taken_0x3a39e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39E4u;
        // 0x3a39e8: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39e4) {
            ctx->pc = 0x3A3B6Cu;
            goto label_3a3b6c;
        }
    }
    ctx->pc = 0x3A39ECu;
label_3a39ec:
    // 0x3a39ec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3a39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3a39f0: 0x1262001b  beq         $s3, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A39F0u;
    {
        const bool branch_taken_0x3a39f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39F0u;
        // 0x3a39f4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39f0) {
            ctx->pc = 0x3A3A60u;
            goto label_3a3a60;
        }
    }
    ctx->pc = 0x3A39F8u;
    // 0x3a39f8: 0x1262003e  beq         $s3, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3A39F8u;
    {
        const bool branch_taken_0x3a39f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39F8u;
        // 0x3a39fc: 0x262316c0  addiu       $v1, $s1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39f8) {
            ctx->pc = 0x3A3AF4u;
            goto label_3a3af4;
        }
    }
    ctx->pc = 0x3A3A00u;
    // 0x3a3a00: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3A3A00u;
    {
        const bool branch_taken_0x3a3a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A00u;
        // 0x3a3a04: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a00) {
            ctx->pc = 0x3A3B6Cu;
            goto label_3a3b6c;
        }
    }
    ctx->pc = 0x3A3A08u;
label_3a3a08:
    // 0x3a3a08: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x3A3A08u;
    {
        const bool branch_taken_0x3a3a08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A08u;
        // 0x3a3a0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a08) {
            ctx->pc = 0x3A3B70u;
            goto label_3a3b70;
        }
    }
    ctx->pc = 0x3A3A10u;
    // 0x3a3a10: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x3a3a10u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    // 0x3a3a14: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3a3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x3a3a18: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3A18u;
    SET_GPR_U32(ctx, 31, 0x3A3A20u);
    ctx->pc = 0x3A3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A18u;
    // 0x3a3a1c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3A18u, 0x3A3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A20u;
label_3a3a20:
    // 0x3a3a20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a3a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a24: 0xc0e460a  jal         func_391828
    ctx->pc = 0x3A3A24u;
    SET_GPR_U32(ctx, 31, 0x3A3A2Cu);
    ctx->pc = 0x3A3A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A24u;
    // 0x3a3a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391828u, 0x3A3A24u, 0x3A3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A2Cu;
label_3a3a2c:
    // 0x3a3a2c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3A3A2Cu;
    {
        const bool branch_taken_0x3a3a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A2Cu;
        // 0x3a3a30: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a2c) {
            ctx->pc = 0x3A3B6Cu;
            goto label_3a3b6c;
        }
    }
    ctx->pc = 0x3A3A34u;
label_3a3a34:
    // 0x3a3a34: 0x1240004e  beqz        $s2, . + 4 + (0x4E << 2)
    ctx->pc = 0x3A3A34u;
    {
        const bool branch_taken_0x3a3a34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A34u;
        // 0x3a3a38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a34) {
            ctx->pc = 0x3A3B70u;
            goto label_3a3b70;
        }
    }
    ctx->pc = 0x3A3A3Cu;
    // 0x3a3a3c: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x3a3a3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    // 0x3a3a40: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3a3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x3a3a44: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3A44u;
    SET_GPR_U32(ctx, 31, 0x3A3A4Cu);
    ctx->pc = 0x3A3A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A44u;
    // 0x3a3a48: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3A44u, 0x3A3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A4Cu;
label_3a3a4c:
    // 0x3a3a4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a3a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a50: 0xc0e4620  jal         func_391880
    ctx->pc = 0x3A3A50u;
    SET_GPR_U32(ctx, 31, 0x3A3A58u);
    ctx->pc = 0x3A3A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A50u;
    // 0x3a3a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391880u, 0x3A3A50u, 0x3A3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A58u;
label_3a3a58:
    // 0x3a3a58: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3A3A58u;
    {
        const bool branch_taken_0x3a3a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A58u;
        // 0x3a3a5c: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a58) {
            ctx->pc = 0x3A3B6Cu;
            goto label_3a3b6c;
        }
    }
    ctx->pc = 0x3A3A60u;
label_3a3a60:
    // 0x3a3a60: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x3A3A60u;
    {
        const bool branch_taken_0x3a3a60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3a60) {
            ctx->pc = 0x3A3A8Cu;
            goto label_3a3a8c;
        }
    }
    ctx->pc = 0x3A3A68u;
    // 0x3a3a68: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3A68u;
    SET_GPR_U32(ctx, 31, 0x3A3A70u);
    ctx->pc = 0x3A3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A68u;
    // 0x3a3a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3A68u, 0x3A3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A70u;
label_3a3a70:
    // 0x3a3a70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3a70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a3a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a78: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3A78u;
    SET_GPR_U32(ctx, 31, 0x3A3A80u);
    ctx->pc = 0x3A3A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A78u;
    // 0x3a3a7c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3A78u, 0x3A3A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A80u;
label_3a3a80:
    // 0x3a3a80: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a3a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3a84: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a3a84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a3a88: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3a3a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3a3a8c:
    // 0x3a3a8c: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A3A8Cu;
    {
        const bool branch_taken_0x3a3a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A8Cu;
        // 0x3a3a90: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a8c) {
            ctx->pc = 0x3A3B74u;
            goto label_3a3b74;
        }
    }
    ctx->pc = 0x3A3A94u;
    // 0x3a3a94: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3A94u;
    SET_GPR_U32(ctx, 31, 0x3A3A9Cu);
    ctx->pc = 0x3A3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3A94u;
    // 0x3a3a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3A94u, 0x3A3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3A9Cu;
label_3a3a9c:
    // 0x3a3a9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3a9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3aa4: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3AA4u;
    SET_GPR_U32(ctx, 31, 0x3A3AACu);
    ctx->pc = 0x3A3AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3AA4u;
    // 0x3a3aa8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3AA4u, 0x3A3AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3AACu;
label_3a3aac:
    // 0x3a3aac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3a3aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a3ab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a3ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3ab4: 0x0  nop
    ctx->pc = 0x3a3ab4u;
    // NOP
    // 0x3a3ab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a3ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a3abc: 0x0  nop
    ctx->pc = 0x3a3abcu;
    // NOP
    // 0x3a3ac0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3A3AC0u;
    {
        const bool branch_taken_0x3a3ac0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a3ac0) {
            ctx->pc = 0x3A3AE0u;
            goto label_3a3ae0;
        }
    }
    ctx->pc = 0x3A3AC8u;
    // 0x3a3ac8: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3AC8u;
    SET_GPR_U32(ctx, 31, 0x3A3AD0u);
    ctx->pc = 0x3A3ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3AC8u;
    // 0x3a3acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3AC8u, 0x3A3AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3AD0u;
label_3a3ad0:
    // 0x3a3ad0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3ad4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a3ad4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a3ad8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3A3AD8u;
    {
        const bool branch_taken_0x3a3ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AD8u;
        // 0x3a3adc: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ad8) {
            ctx->pc = 0x3A3B70u;
            goto label_3a3b70;
        }
    }
    ctx->pc = 0x3A3AE0u;
label_3a3ae0:
    // 0x3a3ae0: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3AE0u;
    SET_GPR_U32(ctx, 31, 0x3A3AE8u);
    ctx->pc = 0x3A3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3AE0u;
    // 0x3a3ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3AE0u, 0x3A3AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3AE8u;
label_3a3ae8:
    // 0x3a3ae8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3aec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3A3AECu;
    {
        const bool branch_taken_0x3a3aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AECu;
        // 0x3a3af0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3aec) {
            ctx->pc = 0x3A3B70u;
            goto label_3a3b70;
        }
    }
    ctx->pc = 0x3A3AF4u;
label_3a3af4:
    // 0x3a3af4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3AF4u;
    {
        const bool branch_taken_0x3a3af4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3af4) {
            ctx->pc = 0x3A3B1Cu;
            goto label_3a3b1c;
        }
    }
    ctx->pc = 0x3A3AFCu;
    // 0x3a3afc: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3AFCu;
    SET_GPR_U32(ctx, 31, 0x3A3B04u);
    ctx->pc = 0x3A3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3AFCu;
    // 0x3a3b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3AFCu, 0x3A3B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B04u;
label_3a3b04:
    // 0x3a3b04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3b04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3b08: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x3a3b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x3a3b0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a3b0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a3b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3b14: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a3b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3a3b18: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3a3b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3a3b1c:
    // 0x3a3b1c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A3B1Cu;
    {
        const bool branch_taken_0x3a3b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B1Cu;
        // 0x3a3b20: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b1c) {
            ctx->pc = 0x3A3B74u;
            goto label_3a3b74;
        }
    }
    ctx->pc = 0x3A3B24u;
    // 0x3a3b24: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3B24u;
    SET_GPR_U32(ctx, 31, 0x3A3B2Cu);
    ctx->pc = 0x3A3B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B24u;
    // 0x3a3b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3B24u, 0x3A3B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B2Cu;
label_3a3b2c:
    // 0x3a3b2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3b2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3b34: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x3A3B34u;
    SET_GPR_U32(ctx, 31, 0x3A3B3Cu);
    ctx->pc = 0x3A3B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B34u;
    // 0x3a3b38: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3A3B34u, 0x3A3B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B3Cu;
label_3a3b3c:
    // 0x3a3b3c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3a3b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a3b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a3b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3b44: 0x0  nop
    ctx->pc = 0x3a3b44u;
    // NOP
    // 0x3a3b48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3a3b48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a3b4c: 0x0  nop
    ctx->pc = 0x3a3b4cu;
    // NOP
    // 0x3a3b50: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3B50u;
    {
        const bool branch_taken_0x3a3b50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B50u;
        // 0x3a3b54: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b50) {
            ctx->pc = 0x3A3B74u;
            goto label_3a3b74;
        }
    }
    ctx->pc = 0x3A3B58u;
    // 0x3a3b58: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x3a3b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x3a3b5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a3b5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a3b60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3b64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3B64u;
    {
        const bool branch_taken_0x3a3b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B64u;
        // 0x3a3b68: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b64) {
            ctx->pc = 0x3A3B70u;
            goto label_3a3b70;
        }
    }
    ctx->pc = 0x3A3B6Cu;
label_3a3b6c:
    // 0x3a3b6c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a3b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3a3b70:
    // 0x3a3b70: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a3b70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3b74:
    // 0x3a3b74: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a3b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3b78: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3a3b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a3b7c: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x3a3b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x3a3b80: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3a3b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a3b84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3a3b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a3b88: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a3b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a3b8c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3a3b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3b90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a3b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3b94: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B94u;
        // 0x3a3b98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3B9Cu;
    // 0x3a3b9c: 0x0  nop
    ctx->pc = 0x3a3b9cu;
    // NOP
    ctx->pc = 0x3a3ba0u;
}
