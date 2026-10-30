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

// Function: sub_0029CE98
// Address: 0x29ce98 - 0x29d330
void sub_0029CE98_0x29ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE98_0x29ce98");
#endif

    switch (ctx->pc) {
        case 0x29cee0u: goto label_29cee0;
        case 0x29ceecu: goto label_29ceec;
        case 0x29cf00u: goto label_29cf00;
        case 0x29cf14u: goto label_29cf14;
        case 0x29cf28u: goto label_29cf28;
        case 0x29cf4cu: goto label_29cf4c;
        case 0x29cf68u: goto label_29cf68;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cfdcu: goto label_29cfdc;
        case 0x29d000u: goto label_29d000;
        case 0x29d03cu: goto label_29d03c;
        case 0x29d070u: goto label_29d070;
        case 0x29d0a0u: goto label_29d0a0;
        case 0x29d0c8u: goto label_29d0c8;
        case 0x29d0f4u: goto label_29d0f4;
        case 0x29d120u: goto label_29d120;
        case 0x29d14cu: goto label_29d14c;
        case 0x29d174u: goto label_29d174;
        case 0x29d1b8u: goto label_29d1b8;
        case 0x29d1e4u: goto label_29d1e4;
        case 0x29d1f4u: goto label_29d1f4;
        case 0x29d244u: goto label_29d244;
        case 0x29d294u: goto label_29d294;
        case 0x29d2b0u: goto label_29d2b0;
        case 0x29d2d8u: goto label_29d2d8;
        default: break;
    }

    ctx->pc = 0x29ce98u;

    // 0x29ce98: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x29ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29ce9c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x29ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x29cea0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x29cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x29cea4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29cea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cea8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x29cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x29ceac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29ceacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ceb0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x29ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x29ceb4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29ceb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ceb8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x29ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x29cebc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x29cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x29cec0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x29cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x29cec4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x29cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x29cec8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x29cec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x29cecc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29ced0: 0x12600035  beqz        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x29CED0u;
    {
        const bool branch_taken_0x29ced0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CED0u;
        // 0x29ced4: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ced0) {
            ctx->pc = 0x29CFA8u;
            goto label_29cfa8;
        }
    }
    ctx->pc = 0x29CED8u;
    // 0x29ced8: 0xc087502  jal         func_21D408
    ctx->pc = 0x29CED8u;
    SET_GPR_U32(ctx, 31, 0x29CEE0u);
    ctx->pc = 0x29CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CED8u;
    // 0x29cedc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29CED8u, 0x29CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEE0u;
label_29cee0:
    // 0x29cee0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29cee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cee4: 0xc0a2acc  jal         func_28AB30
    ctx->pc = 0x29CEE4u;
    SET_GPR_U32(ctx, 31, 0x29CEECu);
    ctx->pc = 0x29CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEE4u;
    // 0x29cee8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x29CEE4u, 0x29CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEECu;
label_29ceec:
    // 0x29ceec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cef0: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x29CEF0u;
    {
        const bool branch_taken_0x29cef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEF0u;
        // 0x29cef4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cef0) {
            ctx->pc = 0x29CFA8u;
            goto label_29cfa8;
        }
    }
    ctx->pc = 0x29CEF8u;
    // 0x29cef8: 0xc0a3720  jal         func_28DC80
    ctx->pc = 0x29CEF8u;
    SET_GPR_U32(ctx, 31, 0x29CF00u);
    ctx->pc = 0x29CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEF8u;
    // 0x29cefc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DC80u, 0x29CEF8u, 0x29CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF00u;
label_29cf00:
    // 0x29cf00: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29cf00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf04: 0x13c00028  beqz        $fp, . + 4 + (0x28 << 2)
    ctx->pc = 0x29CF04u;
    {
        const bool branch_taken_0x29cf04 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF04u;
        // 0x29cf08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf04) {
            ctx->pc = 0x29CFA8u;
            goto label_29cfa8;
        }
    }
    ctx->pc = 0x29CF0Cu;
    // 0x29cf0c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29CF0Cu;
    SET_GPR_U32(ctx, 31, 0x29CF14u);
    ctx->pc = 0x29CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF0Cu;
    // 0x29cf10: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29CF0Cu, 0x29CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF14u;
