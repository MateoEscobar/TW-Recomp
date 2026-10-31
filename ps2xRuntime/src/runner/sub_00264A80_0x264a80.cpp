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

// Function: sub_00264A80
// Address: 0x264a80 - 0x264bd8
void sub_00264A80_0x264a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264A80_0x264a80");
#endif

    switch (ctx->pc) {
        case 0x264a80u: goto label_264a80;
        case 0x264a84u: goto label_264a84;
        case 0x264a88u: goto label_264a88;
        case 0x264a8cu: goto label_264a8c;
        case 0x264a90u: goto label_264a90;
        case 0x264a94u: goto label_264a94;
        case 0x264a98u: goto label_264a98;
        case 0x264a9cu: goto label_264a9c;
        case 0x264aa0u: goto label_264aa0;
        case 0x264aa4u: goto label_264aa4;
        case 0x264aa8u: goto label_264aa8;
        case 0x264aacu: goto label_264aac;
        case 0x264ab0u: goto label_264ab0;
        case 0x264ab4u: goto label_264ab4;
        case 0x264ab8u: goto label_264ab8;
        case 0x264abcu: goto label_264abc;
        case 0x264ac0u: goto label_264ac0;
        case 0x264ac4u: goto label_264ac4;
        case 0x264ac8u: goto label_264ac8;
        case 0x264accu: goto label_264acc;
        case 0x264ad0u: goto label_264ad0;
        case 0x264ad4u: goto label_264ad4;
        case 0x264ad8u: goto label_264ad8;
        case 0x264adcu: goto label_264adc;
        case 0x264ae0u: goto label_264ae0;
        case 0x264ae4u: goto label_264ae4;
        case 0x264ae8u: goto label_264ae8;
        case 0x264aecu: goto label_264aec;
        case 0x264af0u: goto label_264af0;
        case 0x264af4u: goto label_264af4;
        case 0x264af8u: goto label_264af8;
        case 0x264afcu: goto label_264afc;
        case 0x264b00u: goto label_264b00;
        case 0x264b04u: goto label_264b04;
        case 0x264b08u: goto label_264b08;
        case 0x264b0cu: goto label_264b0c;
        case 0x264b10u: goto label_264b10;
        case 0x264b14u: goto label_264b14;
        case 0x264b18u: goto label_264b18;
        case 0x264b1cu: goto label_264b1c;
        case 0x264b20u: goto label_264b20;
        case 0x264b24u: goto label_264b24;
        case 0x264b28u: goto label_264b28;
        case 0x264b2cu: goto label_264b2c;
        case 0x264b30u: goto label_264b30;
        case 0x264b34u: goto label_264b34;
        case 0x264b38u: goto label_264b38;
        case 0x264b3cu: goto label_264b3c;
        case 0x264b40u: goto label_264b40;
        case 0x264b44u: goto label_264b44;
        case 0x264b48u: goto label_264b48;
        case 0x264b4cu: goto label_264b4c;
        case 0x264b50u: goto label_264b50;
        case 0x264b54u: goto label_264b54;
        case 0x264b58u: goto label_264b58;
        case 0x264b5cu: goto label_264b5c;
        case 0x264b60u: goto label_264b60;
        case 0x264b64u: goto label_264b64;
        case 0x264b68u: goto label_264b68;
        case 0x264b6cu: goto label_264b6c;
        case 0x264b70u: goto label_264b70;
        case 0x264b74u: goto label_264b74;
        case 0x264b78u: goto label_264b78;
        case 0x264b7cu: goto label_264b7c;
        case 0x264b80u: goto label_264b80;
        case 0x264b84u: goto label_264b84;
        case 0x264b88u: goto label_264b88;
        case 0x264b8cu: goto label_264b8c;
        case 0x264b90u: goto label_264b90;
        case 0x264b94u: goto label_264b94;
        case 0x264b98u: goto label_264b98;
        case 0x264b9cu: goto label_264b9c;
        case 0x264ba0u: goto label_264ba0;
        case 0x264ba4u: goto label_264ba4;
        case 0x264ba8u: goto label_264ba8;
        case 0x264bacu: goto label_264bac;
        case 0x264bb0u: goto label_264bb0;
        case 0x264bb4u: goto label_264bb4;
        case 0x264bb8u: goto label_264bb8;
        case 0x264bbcu: goto label_264bbc;
        case 0x264bc0u: goto label_264bc0;
        case 0x264bc4u: goto label_264bc4;
        case 0x264bc8u: goto label_264bc8;
        case 0x264bccu: goto label_264bcc;
        case 0x264bd0u: goto label_264bd0;
        case 0x264bd4u: goto label_264bd4;
        default: break;
    }

    ctx->pc = 0x264a80u;

