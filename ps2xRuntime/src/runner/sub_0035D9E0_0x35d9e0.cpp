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

// Function: sub_0035D9E0
// Address: 0x35d9e0 - 0x35dc08
void sub_0035D9E0_0x35d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D9E0_0x35d9e0");
#endif

    switch (ctx->pc) {
        case 0x35da20u: goto label_35da20;
        case 0x35da28u: goto label_35da28;
        case 0x35da44u: goto label_35da44;
        case 0x35da4cu: goto label_35da4c;
        case 0x35da68u: goto label_35da68;
        case 0x35da70u: goto label_35da70;
        case 0x35da8cu: goto label_35da8c;
        case 0x35da94u: goto label_35da94;
        case 0x35dab0u: goto label_35dab0;
        case 0x35dab8u: goto label_35dab8;
        case 0x35dad0u: goto label_35dad0;
        case 0x35dad8u: goto label_35dad8;
        case 0x35daf0u: goto label_35daf0;
        case 0x35daf8u: goto label_35daf8;
        case 0x35db10u: goto label_35db10;
        case 0x35db18u: goto label_35db18;
        case 0x35db30u: goto label_35db30;
        case 0x35db38u: goto label_35db38;
        case 0x35db50u: goto label_35db50;
        case 0x35db58u: goto label_35db58;
        case 0x35db70u: goto label_35db70;
        case 0x35db78u: goto label_35db78;
        case 0x35db90u: goto label_35db90;
        case 0x35db98u: goto label_35db98;
        case 0x35dbd4u: goto label_35dbd4;
        default: break;
    }

    ctx->pc = 0x35d9e0u;

    // 0x35d9e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x35d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x35d9e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d9e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x35d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x35d9ec: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x35d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x35d9f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35d9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d9f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35d9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d9f8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x35d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x35d9fc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x35d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x35da00: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x35da00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x35da04: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x35da04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x35da08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x35da0c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x35da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x35da10: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x35da10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x35da14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35da18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DA18u;
    SET_GPR_U32(ctx, 31, 0x35DA20u);
    ctx->pc = 0x35DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA18u;
    // 0x35da1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DA18u, 0x35DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA20u;
label_35da20:
    // 0x35da20: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DA20u;
    SET_GPR_U32(ctx, 31, 0x35DA28u);
    ctx->pc = 0x35DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA20u;
    // 0x35da24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DA20u, 0x35DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA28u;
label_35da28:
    // 0x35da28: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35da28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35da2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35da2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35da30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35da34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35da34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35da38: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x35da38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x35da3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DA3Cu;
    SET_GPR_U32(ctx, 31, 0x35DA44u);
    ctx->pc = 0x35DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA3Cu;
    // 0x35da40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DA3Cu, 0x35DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA44u;
label_35da44:
    // 0x35da44: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DA44u;
    SET_GPR_U32(ctx, 31, 0x35DA4Cu);
    ctx->pc = 0x35DA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA44u;
    // 0x35da48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DA44u, 0x35DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA4Cu;
label_35da4c:
    // 0x35da4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35da50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35da50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35da54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35da58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35da5c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x35da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x35da60: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DA60u;
    SET_GPR_U32(ctx, 31, 0x35DA68u);
    ctx->pc = 0x35DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA60u;
    // 0x35da64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DA60u, 0x35DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA68u;
label_35da68:
    // 0x35da68: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DA68u;
    SET_GPR_U32(ctx, 31, 0x35DA70u);
    ctx->pc = 0x35DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA68u;
    // 0x35da6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DA68u, 0x35DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA70u;
label_35da70:
    // 0x35da70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35da70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35da74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35da74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da78: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35da78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35da7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35da80: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x35da80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x35da84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DA84u;
    SET_GPR_U32(ctx, 31, 0x35DA8Cu);
    ctx->pc = 0x35DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA84u;
    // 0x35da88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DA84u, 0x35DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA8Cu;
label_35da8c:
    // 0x35da8c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DA8Cu;
    SET_GPR_U32(ctx, 31, 0x35DA94u);
    ctx->pc = 0x35DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA8Cu;
    // 0x35da90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DA8Cu, 0x35DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA94u;
label_35da94:
    // 0x35da94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35da94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35da98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35da98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35da9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35daa0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35daa4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x35daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x35daa8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DAA8u;
    SET_GPR_U32(ctx, 31, 0x35DAB0u);
    ctx->pc = 0x35DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAA8u;
    // 0x35daac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DAA8u, 0x35DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAB0u;
label_35dab0:
    // 0x35dab0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DAB0u;
    SET_GPR_U32(ctx, 31, 0x35DAB8u);
    ctx->pc = 0x35DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAB0u;
    // 0x35dab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DAB0u, 0x35DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAB8u;
label_35dab8:
    // 0x35dab8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35dabc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35dabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dac0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35dac4: 0x2f403  sra         $fp, $v0, 16
    ctx->pc = 0x35dac4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35dac8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DAC8u;
    SET_GPR_U32(ctx, 31, 0x35DAD0u);
    ctx->pc = 0x35DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAC8u;
    // 0x35dacc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DAC8u, 0x35DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAD0u;
label_35dad0:
    // 0x35dad0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DAD0u;
    SET_GPR_U32(ctx, 31, 0x35DAD8u);
    ctx->pc = 0x35DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAD0u;
    // 0x35dad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DAD0u, 0x35DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAD8u;
