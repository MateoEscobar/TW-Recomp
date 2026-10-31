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

// Function: sub_00181B68
// Address: 0x181b68 - 0x181ca0
void sub_00181B68_0x181b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181B68_0x181b68");
#endif

    switch (ctx->pc) {
        case 0x181b68u: goto label_181b68;
        case 0x181b6cu: goto label_181b6c;
        case 0x181b70u: goto label_181b70;
        case 0x181b74u: goto label_181b74;
        case 0x181b78u: goto label_181b78;
        case 0x181b7cu: goto label_181b7c;
        case 0x181b80u: goto label_181b80;
        case 0x181b84u: goto label_181b84;
        case 0x181b88u: goto label_181b88;
        case 0x181b8cu: goto label_181b8c;
        case 0x181b90u: goto label_181b90;
        case 0x181b94u: goto label_181b94;
        case 0x181b98u: goto label_181b98;
        case 0x181b9cu: goto label_181b9c;
        case 0x181ba0u: goto label_181ba0;
        case 0x181ba4u: goto label_181ba4;
        case 0x181ba8u: goto label_181ba8;
        case 0x181bacu: goto label_181bac;
        case 0x181bb0u: goto label_181bb0;
        case 0x181bb4u: goto label_181bb4;
        case 0x181bb8u: goto label_181bb8;
        case 0x181bbcu: goto label_181bbc;
        case 0x181bc0u: goto label_181bc0;
        case 0x181bc4u: goto label_181bc4;
        case 0x181bc8u: goto label_181bc8;
        case 0x181bccu: goto label_181bcc;
        case 0x181bd0u: goto label_181bd0;
        case 0x181bd4u: goto label_181bd4;
        case 0x181bd8u: goto label_181bd8;
        case 0x181bdcu: goto label_181bdc;
        case 0x181be0u: goto label_181be0;
        case 0x181be4u: goto label_181be4;
        case 0x181be8u: goto label_181be8;
        case 0x181becu: goto label_181bec;
        case 0x181bf0u: goto label_181bf0;
        case 0x181bf4u: goto label_181bf4;
        case 0x181bf8u: goto label_181bf8;
        case 0x181bfcu: goto label_181bfc;
        case 0x181c00u: goto label_181c00;
        case 0x181c04u: goto label_181c04;
        case 0x181c08u: goto label_181c08;
        case 0x181c0cu: goto label_181c0c;
        case 0x181c10u: goto label_181c10;
        case 0x181c14u: goto label_181c14;
        case 0x181c18u: goto label_181c18;
        case 0x181c1cu: goto label_181c1c;
        case 0x181c20u: goto label_181c20;
        case 0x181c24u: goto label_181c24;
        case 0x181c28u: goto label_181c28;
        case 0x181c2cu: goto label_181c2c;
        case 0x181c30u: goto label_181c30;
        case 0x181c34u: goto label_181c34;
        case 0x181c38u: goto label_181c38;
        case 0x181c3cu: goto label_181c3c;
        case 0x181c40u: goto label_181c40;
        case 0x181c44u: goto label_181c44;
        case 0x181c48u: goto label_181c48;
        case 0x181c4cu: goto label_181c4c;
        case 0x181c50u: goto label_181c50;
        case 0x181c54u: goto label_181c54;
        case 0x181c58u: goto label_181c58;
        case 0x181c5cu: goto label_181c5c;
        case 0x181c60u: goto label_181c60;
        case 0x181c64u: goto label_181c64;
        case 0x181c68u: goto label_181c68;
        case 0x181c6cu: goto label_181c6c;
        case 0x181c70u: goto label_181c70;
        case 0x181c74u: goto label_181c74;
        case 0x181c78u: goto label_181c78;
        case 0x181c7cu: goto label_181c7c;
        case 0x181c80u: goto label_181c80;
        case 0x181c84u: goto label_181c84;
        case 0x181c88u: goto label_181c88;
        case 0x181c8cu: goto label_181c8c;
        case 0x181c90u: goto label_181c90;
        case 0x181c94u: goto label_181c94;
        case 0x181c98u: goto label_181c98;
        case 0x181c9cu: goto label_181c9c;
        default: break;
    }

    ctx->pc = 0x181b68u;