label_29cf14:
    // 0x29cf14: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x29cf14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf18: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29cf18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29cf1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf20: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x29CF20u;
    SET_GPR_U32(ctx, 31, 0x29CF28u);
    ctx->pc = 0x29CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF20u;
    // 0x29cf24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x29CF20u, 0x29CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF28u;
label_29cf28:
    // 0x29cf28: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x29cf28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x29cf2c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x29cf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x29cf30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29cf30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29cf34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29cf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf38: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29cf3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29cf40: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29cf40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29cf44: 0xc0a2af0  jal         func_28ABC0
    ctx->pc = 0x29CF44u;
    SET_GPR_U32(ctx, 31, 0x29CF4Cu);
    ctx->pc = 0x29CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF44u;
    // 0x29cf48: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x29CF44u, 0x29CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF4Cu;
label_29cf4c:
    // 0x29cf4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29CF4Cu;
    {
        const bool branch_taken_0x29cf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF4Cu;
        // 0x29cf50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf4c) {
            ctx->pc = 0x29CF74u;
            goto label_29cf74;
        }
    }
    ctx->pc = 0x29CF54u;
    // 0x29cf54: 0x92c202d3  lbu         $v0, 0x2D3($s6)
    ctx->pc = 0x29cf54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 723)));
    // 0x29cf58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CF58u;
    {
        const bool branch_taken_0x29cf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF58u;
        // 0x29cf5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf58) {
            ctx->pc = 0x29CF70u;
            goto label_29cf70;
        }
    }
    ctx->pc = 0x29CF60u;
    // 0x29cf60: 0xc0a3fd6  jal         func_28FF58
    ctx->pc = 0x29CF60u;
    SET_GPR_U32(ctx, 31, 0x29CF68u);
    ctx->pc = 0x29CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF60u;
    // 0x29cf64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF58u, 0x29CF60u, 0x29CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF68u;
label_29cf68:
    // 0x29cf68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CF68u;
    {
        const bool branch_taken_0x29cf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF68u;
        // 0x29cf6c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf68) {
            ctx->pc = 0x29CF7Cu;
            goto label_29cf7c;
        }
    }
    ctx->pc = 0x29CF70u;
label_29cf70:
    // 0x29cf70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_29cf74:
    // 0x29cf74: 0x8c510b94  lw          $s1, 0xB94($v0)
    ctx->pc = 0x29cf74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2964)));
    // 0x29cf78: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x29cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_29cf7c:
    // 0x29cf7c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29CF7Cu;
    {
        const bool branch_taken_0x29cf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF7Cu;
        // 0x29cf80: 0x26e24b00  addiu       $v0, $s7, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf7c) {
            ctx->pc = 0x29CFC8u;
            goto label_29cfc8;
        }
    }
    ctx->pc = 0x29CF84u;
    // 0x29cf84: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x29cf84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x29cf88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf8c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x29cf90: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x29CF90u;
    SET_GPR_U32(ctx, 31, 0x29CF98u);
    ctx->pc = 0x29CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF90u;
    // 0x29cf94: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x29CF90u, 0x29CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF98u;
label_29cf98:
    // 0x29cf98: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29cf98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cf9c: 0x0  nop
    ctx->pc = 0x29cf9cu;
    // NOP
    // 0x29cfa0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29CFA0u;
    {
        const bool branch_taken_0x29cfa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFA0u;
        // 0x29cfa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfa0) {
            ctx->pc = 0x29CFB0u;
            goto label_29cfb0;
        }
    }
    ctx->pc = 0x29CFA8u;
label_29cfa8:
    // 0x29cfa8: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x29CFA8u;
    {
        const bool branch_taken_0x29cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFA8u;
        // 0x29cfac: 0x2402fc19  addiu       $v0, $zero, -0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfa8) {
            ctx->pc = 0x29D2F8u;
            goto label_29d2f8;
        }
    }
    ctx->pc = 0x29CFB0u;
label_29cfb0:
    // 0x29cfb0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x29cfb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x29cfb4: 0xc4410b4c  lwc1        $f1, 0xB4C($v0)
    ctx->pc = 0x29cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cfb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29cfb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29cfbc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cfbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29cfc0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29cfc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29cfc4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29cfc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29cfc8:
    // 0x29cfc8: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x29cfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x29cfcc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29CFCCu;
    {
        const bool branch_taken_0x29cfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFCCu;
        // 0x29cfd0: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfcc) {
            ctx->pc = 0x29D02Cu;
            goto label_29d02c;
        }
    }
    ctx->pc = 0x29CFD4u;
    // 0x29cfd4: 0xc05959e  jal         func_165678
    ctx->pc = 0x29CFD4u;
    SET_GPR_U32(ctx, 31, 0x29CFDCu);
    ctx->pc = 0x29CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFD4u;
    // 0x29cfd8: 0x8ec4020c  lw          $a0, 0x20C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x29CFD4u, 0x29CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFDCu;
