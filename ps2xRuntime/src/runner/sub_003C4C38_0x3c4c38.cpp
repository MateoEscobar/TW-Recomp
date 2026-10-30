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

// Function: sub_003C4C38
// Address: 0x3c4c38 - 0x3c4db0
void sub_003C4C38_0x3c4c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4C38_0x3c4c38");
#endif

    switch (ctx->pc) {
        case 0x3c4c38u: goto label_3c4c38;
        case 0x3c4c3cu: goto label_3c4c3c;
        case 0x3c4c40u: goto label_3c4c40;
        case 0x3c4c44u: goto label_3c4c44;
        case 0x3c4c48u: goto label_3c4c48;
        case 0x3c4c4cu: goto label_3c4c4c;
        case 0x3c4c50u: goto label_3c4c50;
        case 0x3c4c54u: goto label_3c4c54;
        case 0x3c4c58u: goto label_3c4c58;
        case 0x3c4c5cu: goto label_3c4c5c;
        case 0x3c4c60u: goto label_3c4c60;
        case 0x3c4c64u: goto label_3c4c64;
        case 0x3c4c68u: goto label_3c4c68;
        case 0x3c4c6cu: goto label_3c4c6c;
        case 0x3c4c70u: goto label_3c4c70;
        case 0x3c4c74u: goto label_3c4c74;
        case 0x3c4c78u: goto label_3c4c78;
        case 0x3c4c7cu: goto label_3c4c7c;
        case 0x3c4c80u: goto label_3c4c80;
        case 0x3c4c84u: goto label_3c4c84;
        case 0x3c4c88u: goto label_3c4c88;
        case 0x3c4c8cu: goto label_3c4c8c;
        case 0x3c4c90u: goto label_3c4c90;
        case 0x3c4c94u: goto label_3c4c94;
        case 0x3c4c98u: goto label_3c4c98;
        case 0x3c4c9cu: goto label_3c4c9c;
        case 0x3c4ca0u: goto label_3c4ca0;
        case 0x3c4ca4u: goto label_3c4ca4;
        case 0x3c4ca8u: goto label_3c4ca8;
        case 0x3c4cacu: goto label_3c4cac;
        case 0x3c4cb0u: goto label_3c4cb0;
        case 0x3c4cb4u: goto label_3c4cb4;
        case 0x3c4cb8u: goto label_3c4cb8;
        case 0x3c4cbcu: goto label_3c4cbc;
        case 0x3c4cc0u: goto label_3c4cc0;
        case 0x3c4cc4u: goto label_3c4cc4;
        case 0x3c4cc8u: goto label_3c4cc8;
        case 0x3c4cccu: goto label_3c4ccc;
        case 0x3c4cd0u: goto label_3c4cd0;
        case 0x3c4cd4u: goto label_3c4cd4;
        case 0x3c4cd8u: goto label_3c4cd8;
        case 0x3c4cdcu: goto label_3c4cdc;
        case 0x3c4ce0u: goto label_3c4ce0;
        case 0x3c4ce4u: goto label_3c4ce4;
        case 0x3c4ce8u: goto label_3c4ce8;
        case 0x3c4cecu: goto label_3c4cec;
        case 0x3c4cf0u: goto label_3c4cf0;
        case 0x3c4cf4u: goto label_3c4cf4;
        case 0x3c4cf8u: goto label_3c4cf8;
        case 0x3c4cfcu: goto label_3c4cfc;
        case 0x3c4d00u: goto label_3c4d00;
        case 0x3c4d04u: goto label_3c4d04;
        case 0x3c4d08u: goto label_3c4d08;
        case 0x3c4d0cu: goto label_3c4d0c;
        case 0x3c4d10u: goto label_3c4d10;
        case 0x3c4d14u: goto label_3c4d14;
        case 0x3c4d18u: goto label_3c4d18;
        case 0x3c4d1cu: goto label_3c4d1c;
        case 0x3c4d20u: goto label_3c4d20;
        case 0x3c4d24u: goto label_3c4d24;
        case 0x3c4d28u: goto label_3c4d28;
        case 0x3c4d2cu: goto label_3c4d2c;
        case 0x3c4d30u: goto label_3c4d30;
        case 0x3c4d34u: goto label_3c4d34;
        case 0x3c4d38u: goto label_3c4d38;
        case 0x3c4d3cu: goto label_3c4d3c;
        case 0x3c4d40u: goto label_3c4d40;
        case 0x3c4d44u: goto label_3c4d44;
        case 0x3c4d48u: goto label_3c4d48;
        case 0x3c4d4cu: goto label_3c4d4c;
        case 0x3c4d50u: goto label_3c4d50;
        case 0x3c4d54u: goto label_3c4d54;
        case 0x3c4d58u: goto label_3c4d58;
        case 0x3c4d5cu: goto label_3c4d5c;
        case 0x3c4d60u: goto label_3c4d60;
        case 0x3c4d64u: goto label_3c4d64;
        case 0x3c4d68u: goto label_3c4d68;
        case 0x3c4d6cu: goto label_3c4d6c;
        case 0x3c4d70u: goto label_3c4d70;
        case 0x3c4d74u: goto label_3c4d74;
        case 0x3c4d78u: goto label_3c4d78;
        case 0x3c4d7cu: goto label_3c4d7c;
        case 0x3c4d80u: goto label_3c4d80;
        case 0x3c4d84u: goto label_3c4d84;
        case 0x3c4d88u: goto label_3c4d88;
        case 0x3c4d8cu: goto label_3c4d8c;
        case 0x3c4d90u: goto label_3c4d90;
        case 0x3c4d94u: goto label_3c4d94;
        case 0x3c4d98u: goto label_3c4d98;
        case 0x3c4d9cu: goto label_3c4d9c;
        case 0x3c4da0u: goto label_3c4da0;
        case 0x3c4da4u: goto label_3c4da4;
        case 0x3c4da8u: goto label_3c4da8;
        case 0x3c4dacu: goto label_3c4dac;
        default: break;
    }

    ctx->pc = 0x3c4c38u;