label_264a80:
    // 0x264a80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x264a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_264a84:
    // 0x264a84: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x264a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_264a88:
    // 0x264a88: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x264a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_264a8c:
    // 0x264a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264a90:
    // 0x264a90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x264a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_264a94:
    // 0x264a94: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x264a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_264a98:
    // 0x264a98: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x264a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_264a9c:
    // 0x264a9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x264a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_264aa0:
    // 0x264aa0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x264aa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_264aa4:
    // 0x264aa4: 0x2484ddf8  addiu       $a0, $a0, -0x2208
    ctx->pc = 0x264aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958584));
label_264aa8:
    // 0x264aa8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x264aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_264aac:
    // 0x264aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_264ab0:
    // 0x264ab0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x264ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_264ab4:
    // 0x264ab4: 0xc041532  jal         func_1054C8
label_264ab8:
    if (ctx->pc == 0x264AB8u) {
        ctx->pc = 0x264AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AB4u;
        // 0x264ab8: 0x8e1400d8  lw          $s4, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264ABCu;
        goto label_264abc;
    }
    ctx->pc = 0x264AB4u;
    SET_GPR_U32(ctx, 31, 0x264ABCu);
    ctx->pc = 0x264AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264AB4u;
    // 0x264ab8: 0x8e1400d8  lw          $s4, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x264AB4u, 0x264ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264ABCu;
label_264abc:
    // 0x264abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264ac0:
    // 0x264ac0: 0xc089b98  jal         func_226E60
label_264ac4:
    if (ctx->pc == 0x264AC4u) {
        ctx->pc = 0x264AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC0u;
        // 0x264ac4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264AC8u;
        goto label_264ac8;
    }
    ctx->pc = 0x264AC0u;
    SET_GPR_U32(ctx, 31, 0x264AC8u);
    ctx->pc = 0x264AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264AC0u;
    // 0x264ac4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x264AC0u, 0x264AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AC8u;
label_264ac8:
    // 0x264ac8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x264ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264acc:
    // 0x264acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264ad0:
    // 0x264ad0: 0xc095142  jal         func_254508
label_264ad4:
    if (ctx->pc == 0x264AD4u) {
        ctx->pc = 0x264AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AD0u;
        // 0x264ad4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264AD8u;
        goto label_264ad8;
    }
    ctx->pc = 0x264AD0u;
    SET_GPR_U32(ctx, 31, 0x264AD8u);
    ctx->pc = 0x264AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264AD0u;
    // 0x264ad4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x264AD0u, 0x264AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AD8u;
label_264ad8:
    // 0x264ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264adc:
    // 0x264adc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x264adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_264ae0:
    // 0x264ae0: 0xc095128  jal         func_2544A0
label_264ae4:
    if (ctx->pc == 0x264AE4u) {
        ctx->pc = 0x264AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AE0u;
        // 0x264ae4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x264AE8u;
        goto label_264ae8;
    }
    ctx->pc = 0x264AE0u;
    SET_GPR_U32(ctx, 31, 0x264AE8u);
    ctx->pc = 0x264AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264AE0u;
    // 0x264ae4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x264AE0u, 0x264AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AE8u;
label_264ae8:
    // 0x264ae8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x264ae8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_264aec:
    // 0x264aec: 0xc087502  jal         func_21D408