label_29cfdc:
    // 0x29cfdc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x29CFDCu;
    {
        const bool branch_taken_0x29cfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cfdc) {
            ctx->pc = 0x29CFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CFDCu;
            // 0x29cfe0: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D02Cu;
            goto label_29d02c;
        }
    }
    ctx->pc = 0x29CFE4u;
    // 0x29cfe4: 0x10540010  beq         $v0, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x29CFE4u;
    {
        const bool branch_taken_0x29cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x29CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFE4u;
        // 0x29cfe8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfe4) {
            ctx->pc = 0x29D028u;
            goto label_29d028;
        }
    }
    ctx->pc = 0x29CFECu;
    // 0x29cfec: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x29cfecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x29cff0: 0x26e24b00  addiu       $v0, $s7, 0x4B00
    ctx->pc = 0x29cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
    // 0x29cff4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x29cff8: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x29CFF8u;
    SET_GPR_U32(ctx, 31, 0x29D000u);
    ctx->pc = 0x29CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFF8u;
    // 0x29cffc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x29CFF8u, 0x29D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D000u;
label_29d000:
    // 0x29d000: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x29d000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d004: 0x0  nop
    ctx->pc = 0x29d004u;
    // NOP
    // 0x29d008: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x29D008u;
    {
        const bool branch_taken_0x29d008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D008u;
        // 0x29d00c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d008) {
            ctx->pc = 0x29D028u;
            goto label_29d028;
        }
    }
    ctx->pc = 0x29D010u;
    // 0x29d010: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x29d010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x29d014: 0xc4410b50  lwc1        $f1, 0xB50($v0)
    ctx->pc = 0x29d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d018: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29d018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29d01c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29d01cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29d020: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29d020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29d024: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29d028:
    // 0x29d028: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x29d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_29d02c:
    // 0x29d02c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29D02Cu;
    {
        const bool branch_taken_0x29d02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D02Cu;
        // 0x29d030: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d02c) {
            ctx->pc = 0x29D060u;
            goto label_29d060;
        }
    }
    ctx->pc = 0x29D034u;
    // 0x29d034: 0xc05959e  jal         func_165678
    ctx->pc = 0x29D034u;
    SET_GPR_U32(ctx, 31, 0x29D03Cu);
    ctx->pc = 0x29D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D034u;
    // 0x29d038: 0x8ea4020c  lw          $a0, 0x20C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x29D034u, 0x29D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D03Cu;
label_29d03c:
    // 0x29d03c: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D03Cu;
    {
        const bool branch_taken_0x29d03c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x29D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D03Cu;
        // 0x29d040: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d03c) {
            ctx->pc = 0x29D060u;
            goto label_29d060;
        }
    }
    ctx->pc = 0x29D044u;
    // 0x29d044: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x29d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x29d048: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x29d048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x29d04c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D04Cu;
    {
        const bool branch_taken_0x29d04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D04Cu;
        // 0x29d050: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d04c) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29D054u;
    // 0x29d054: 0x8c430b54  lw          $v1, 0xB54($v0)
    ctx->pc = 0x29d054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2900)));
    // 0x29d058: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_29d05c:
    // 0x29d05c: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x29d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
label_29d060:
    // 0x29d060: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D060u;
    {
        const bool branch_taken_0x29d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D060u;
        // 0x29d064: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d060) {
            ctx->pc = 0x29D08Cu;
            goto label_29d08c;
        }
    }
    ctx->pc = 0x29D068u;
    // 0x29d068: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x29D068u;
    SET_GPR_U32(ctx, 31, 0x29D070u);
    ctx->pc = 0x29D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D068u;
    // 0x29d06c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x29D068u, 0x29D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D070u;