label_3c4c38:
    // 0x3c4c38: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x3c4c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_3c4c3c:
    // 0x3c4c3c: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x3c4c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_3c4c40:
    // 0x3c4c40: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x3c4c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
label_3c4c44:
    // 0x3c4c44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c4c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4c48:
    // 0x3c4c48: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x3c4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_3c4c4c:
    // 0x3c4c4c: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x3c4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_3c4c50:
    // 0x3c4c50: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3c4c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3c4c54:
    // 0x3c4c54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c4c58:
    // 0x3c4c58: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c4c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c4c5c:
    // 0x3c4c5c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c4c60:
    // 0x3c4c60: 0x40f809  jalr        $v0
label_3c4c64:
    if (ctx->pc == 0x3C4C64u) {
        ctx->pc = 0x3C4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C60u;
        // 0x3c4c64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C68u;
        goto label_3c4c68;
    }
    ctx->pc = 0x3C4C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4C68u);
        ctx->pc = 0x3C4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C60u;
        // 0x3c4c64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4C60u, 0x3C4C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4C68u;
label_3c4c68:
    // 0x3c4c68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c4c68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4c6c:
    // 0x3c4c6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c4c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c4c70:
    // 0x3c4c70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4c74:
    // 0x3c4c74: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3c4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3c4c78:
    // 0x3c4c78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c4c7c:
    // 0x3c4c7c: 0x0  nop
    ctx->pc = 0x3c4c7cu;
    // NOP
label_3c4c80:
    // 0x3c4c80: 0x0  nop
    ctx->pc = 0x3c4c80u;
    // NOP
label_3c4c84:
    // 0x3c4c84: 0x0  nop
    ctx->pc = 0x3c4c84u;
    // NOP
label_3c4c88:
    // 0x3c4c88: 0x0  nop
    ctx->pc = 0x3c4c88u;
    // NOP
label_3c4c8c:
    // 0x3c4c8c: 0x0  nop
    ctx->pc = 0x3c4c8cu;
    // NOP
label_3c4c90:
    // 0x3c4c90: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3c4c94:
    if (ctx->pc == 0x3C4C94u) {
        ctx->pc = 0x3C4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C90u;
        // 0x3c4c94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C98u;
        goto label_3c4c98;
    }
    ctx->pc = 0x3C4C90u;
    {
        const bool branch_taken_0x3c4c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C90u;
        // 0x3c4c94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c90) {
            ctx->pc = 0x3C4C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4c80;
        }
    }
    ctx->pc = 0x3C4C98u;