label_181b68:
    // 0x181b68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_181b6c:
    // 0x181b6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x181b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_181b70:
    // 0x181b70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x181b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_181b74:
    // 0x181b74: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x181b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_181b78:
    // 0x181b78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x181b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_181b7c:
    // 0x181b7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x181b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_181b80:
    // 0x181b80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x181b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181b84:
    // 0x181b84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x181b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_181b88:
    // 0x181b88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_181b8c:
    // 0x181b8c: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x181b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_181b90:
    // 0x181b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_181b94:
    // 0x181b94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x181b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181b98:
    // 0x181b98: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x181b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_181b9c:
    // 0x181b9c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x181b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_181ba0:
    // 0x181ba0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x181ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_181ba4:
    // 0x181ba4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x181ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_181ba8:
    // 0x181ba8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x181ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_181bac:
    // 0x181bac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_181bb0:
    // 0x181bb0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_181bb4:
    // 0x181bb4: 0x40f809  jalr        $v0
label_181bb8:
    if (ctx->pc == 0x181BB8u) {
        ctx->pc = 0x181BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BB4u;
        // 0x181bb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BBCu;
        goto label_181bbc;
    }
    ctx->pc = 0x181BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x181BBCu);
        ctx->pc = 0x181BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BB4u;
        // 0x181bb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181BB4u, 0x181BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181BBCu;
label_181bbc:
    // 0x181bbc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x181bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_181bc0:
    // 0x181bc0: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x181bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_181bc4:
    // 0x181bc4: 0x24638d48  addiu       $v1, $v1, -0x72B8
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937928));
label_181bc8:
    // 0x181bc8: 0xae70000c  sw          $s0, 0xC($s3)
    ctx->pc = 0x181bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
label_181bcc:
    // 0x181bcc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x181bccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_181bd0:
    // 0x181bd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_181bd4:
    // 0x181bd4: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x181bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_181bd8:
    // 0x181bd8: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x181bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
label_181bdc:
    // 0x181bdc: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x181bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
label_181be0:
    // 0x181be0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x181be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_181be4:
    // 0x181be4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x181be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_181be8:
    // 0x181be8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x181be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_181bec:
    // 0x181bec: 0xc06078a  jal         func_181E28
label_181bf0:
    if (ctx->pc == 0x181BF0u) {
        ctx->pc = 0x181BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BECu;
        // 0x181bf0: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BF4u;
        goto label_181bf4;
    }
    ctx->pc = 0x181BECu;
    SET_GPR_U32(ctx, 31, 0x181BF4u);
    ctx->pc = 0x181BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BECu;
    // 0x181bf0: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E28u, 0x181BECu, 0x181BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BF4u;
label_181bf4:
    // 0x181bf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_181bf8:
    // 0x181bf8: 0xc060786  jal         func_181E18
label_181bfc:
    if (ctx->pc == 0x181BFCu) {
        ctx->pc = 0x181BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BF8u;
        // 0x181bfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C00u;
        goto label_181c00;
    }
    ctx->pc = 0x181BF8u;
    SET_GPR_U32(ctx, 31, 0x181C00u);
    ctx->pc = 0x181BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BF8u;
    // 0x181bfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E18u, 0x181BF8u, 0x181C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C00u;
label_181c00:
    // 0x181c00: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_181c04:
    if (ctx->pc == 0x181C04u) {
        ctx->pc = 0x181C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C00u;
        // 0x181c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C08u;
        goto label_181c08;
    }
    ctx->pc = 0x181C00u;
    {
        const bool branch_taken_0x181c00 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x181C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C00u;
        // 0x181c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c00) {
            ctx->pc = 0x181C1Cu;
            goto label_181c1c;
        }
    }
    ctx->pc = 0x181C08u;