label_29d070:
    // 0x29d070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d074: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D074u;
    {
        const bool branch_taken_0x29d074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D074u;
        // 0x29d078: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d074) {
            ctx->pc = 0x29D08Cu;
            goto label_29d08c;
        }
    }
    ctx->pc = 0x29D07Cu;
    // 0x29d07c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d080: 0x8c430b58  lw          $v1, 0xB58($v0)
    ctx->pc = 0x29d080u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B58u));
    // 0x29d084: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d088: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x29d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_29d08c:
    // 0x29d08c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D08Cu;
    {
        const bool branch_taken_0x29d08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D08Cu;
        // 0x29d090: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d08c) {
            ctx->pc = 0x29D0B4u;
            goto label_29d0b4;
        }
    }
    ctx->pc = 0x29D094u;
    // 0x29d094: 0xc6cc012c  lwc1        $f12, 0x12C($s6)
    ctx->pc = 0x29d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29d098: 0xc0889c4  jal         func_222710
    ctx->pc = 0x29D098u;
    SET_GPR_U32(ctx, 31, 0x29D0A0u);
    ctx->pc = 0x29D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D098u;
    // 0x29d09c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x29D098u, 0x29D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0A0u;
label_29d0a0:
    // 0x29d0a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D0A0u;
    {
        const bool branch_taken_0x29d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0A0u;
        // 0x29d0a4: 0x32420020  andi        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0a0) {
            ctx->pc = 0x29D0B8u;
            goto label_29d0b8;
        }
    }
    ctx->pc = 0x29D0A8u;
    // 0x29d0a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d0ac: 0x8c430b5c  lw          $v1, 0xB5C($v0)
    ctx->pc = 0x29d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B5Cu));
    // 0x29d0b0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_29d0b4:
    // 0x29d0b4: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x29d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
label_29d0b8:
    // 0x29d0b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D0B8u;
    {
        const bool branch_taken_0x29d0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0B8u;
        // 0x29d0bc: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0b8) {
            ctx->pc = 0x29D0E4u;
            goto label_29d0e4;
        }
    }
    ctx->pc = 0x29D0C0u;
    // 0x29d0c0: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x29D0C0u;
    SET_GPR_U32(ctx, 31, 0x29D0C8u);
    ctx->pc = 0x29D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D0C0u;
    // 0x29d0c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x29D0C0u, 0x29D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0C8u;
label_29d0c8:
    // 0x29d0c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d0cc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D0CCu;
    {
        const bool branch_taken_0x29d0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0CCu;
        // 0x29d0d0: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0cc) {
            ctx->pc = 0x29D0E4u;
            goto label_29d0e4;
        }
    }
    ctx->pc = 0x29D0D4u;
    // 0x29d0d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d0d8: 0x8c430b60  lw          $v1, 0xB60($v0)
    ctx->pc = 0x29d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B60u));
    // 0x29d0dc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d0e0: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x29d0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_29d0e4:
    // 0x29d0e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D0E4u;
    {
        const bool branch_taken_0x29d0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0E4u;
        // 0x29d0e8: 0x32420080  andi        $v0, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0e4) {
            ctx->pc = 0x29D110u;
            goto label_29d110;
        }
    }
    ctx->pc = 0x29D0ECu;
    // 0x29d0ec: 0xc088e48  jal         func_223920
    ctx->pc = 0x29D0ECu;
    SET_GPR_U32(ctx, 31, 0x29D0F4u);
    ctx->pc = 0x29D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D0ECu;
    // 0x29d0f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x29D0ECu, 0x29D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0F4u;
label_29d0f4:
    // 0x29d0f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d0f8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D0F8u;
    {
        const bool branch_taken_0x29d0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0F8u;
        // 0x29d0fc: 0x32420080  andi        $v0, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0f8) {
            ctx->pc = 0x29D110u;
            goto label_29d110;
        }
    }
    ctx->pc = 0x29D100u;
    // 0x29d100: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d104: 0x8c430b64  lw          $v1, 0xB64($v0)
    ctx->pc = 0x29d104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B64u));
    // 0x29d108: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d10c: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x29d10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
label_29d110:
    // 0x29d110: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D110u;
    {
        const bool branch_taken_0x29d110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D110u;
        // 0x29d114: 0x32420200  andi        $v0, $s2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d110) {
            ctx->pc = 0x29D13Cu;
            goto label_29d13c;
        }
    }
    ctx->pc = 0x29D118u;
    // 0x29d118: 0xc088e58  jal         func_223960
    ctx->pc = 0x29D118u;
    SET_GPR_U32(ctx, 31, 0x29D120u);
    ctx->pc = 0x29D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D118u;
    // 0x29d11c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x29D118u, 0x29D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D120u;