label_3c4c98:
    // 0x3c4c98: 0xc138ddc  jal         func_4E3770
label_3c4c9c:
    if (ctx->pc == 0x3C4C9Cu) {
        ctx->pc = 0x3C4CA0u;
        goto label_3c4ca0;
    }
    ctx->pc = 0x3C4C98u;
    SET_GPR_U32(ctx, 31, 0x3C4CA0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3C4C98u, 0x3C4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CA0u;
label_3c4ca0:
    // 0x3c4ca0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3c4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c4ca4:
    // 0x3c4ca4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3c4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3c4ca8:
    // 0x3c4ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c4cac:
    // 0x3c4cac: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
label_3c4cb0:
    if (ctx->pc == 0x3C4CB0u) {
        ctx->pc = 0x3C4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CACu;
        // 0x3c4cb0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CB4u;
        goto label_3c4cb4;
    }
    ctx->pc = 0x3C4CACu;
    {
        const bool branch_taken_0x3c4cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CACu;
        // 0x3c4cb0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cac) {
            ctx->pc = 0x3C4D90u;
            goto label_3c4d90;
        }
    }
    ctx->pc = 0x3C4CB4u;
label_3c4cb4:
    // 0x3c4cb4: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x3c4cb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_3c4cb8:
    // 0x3c4cb8: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3c4cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3c4cbc:
    // 0x3c4cbc: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x3c4cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_3c4cc0:
    // 0x3c4cc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c4cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c4cc4:
    // 0x3c4cc4: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3c4cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3c4cc8:
    // 0x3c4cc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c4cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c4ccc:
    // 0x3c4ccc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c4cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c4cd0:
    // 0x3c4cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4cd4:
    // 0x3c4cd4: 0xc0cd518  jal         func_335460
label_3c4cd8:
    if (ctx->pc == 0x3C4CD8u) {
        ctx->pc = 0x3C4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CD4u;
        // 0x3c4cd8: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CDCu;
        goto label_3c4cdc;
    }
    ctx->pc = 0x3C4CD4u;
    SET_GPR_U32(ctx, 31, 0x3C4CDCu);
    ctx->pc = 0x3C4CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CD4u;
    // 0x3c4cd8: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C4CD4u, 0x3C4CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CDCu;
label_3c4cdc:
    // 0x3c4cdc: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x3c4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c4ce0:
    // 0x3c4ce0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c4ce0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3c4ce4:
    // 0x3c4ce4: 0xc136b24  jal         func_4DAC90
label_3c4ce8:
    if (ctx->pc == 0x3C4CE8u) {
        ctx->pc = 0x3C4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CE4u;
        // 0x3c4ce8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CECu;
        goto label_3c4cec;
    }
    ctx->pc = 0x3C4CE4u;
    SET_GPR_U32(ctx, 31, 0x3C4CECu);
    ctx->pc = 0x3C4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CE4u;
    // 0x3c4ce8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C4CE4u, 0x3C4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CECu;
label_3c4cec:
    // 0x3c4cec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c4cf0:
    // 0x3c4cf0: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3c4cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c4cf4:
    // 0x3c4cf4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3c4cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3c4cf8:
    // 0x3c4cf8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3c4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3c4cfc:
    // 0x3c4cfc: 0x60f809  jalr        $v1
label_3c4d00:
    if (ctx->pc == 0x3C4D00u) {
        ctx->pc = 0x3C4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CFCu;
        // 0x3c4d00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D04u;
        goto label_3c4d04;
    }
    ctx->pc = 0x3C4CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C4D04u);
        ctx->pc = 0x3C4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CFCu;
        // 0x3c4d00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4CFCu, 0x3C4D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4D04u;
label_3c4d04:
    // 0x3c4d04: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3c4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c4d08:
    // 0x3c4d08: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c4d08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3c4d0c:
    // 0x3c4d0c: 0x26102e80  addiu       $s0, $s0, 0x2E80
    ctx->pc = 0x3c4d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11904));
label_3c4d10:
    // 0x3c4d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d14:
    // 0x3c4d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c4d18:
    // 0x3c4d18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c4d1c:
    // 0x3c4d1c: 0xc0cd4ee  jal         func_3353B8