label_35dad8:
    // 0x35dad8: 0x2bc00  sll         $s7, $v0, 16
    ctx->pc = 0x35dad8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35dadc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35dadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dae0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35dae4: 0x17bc03  sra         $s7, $s7, 16
    ctx->pc = 0x35dae4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 23), 16));
    // 0x35dae8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DAE8u;
    SET_GPR_U32(ctx, 31, 0x35DAF0u);
    ctx->pc = 0x35DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAE8u;
    // 0x35daec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DAE8u, 0x35DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAF0u;
label_35daf0:
    // 0x35daf0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DAF0u;
    SET_GPR_U32(ctx, 31, 0x35DAF8u);
    ctx->pc = 0x35DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAF0u;
    // 0x35daf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DAF0u, 0x35DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAF8u;
label_35daf8:
    // 0x35daf8: 0x2b400  sll         $s6, $v0, 16
    ctx->pc = 0x35daf8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35dafc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35dafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db00: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35db00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35db04: 0x16b403  sra         $s6, $s6, 16
    ctx->pc = 0x35db04u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 16));
    // 0x35db08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DB08u;
    SET_GPR_U32(ctx, 31, 0x35DB10u);
    ctx->pc = 0x35DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB08u;
    // 0x35db0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DB08u, 0x35DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB10u;
label_35db10:
    // 0x35db10: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DB10u;
    SET_GPR_U32(ctx, 31, 0x35DB18u);
    ctx->pc = 0x35DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB10u;
    // 0x35db14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DB10u, 0x35DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB18u;
label_35db18:
    // 0x35db18: 0x2ac00  sll         $s5, $v0, 16
    ctx->pc = 0x35db18u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35db1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35db1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db20: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x35db20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x35db24: 0x15ac03  sra         $s5, $s5, 16
    ctx->pc = 0x35db24u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 21), 16));
    // 0x35db28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DB28u;
    SET_GPR_U32(ctx, 31, 0x35DB30u);
    ctx->pc = 0x35DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB28u;
    // 0x35db2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DB28u, 0x35DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB30u;
label_35db30:
    // 0x35db30: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DB30u;
    SET_GPR_U32(ctx, 31, 0x35DB38u);
    ctx->pc = 0x35DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB30u;
    // 0x35db34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DB30u, 0x35DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB38u;
label_35db38:
    // 0x35db38: 0x2a400  sll         $s4, $v0, 16
    ctx->pc = 0x35db38u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35db3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35db3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db40: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x35db40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35db44: 0x14a403  sra         $s4, $s4, 16
    ctx->pc = 0x35db44u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 16));
    // 0x35db48: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DB48u;
    SET_GPR_U32(ctx, 31, 0x35DB50u);
    ctx->pc = 0x35DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB48u;
    // 0x35db4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DB48u, 0x35DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB50u;
label_35db50:
    // 0x35db50: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DB50u;
    SET_GPR_U32(ctx, 31, 0x35DB58u);
    ctx->pc = 0x35DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB50u;
    // 0x35db54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DB50u, 0x35DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB58u;
label_35db58:
    // 0x35db58: 0x29c00  sll         $s3, $v0, 16
    ctx->pc = 0x35db58u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35db5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35db5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db60: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x35db60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x35db64: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x35db64u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
    // 0x35db68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DB68u;
    SET_GPR_U32(ctx, 31, 0x35DB70u);
    ctx->pc = 0x35DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB68u;
    // 0x35db6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DB68u, 0x35DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB70u;
label_35db70:
    // 0x35db70: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DB70u;
    SET_GPR_U32(ctx, 31, 0x35DB78u);
    ctx->pc = 0x35DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB70u;
    // 0x35db74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DB70u, 0x35DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB78u;
label_35db78:
    // 0x35db78: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35db78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35db7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35db7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db80: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35db80u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35db84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35db84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DB88u;
    SET_GPR_U32(ctx, 31, 0x35DB90u);
    ctx->pc = 0x35DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB88u;
    // 0x35db8c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DB88u, 0x35DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB90u;
label_35db90:
    // 0x35db90: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35DB90u;
    SET_GPR_U32(ctx, 31, 0x35DB98u);
    ctx->pc = 0x35DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB90u;
    // 0x35db94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35DB90u, 0x35DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB98u;
label_35db98:
    // 0x35db98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35db98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35db9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x35db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35dba0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35dba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35dba4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x35dba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x35dba8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x35dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35dbac: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x35dbacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dbb0: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x35dbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x35dbb4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x35dbb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dbb8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x35dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x35dbbc: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x35dbbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dbc0: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x35dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x35dbc4: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x35dbc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dbc8: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x35dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x35dbcc: 0xc0bfbac  jal         func_2FEEB0
    ctx->pc = 0x35DBCCu;
    SET_GPR_U32(ctx, 31, 0x35DBD4u);
    ctx->pc = 0x35DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DBCCu;
    // 0x35dbd0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEEB0u, 0x35DBCCu, 0x35DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DBD4u;
label_35dbd4:
    // 0x35dbd4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x35dbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x35dbd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dbdc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x35dbdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35dbe0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x35dbe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35dbe4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x35dbe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35dbe8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x35dbe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35dbec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x35dbecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35dbf0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35dbf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35dbf4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x35dbf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35dbf8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x35dbf8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35dbfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35dbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35dc00: 0x3e00008  jr          $ra
    ctx->pc = 0x35DC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC00u;
        // 0x35dc04: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DC08u;
}