label_29d120:
    // 0x29d120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d124: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D124u;
    {
        const bool branch_taken_0x29d124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D124u;
        // 0x29d128: 0x32420200  andi        $v0, $s2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d124) {
            ctx->pc = 0x29D13Cu;
            goto label_29d13c;
        }
    }
    ctx->pc = 0x29D12Cu;
    // 0x29d12c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d130: 0x8c430b68  lw          $v1, 0xB68($v0)
    ctx->pc = 0x29d130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B68u));
    // 0x29d134: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d138: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x29d138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
label_29d13c:
    // 0x29d13c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D13Cu;
    {
        const bool branch_taken_0x29d13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D13Cu;
        // 0x29d140: 0x32420400  andi        $v0, $s2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d13c) {
            ctx->pc = 0x29D164u;
            goto label_29d164;
        }
    }
    ctx->pc = 0x29D144u;
    // 0x29d144: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29D144u;
    SET_GPR_U32(ctx, 31, 0x29D14Cu);
    ctx->pc = 0x29D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D144u;
    // 0x29d148: 0x26a40124  addiu       $a0, $s5, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29D144u, 0x29D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D14Cu;
label_29d14c:
    // 0x29d14c: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D14Cu;
    {
        const bool branch_taken_0x29d14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x29D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D14Cu;
        // 0x29d150: 0x32420400  andi        $v0, $s2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d14c) {
            ctx->pc = 0x29D164u;
            goto label_29d164;
        }
    }
    ctx->pc = 0x29D154u;
    // 0x29d154: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d158: 0x8c430b6c  lw          $v1, 0xB6C($v0)
    ctx->pc = 0x29d158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B6Cu));
    // 0x29d15c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d160: 0x32420400  andi        $v0, $s2, 0x400
    ctx->pc = 0x29d160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
label_29d164:
    // 0x29d164: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D164u;
    {
        const bool branch_taken_0x29d164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D164u;
        // 0x29d168: 0x32420800  andi        $v0, $s2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d164) {
            ctx->pc = 0x29D190u;
            goto label_29d190;
        }
    }
    ctx->pc = 0x29D16Cu;
    // 0x29d16c: 0xc088e98  jal         func_223A60
    ctx->pc = 0x29D16Cu;
    SET_GPR_U32(ctx, 31, 0x29D174u);
    ctx->pc = 0x29D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D16Cu;
    // 0x29d170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x29D16Cu, 0x29D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D174u;
label_29d174:
    // 0x29d174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d178: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D178u;
    {
        const bool branch_taken_0x29d178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D178u;
        // 0x29d17c: 0x32420800  andi        $v0, $s2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d178) {
            ctx->pc = 0x29D190u;
            goto label_29d190;
        }
    }
    ctx->pc = 0x29D180u;
    // 0x29d180: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d184: 0x8c430b70  lw          $v1, 0xB70($v0)
    ctx->pc = 0x29d184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B70u));
    // 0x29d188: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d18c: 0x32420800  andi        $v0, $s2, 0x800
    ctx->pc = 0x29d18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
label_29d190:
    // 0x29d190: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D190u;
    {
        const bool branch_taken_0x29d190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D190u;
        // 0x29d194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d190) {
            ctx->pc = 0x29D1A4u;
            goto label_29d1a4;
        }
    }
    ctx->pc = 0x29D198u;
    // 0x29d198: 0x8c430b74  lw          $v1, 0xB74($v0)
    ctx->pc = 0x29d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2932)));
    // 0x29d19c: 0x3c31018  mult        $v0, $fp, $v1
    ctx->pc = 0x29d19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29d1a0: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x29d1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29d1a4:
    // 0x29d1a4: 0x32421000  andi        $v0, $s2, 0x1000
    ctx->pc = 0x29d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
    // 0x29d1a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D1A8u;
    {
        const bool branch_taken_0x29d1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1A8u;
        // 0x29d1ac: 0x32422000  andi        $v0, $s2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1a8) {
            ctx->pc = 0x29D1D4u;
            goto label_29d1d4;
        }
    }
    ctx->pc = 0x29D1B0u;
    // 0x29d1b0: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x29D1B0u;
    SET_GPR_U32(ctx, 31, 0x29D1B8u);
    ctx->pc = 0x29D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1B0u;
    // 0x29d1b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x29D1B0u, 0x29D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1B8u;