label_3c4d20:
    if (ctx->pc == 0x3C4D20u) {
        ctx->pc = 0x3C4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D1Cu;
        // 0x3c4d20: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D24u;
        goto label_3c4d24;
    }
    ctx->pc = 0x3C4D1Cu;
    SET_GPR_U32(ctx, 31, 0x3C4D24u);
    ctx->pc = 0x3C4D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D1Cu;
    // 0x3c4d20: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C4D1Cu, 0x3C4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D24u;
label_3c4d24:
    // 0x3c4d24: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c4d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c4d28:
    // 0x3c4d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d2c:
    // 0x3c4d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c4d30:
    // 0x3c4d30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c4d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3c4d34:
    // 0x3c4d34: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3c4d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c4d38:
    // 0x3c4d38: 0xc0e858c  jal         func_3A1630
label_3c4d3c:
    if (ctx->pc == 0x3C4D3Cu) {
        ctx->pc = 0x3C4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D38u;
        // 0x3c4d3c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D40u;
        goto label_3c4d40;
    }
    ctx->pc = 0x3C4D38u;
    SET_GPR_U32(ctx, 31, 0x3C4D40u);
    ctx->pc = 0x3C4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D38u;
    // 0x3c4d3c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C4D38u, 0x3C4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D40u;
label_3c4d40:
    // 0x3c4d40: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c4d44:
    // 0x3c4d44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c4d48:
    // 0x3c4d48: 0x24422ec0  addiu       $v0, $v0, 0x2EC0
    ctx->pc = 0x3c4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11968));
label_3c4d4c:
    // 0x3c4d4c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3c4d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3c4d50:
    // 0x3c4d50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c4d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c4d54:
    // 0x3c4d54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c4d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c4d58:
    // 0x3c4d58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c4d5c:
    // 0x3c4d5c: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x3c4d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_3c4d60:
    // 0x3c4d60: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3c4d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3c4d64:
    // 0x3c4d64: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c4d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c4d68:
    // 0x3c4d68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c4d6c:
    // 0x3c4d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d70:
    // 0x3c4d70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3c4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c4d74:
    // 0x3c4d74: 0xc0cd518  jal         func_335460
label_3c4d78:
    if (ctx->pc == 0x3C4D78u) {
        ctx->pc = 0x3C4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D74u;
        // 0x3c4d78: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D7Cu;
        goto label_3c4d7c;
    }
    ctx->pc = 0x3C4D74u;
    SET_GPR_U32(ctx, 31, 0x3C4D7Cu);
    ctx->pc = 0x3C4D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D74u;
    // 0x3c4d78: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C4D74u, 0x3C4D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D7Cu;
label_3c4d7c:
    // 0x3c4d7c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x3c4d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c4d80:
    // 0x3c4d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c4d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d84:
    // 0x3c4d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c4d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c4d88:
    // 0x3c4d88: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c4d8c:
    if (ctx->pc == 0x3C4D8Cu) {
        ctx->pc = 0x3C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D88u;
        // 0x3c4d8c: 0xe64000c0  swc1        $f0, 0xC0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D90u;
        goto label_3c4d90;
    }
    ctx->pc = 0x3C4D88u;
    {
        const bool branch_taken_0x3c4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D88u;
        // 0x3c4d8c: 0xe64000c0  swc1        $f0, 0xC0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d88) {
            ctx->pc = 0x3C4D94u;
            goto label_3c4d94;
        }
    }
    ctx->pc = 0x3C4D90u;
label_3c4d90:
    // 0x3c4d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4d94:
    // 0x3c4d94: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3c4d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3c4d98:
    // 0x3c4d98: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3c4d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3c4d9c:
    // 0x3c4d9c: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3c4d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3c4da0:
    // 0x3c4da0: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x3c4da0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3c4da4:
    // 0x3c4da4: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3c4da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3c4da8:
    // 0x3c4da8: 0x3e00008  jr          $ra
label_3c4dac:
    if (ctx->pc == 0x3C4DACu) {
        ctx->pc = 0x3C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DA8u;
        // 0x3c4dac: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4DB0u;
        goto label_fallthrough_0x3c4da8;
    }
    ctx->pc = 0x3C4DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DA8u;
        // 0x3c4dac: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c4da8:
    ctx->pc = 0x3C4DB0u;
}