label_264af0:
    if (ctx->pc == 0x264AF0u) {
        ctx->pc = 0x264AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AECu;
        // 0x264af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264AF4u;
        goto label_264af4;
    }
    ctx->pc = 0x264AECu;
    SET_GPR_U32(ctx, 31, 0x264AF4u);
    ctx->pc = 0x264AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264AECu;
    // 0x264af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x264AECu, 0x264AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AF4u;
label_264af4:
    // 0x264af4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x264af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_264af8:
    // 0x264af8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_264afc:
    if (ctx->pc == 0x264AFCu) {
        ctx->pc = 0x264B00u;
        goto label_264b00;
    }
    ctx->pc = 0x264AF8u;
    {
        const bool branch_taken_0x264af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264af8) {
            ctx->pc = 0x264B24u;
            goto label_264b24;
        }
    }
    ctx->pc = 0x264B00u;
label_264b00:
    // 0x264b00: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_264b04:
    if (ctx->pc == 0x264B04u) {
        ctx->pc = 0x264B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B00u;
        // 0x264b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B08u;
        goto label_264b08;
    }
    ctx->pc = 0x264B00u;
    {
        const bool branch_taken_0x264b00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x264B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B00u;
        // 0x264b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b00) {
            ctx->pc = 0x264B2Cu;
            goto label_264b2c;
        }
    }
    ctx->pc = 0x264B08u;
label_264b08:
    // 0x264b08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x264b08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_264b0c:
    // 0x264b0c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x264b0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_264b10:
    // 0x264b10: 0xc09ec16  jal         func_27B058
label_264b14:
    if (ctx->pc == 0x264B14u) {
        ctx->pc = 0x264B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B10u;
        // 0x264b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B18u;
        goto label_264b18;
    }
    ctx->pc = 0x264B10u;
    SET_GPR_U32(ctx, 31, 0x264B18u);
    ctx->pc = 0x264B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B10u;
    // 0x264b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B058u, 0x264B10u, 0x264B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B18u;
label_264b18:
    // 0x264b18: 0xc08a61a  jal         func_229868
label_264b1c:
    if (ctx->pc == 0x264B1Cu) {
        ctx->pc = 0x264B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B18u;
        // 0x264b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B20u;
        goto label_264b20;
    }
    ctx->pc = 0x264B18u;
    SET_GPR_U32(ctx, 31, 0x264B20u);
    ctx->pc = 0x264B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B18u;
    // 0x264b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x264B18u, 0x264B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B20u;
label_264b20:
    // 0x264b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x264b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264b24:
    // 0x264b24: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_264b28:
    if (ctx->pc == 0x264B28u) {
        ctx->pc = 0x264B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B24u;
        // 0x264b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B2Cu;
        goto label_264b2c;
    }
    ctx->pc = 0x264B24u;
    {
        const bool branch_taken_0x264b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B24u;
        // 0x264b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b24) {
            ctx->pc = 0x264B38u;
            goto label_264b38;
        }
    }
    ctx->pc = 0x264B2Cu;
label_264b2c:
    // 0x264b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264b30:
    // 0x264b30: 0xc087570  jal         func_21D5C0
label_264b34:
    if (ctx->pc == 0x264B34u) {
        ctx->pc = 0x264B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B30u;
        // 0x264b34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B38u;
        goto label_264b38;
    }
    ctx->pc = 0x264B30u;
    SET_GPR_U32(ctx, 31, 0x264B38u);
    ctx->pc = 0x264B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B30u;
    // 0x264b34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x264B30u, 0x264B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B38u;
label_264b38:
    // 0x264b38: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
label_264b3c:
    if (ctx->pc == 0x264B3Cu) {
        ctx->pc = 0x264B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B38u;
        // 0x264b3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B40u;
        goto label_264b40;
    }
    ctx->pc = 0x264B38u;
    {
        const bool branch_taken_0x264b38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b38) {
            ctx->pc = 0x264B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264B38u;
            // 0x264b3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264B88u;
            goto label_264b88;
        }
    }
    ctx->pc = 0x264B40u;