label_29d1b8:
    // 0x29d1b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d1bc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D1BCu;
    {
        const bool branch_taken_0x29d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1BCu;
        // 0x29d1c0: 0x32422000  andi        $v0, $s2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1bc) {
            ctx->pc = 0x29D1D4u;
            goto label_29d1d4;
        }
    }
    ctx->pc = 0x29D1C4u;
    // 0x29d1c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d1c8: 0x8c430b78  lw          $v1, 0xB78($v0)
    ctx->pc = 0x29d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B78u));
    // 0x29d1cc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d1d0: 0x32422000  andi        $v0, $s2, 0x2000
    ctx->pc = 0x29d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
label_29d1d4:
    // 0x29d1d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29D1D4u;
    {
        const bool branch_taken_0x29d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1D4u;
        // 0x29d1d8: 0x32424000  andi        $v0, $s2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1d4) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D1DCu;
    // 0x29d1dc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29D1DCu;
    SET_GPR_U32(ctx, 31, 0x29D1E4u);
    ctx->pc = 0x29D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1DCu;
    // 0x29d1e0: 0x26a40124  addiu       $a0, $s5, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29D1DCu, 0x29D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1E4u;
label_29d1e4:
    // 0x29d1e4: 0x1454000a  bne         $v0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x29D1E4u;
    {
        const bool branch_taken_0x29d1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x29D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1E4u;
        // 0x29d1e8: 0x32424000  andi        $v0, $s2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1e4) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D1ECu;
    // 0x29d1ec: 0xc089018  jal         func_224060
    ctx->pc = 0x29D1ECu;
    SET_GPR_U32(ctx, 31, 0x29D1F4u);
    ctx->pc = 0x29D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1ECu;
    // 0x29d1f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x29D1ECu, 0x29D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1F4u;
label_29d1f4:
    // 0x29d1f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d1f8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D1F8u;
    {
        const bool branch_taken_0x29d1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1F8u;
        // 0x29d1fc: 0x32424000  andi        $v0, $s2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1f8) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D200u;
    // 0x29d200: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d204: 0x8c430b7c  lw          $v1, 0xB7C($v0)
    ctx->pc = 0x29d204u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B7Cu));
    // 0x29d208: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d20c: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x29d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
label_29d210:
    // 0x29d210: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D210u;
    {
        const bool branch_taken_0x29d210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D210u;
        // 0x29d214: 0x32428000  andi        $v0, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d210) {
            ctx->pc = 0x29D234u;
            goto label_29d234;
        }
    }
    ctx->pc = 0x29D218u;
    // 0x29d218: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x29d218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x29d21c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29d21cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x29d220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D220u;
    {
        const bool branch_taken_0x29d220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D220u;
        // 0x29d224: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d220) {
            ctx->pc = 0x29D230u;
            goto label_29d230;
        }
    }
    ctx->pc = 0x29D228u;
    // 0x29d228: 0x8c430b80  lw          $v1, 0xB80($v0)
    ctx->pc = 0x29d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2944)));
    // 0x29d22c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_29d230:
    // 0x29d230: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x29d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
label_29d234:
    // 0x29d234: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D234u;
    {
        const bool branch_taken_0x29d234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D234u;
        // 0x29d238: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d234) {
            ctx->pc = 0x29D260u;
            goto label_29d260;
        }
    }
    ctx->pc = 0x29D23Cu;
    // 0x29d23c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x29D23Cu;
    SET_GPR_U32(ctx, 31, 0x29D244u);
    ctx->pc = 0x29D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D23Cu;
    // 0x29d240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x29D23Cu, 0x29D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D244u;