label_181c08:
    // 0x181c08: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x181c08u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_181c0c:
    // 0x181c0c: 0x0  nop
    ctx->pc = 0x181c0cu;
    // NOP
label_181c10:
    // 0x181c10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x181c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_181c14:
    // 0x181c14: 0x10000008  b           . + 4 + (0x8 << 2)
label_181c18:
    if (ctx->pc == 0x181C18u) {
        ctx->pc = 0x181C1Cu;
        goto label_181c1c;
    }
    ctx->pc = 0x181C14u;
    {
        const bool branch_taken_0x181c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c14) {
            ctx->pc = 0x181C38u;
            goto label_181c38;
        }
    }
    ctx->pc = 0x181C1Cu;
label_181c1c:
    // 0x181c1c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x181c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_181c20:
    // 0x181c20: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x181c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_181c24:
    // 0x181c24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x181c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_181c28:
    // 0x181c28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x181c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_181c2c:
    // 0x181c2c: 0x0  nop
    ctx->pc = 0x181c2cu;
    // NOP
label_181c30:
    // 0x181c30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x181c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_181c34:
    // 0x181c34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x181c34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_181c38:
    // 0x181c38: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_181c3c:
    if (ctx->pc == 0x181C3Cu) {
        ctx->pc = 0x181C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C38u;
        // 0x181c3c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C40u;
        goto label_181c40;
    }
    ctx->pc = 0x181C38u;
    {
        const bool branch_taken_0x181c38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x181C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C38u;
        // 0x181c3c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c38) {
            ctx->pc = 0x181C54u;
            goto label_181c54;
        }
    }
    ctx->pc = 0x181C40u;
label_181c40:
    // 0x181c40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x181c40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_181c44:
    // 0x181c44: 0x0  nop
    ctx->pc = 0x181c44u;
    // NOP
label_181c48:
    // 0x181c48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x181c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_181c4c:
    // 0x181c4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_181c50:
    if (ctx->pc == 0x181C50u) {
        ctx->pc = 0x181C54u;
        goto label_181c54;
    }
    ctx->pc = 0x181C4Cu;
    {
        const bool branch_taken_0x181c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c4c) {
            ctx->pc = 0x181C6Cu;
            goto label_181c6c;
        }
    }
    ctx->pc = 0x181C54u;
label_181c54:
    // 0x181c54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x181c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_181c58:
    // 0x181c58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x181c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_181c5c:
    // 0x181c5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_181c60:
    // 0x181c60: 0x0  nop
    ctx->pc = 0x181c60u;
    // NOP
label_181c64:
    // 0x181c64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x181c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_181c68:
    // 0x181c68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x181c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_181c6c:
    // 0x181c6c: 0x0  nop
    ctx->pc = 0x181c6cu;
    // NOP
label_181c70:
    // 0x181c70: 0x0  nop
    ctx->pc = 0x181c70u;
    // NOP
label_181c74:
    // 0x181c74: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x181c74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_181c78:
    // 0x181c78: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x181c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_181c7c:
    // 0x181c7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x181c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_181c80:
    // 0x181c80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x181c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181c84:
    // 0x181c84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181c88:
    // 0x181c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_181c8c:
    // 0x181c8c: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x181c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_181c90:
    // 0x181c90: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x181c90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181c94:
    // 0x181c94: 0x3e00008  jr          $ra
label_181c98:
    if (ctx->pc == 0x181C98u) {
        ctx->pc = 0x181C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C94u;
        // 0x181c98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C9Cu;
        goto label_181c9c;
    }
    ctx->pc = 0x181C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C94u;
        // 0x181c98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181C9Cu;
label_181c9c:
    // 0x181c9c: 0x0  nop
    ctx->pc = 0x181c9cu;
    // NOP
    ctx->pc = 0x181ca0u;
}