label_264b40:
    // 0x264b40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x264b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264b44:
    // 0x264b44: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x264b44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_264b48:
    // 0x264b48: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x264b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_264b4c:
    // 0x264b4c: 0x40f809  jalr        $v0
label_264b50:
    if (ctx->pc == 0x264B50u) {
        ctx->pc = 0x264B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B4Cu;
        // 0x264b50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B54u;
        goto label_264b54;
    }
    ctx->pc = 0x264B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264B54u);
        ctx->pc = 0x264B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B4Cu;
        // 0x264b50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264B4Cu, 0x264B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264B54u;
label_264b54:
    // 0x264b54: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x264b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_264b58:
    // 0x264b58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x264b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_264b5c:
    // 0x264b5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x264b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_264b60:
    // 0x264b60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x264b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_264b64:
    // 0x264b64: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x264b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_264b68:
    // 0x264b68: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x264b68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264b6c:
    // 0x264b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x264b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_264b70:
    // 0x264b70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x264b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_264b74:
    // 0x264b74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264b78:
    // 0x264b78: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x264b78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
label_264b7c:
    // 0x264b7c: 0xc041890  jal         func_106240
label_264b80:
    if (ctx->pc == 0x264B80u) {
        ctx->pc = 0x264B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B7Cu;
        // 0x264b80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B84u;
        goto label_264b84;
    }
    ctx->pc = 0x264B7Cu;
    SET_GPR_U32(ctx, 31, 0x264B84u);
    ctx->pc = 0x264B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B7Cu;
    // 0x264b80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106240u, 0x264B7Cu, 0x264B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B84u;
label_264b84:
    // 0x264b84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x264b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_264b88:
    // 0x264b88: 0xc05d4f6  jal         func_1753D8
label_264b8c:
    if (ctx->pc == 0x264B8Cu) {
        ctx->pc = 0x264B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B88u;
        // 0x264b8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264B90u;
        goto label_264b90;
    }
    ctx->pc = 0x264B88u;
    SET_GPR_U32(ctx, 31, 0x264B90u);
    ctx->pc = 0x264B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B88u;
    // 0x264b8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x264B88u, 0x264B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B90u;
label_264b90:
    // 0x264b90: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x264b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_264b94:
    // 0x264b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264b98:
    // 0x264b98: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x264b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_264b9c:
    // 0x264b9c: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x264b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
label_264ba0:
    // 0x264ba0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x264ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_264ba4:
    // 0x264ba4: 0xc089990  jal         func_226640
label_264ba8:
    if (ctx->pc == 0x264BA8u) {
        ctx->pc = 0x264BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BA4u;
        // 0x264ba8: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264BACu;
        goto label_264bac;
    }
    ctx->pc = 0x264BA4u;
    SET_GPR_U32(ctx, 31, 0x264BACu);
    ctx->pc = 0x264BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264BA4u;
    // 0x264ba8: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x264BA4u, 0x264BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264BACu;
label_264bac:
    // 0x264bac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x264bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_264bb0:
    // 0x264bb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x264bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_264bb4:
    // 0x264bb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x264bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_264bb8:
    // 0x264bb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x264bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_264bbc:
    // 0x264bbc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x264bbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_264bc0:
    // 0x264bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264bc4:
    // 0x264bc4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x264bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_264bc8:
    // 0x264bc8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x264bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_264bcc:
    // 0x264bcc: 0x3e00008  jr          $ra
label_264bd0:
    if (ctx->pc == 0x264BD0u) {
        ctx->pc = 0x264BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BCCu;
        // 0x264bd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264BD4u;
        goto label_264bd4;
    }
    ctx->pc = 0x264BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BCCu;
        // 0x264bd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264BD4u;
label_264bd4:
    // 0x264bd4: 0x0  nop
    ctx->pc = 0x264bd4u;
    // NOP
    ctx->pc = 0x264bd8u;
}