label_29d244:
    // 0x29d244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d248: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D248u;
    {
        const bool branch_taken_0x29d248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D248u;
        // 0x29d24c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d248) {
            ctx->pc = 0x29D260u;
            goto label_29d260;
        }
    }
    ctx->pc = 0x29D250u;
    // 0x29d250: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d254: 0x8c430b98  lw          $v1, 0xB98($v0)
    ctx->pc = 0x29d254u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B98u));
    // 0x29d258: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d25c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_29d260:
    // 0x29d260: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x29d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x29d264: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D264u;
    {
        const bool branch_taken_0x29d264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D264u;
        // 0x29d268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d264) {
            ctx->pc = 0x29D284u;
            goto label_29d284;
        }
    }
    ctx->pc = 0x29D26Cu;
    // 0x29d26c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x29d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29d270: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D270u;
    {
        const bool branch_taken_0x29d270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D270u;
        // 0x29d274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d270) {
            ctx->pc = 0x29D288u;
            goto label_29d288;
        }
    }
    ctx->pc = 0x29D278u;
    // 0x29d278: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d27c: 0x8c430ba0  lw          $v1, 0xBA0($v0)
    ctx->pc = 0x29d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510BA0u));
    // 0x29d280: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_29d284:
    // 0x29d284: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d288:
    // 0x29d288: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29d288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d28c: 0xc08886c  jal         func_2221B0
    ctx->pc = 0x29D28Cu;
    SET_GPR_U32(ctx, 31, 0x29D294u);
    ctx->pc = 0x29D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D28Cu;
    // 0x29d290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x29D28Cu, 0x29D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D294u;
label_29d294:
    // 0x29d294: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D294u;
    {
        const bool branch_taken_0x29d294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D294u;
        // 0x29d298: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d294) {
            ctx->pc = 0x29D2A8u;
            goto label_29d2a8;
        }
    }
    ctx->pc = 0x29D29Cu;
    // 0x29d29c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d2a0: 0x8c430b90  lw          $v1, 0xB90($v0)
    ctx->pc = 0x29d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B90u));
    // 0x29d2a4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_29d2a8:
    // 0x29d2a8: 0xc0a43aa  jal         func_290EA8
    ctx->pc = 0x29D2A8u;
    SET_GPR_U32(ctx, 31, 0x29D2B0u);
    ctx->pc = 0x29D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2A8u;
    // 0x29d2ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290EA8u, 0x29D2A8u, 0x29D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2B0u;
label_29d2b0:
    // 0x29d2b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D2B0u;
    {
        const bool branch_taken_0x29d2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d2b0) {
            ctx->pc = 0x29D2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D2B0u;
            // 0x29d2b4: 0x8ec3020c  lw          $v1, 0x20C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D2C8u;
            goto label_29d2c8;
        }
    }
    ctx->pc = 0x29D2B8u;
    // 0x29d2b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d2bc: 0x8c430b9c  lw          $v1, 0xB9C($v0)
    ctx->pc = 0x29d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510B9Cu));
    // 0x29d2c0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d2c4: 0x8ec3020c  lw          $v1, 0x20C($s6)
    ctx->pc = 0x29d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 524)));
label_29d2c8:
    // 0x29d2c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29d2cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x29d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29d2d0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29D2D0u;
    SET_GPR_U32(ctx, 31, 0x29D2D8u);
    ctx->pc = 0x29D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2D0u;
    // 0x29d2d4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29D2D0u, 0x29D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2D8u;
label_29d2d8:
    // 0x29d2d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D2D8u;
    {
        const bool branch_taken_0x29d2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d2d8) {
            ctx->pc = 0x29D2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D2D8u;
            // 0x29d2dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D2F8u;
            goto label_29d2f8;
        }
    }
    ctx->pc = 0x29D2E0u;
    // 0x29d2e0: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D2E0u;
    {
        const bool branch_taken_0x29d2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x29D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2E0u;
        // 0x29d2e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2e0) {
            ctx->pc = 0x29D2F8u;
            goto label_29d2f8;
        }
    }
    ctx->pc = 0x29D2E8u;
    // 0x29d2e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d2ec: 0x8c430ba4  lw          $v1, 0xBA4($v0)
    ctx->pc = 0x29d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510BA4u));
    // 0x29d2f0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x29d2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29d2f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29d2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d2f8:
    // 0x29d2f8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x29d2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29d2fc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x29d2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29d300: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x29d300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29d304: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x29d304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29d308: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x29d308u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29d30c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29d30cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d310: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x29d310u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d314: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x29d314u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d318: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x29d318u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d31c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d320: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x29d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29d324: 0x3e00008  jr          $ra
    ctx->pc = 0x29D324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D324u;
        // 0x29d328: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D32Cu;
    // 0x29d32c: 0x0  nop
    ctx->pc = 0x29d32cu;
    // NOP
    ctx->pc = 0x29d330u;
}
