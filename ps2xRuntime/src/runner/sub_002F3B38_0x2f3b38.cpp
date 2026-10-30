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

// Function: sub_002F3B38
// Address: 0x2f3b38 - 0x2f3c70
void sub_002F3B38_0x2f3b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3B38_0x2f3b38");
#endif

    switch (ctx->pc) {
        case 0x2f3b38u: goto label_2f3b38;
        case 0x2f3b3cu: goto label_2f3b3c;
        case 0x2f3b40u: goto label_2f3b40;
        case 0x2f3b44u: goto label_2f3b44;
        case 0x2f3b48u: goto label_2f3b48;
        case 0x2f3b4cu: goto label_2f3b4c;
        case 0x2f3b50u: goto label_2f3b50;
        case 0x2f3b54u: goto label_2f3b54;
        case 0x2f3b58u: goto label_2f3b58;
        case 0x2f3b5cu: goto label_2f3b5c;
        case 0x2f3b60u: goto label_2f3b60;
        case 0x2f3b64u: goto label_2f3b64;
        case 0x2f3b68u: goto label_2f3b68;
        case 0x2f3b6cu: goto label_2f3b6c;
        case 0x2f3b70u: goto label_2f3b70;
        case 0x2f3b74u: goto label_2f3b74;
        case 0x2f3b78u: goto label_2f3b78;
        case 0x2f3b7cu: goto label_2f3b7c;
        case 0x2f3b80u: goto label_2f3b80;
        case 0x2f3b84u: goto label_2f3b84;
        case 0x2f3b88u: goto label_2f3b88;
        case 0x2f3b8cu: goto label_2f3b8c;
        case 0x2f3b90u: goto label_2f3b90;
        case 0x2f3b94u: goto label_2f3b94;
        case 0x2f3b98u: goto label_2f3b98;
        case 0x2f3b9cu: goto label_2f3b9c;
        case 0x2f3ba0u: goto label_2f3ba0;
        case 0x2f3ba4u: goto label_2f3ba4;
        case 0x2f3ba8u: goto label_2f3ba8;
        case 0x2f3bacu: goto label_2f3bac;
        case 0x2f3bb0u: goto label_2f3bb0;
        case 0x2f3bb4u: goto label_2f3bb4;
        case 0x2f3bb8u: goto label_2f3bb8;
        case 0x2f3bbcu: goto label_2f3bbc;
        case 0x2f3bc0u: goto label_2f3bc0;
        case 0x2f3bc4u: goto label_2f3bc4;
        case 0x2f3bc8u: goto label_2f3bc8;
        case 0x2f3bccu: goto label_2f3bcc;
        case 0x2f3bd0u: goto label_2f3bd0;
        case 0x2f3bd4u: goto label_2f3bd4;
        case 0x2f3bd8u: goto label_2f3bd8;
        case 0x2f3bdcu: goto label_2f3bdc;
        case 0x2f3be0u: goto label_2f3be0;
        case 0x2f3be4u: goto label_2f3be4;
        case 0x2f3be8u: goto label_2f3be8;
        case 0x2f3becu: goto label_2f3bec;
        case 0x2f3bf0u: goto label_2f3bf0;
        case 0x2f3bf4u: goto label_2f3bf4;
        case 0x2f3bf8u: goto label_2f3bf8;
        case 0x2f3bfcu: goto label_2f3bfc;
        case 0x2f3c00u: goto label_2f3c00;
        case 0x2f3c04u: goto label_2f3c04;
        case 0x2f3c08u: goto label_2f3c08;
        case 0x2f3c0cu: goto label_2f3c0c;
        case 0x2f3c10u: goto label_2f3c10;
        case 0x2f3c14u: goto label_2f3c14;
        case 0x2f3c18u: goto label_2f3c18;
        case 0x2f3c1cu: goto label_2f3c1c;
        case 0x2f3c20u: goto label_2f3c20;
        case 0x2f3c24u: goto label_2f3c24;
        case 0x2f3c28u: goto label_2f3c28;
        case 0x2f3c2cu: goto label_2f3c2c;
        case 0x2f3c30u: goto label_2f3c30;
        case 0x2f3c34u: goto label_2f3c34;
        case 0x2f3c38u: goto label_2f3c38;
        case 0x2f3c3cu: goto label_2f3c3c;
        case 0x2f3c40u: goto label_2f3c40;
        case 0x2f3c44u: goto label_2f3c44;
        case 0x2f3c48u: goto label_2f3c48;
        case 0x2f3c4cu: goto label_2f3c4c;
        case 0x2f3c50u: goto label_2f3c50;
        case 0x2f3c54u: goto label_2f3c54;
        case 0x2f3c58u: goto label_2f3c58;
        case 0x2f3c5cu: goto label_2f3c5c;
        case 0x2f3c60u: goto label_2f3c60;
        case 0x2f3c64u: goto label_2f3c64;
        case 0x2f3c68u: goto label_2f3c68;
        case 0x2f3c6cu: goto label_2f3c6c;
        default: break;
    }

    ctx->pc = 0x2f3b38u;

label_2f3b38:
    // 0x2f3b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f3b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f3b3c:
    // 0x2f3b3c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f3b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f3b40:
    // 0x2f3b40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f3b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f3b44:
    // 0x2f3b44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3b48:
    // 0x2f3b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f3b4c:
    // 0x2f3b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b50:
    // 0x2f3b50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f3b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2f3b54:
    // 0x2f3b54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f3b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b58:
    // 0x2f3b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f3b5c:
    // 0x2f3b5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3b60:
    // 0x2f3b60: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2f3b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2f3b64:
    // 0x2f3b64: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2f3b64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f3b68:
    // 0x2f3b68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3b6c:
    // 0x2f3b6c: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2f3b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2f3b70:
    // 0x2f3b70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3b74:
    // 0x2f3b74: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f3b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2f3b78:
    // 0x2f3b78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3b7c:
    // 0x2f3b7c: 0xa040011e  sb          $zero, 0x11E($v0)
    ctx->pc = 0x2f3b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 0));
label_2f3b80:
    // 0x2f3b80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3b84:
    // 0x2f3b84: 0xc0a22c6  jal         func_288B18
label_2f3b88:
    if (ctx->pc == 0x2F3B88u) {
        ctx->pc = 0x2F3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B84u;
        // 0x2f3b88: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B8Cu;
        goto label_2f3b8c;
    }
    ctx->pc = 0x2F3B84u;
    SET_GPR_U32(ctx, 31, 0x2F3B8Cu);
    ctx->pc = 0x2F3B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B84u;
    // 0x2f3b88: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2F3B84u, 0x2F3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B8Cu;
label_2f3b8c:
    // 0x2f3b8c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2f3b8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2f3b90:
    // 0x2f3b90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f3b94:
    // 0x2f3b94: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x2f3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2f3b98:
    // 0x2f3b98: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2f3b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2f3b9c:
    // 0x2f3b9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f3ba0:
    // 0x2f3ba0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2f3ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f3ba4:
    // 0x2f3ba4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2f3ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2f3ba8:
    // 0x2f3ba8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f3ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2f3bac:
    // 0x2f3bac: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f3bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2f3bb0:
    // 0x2f3bb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f3bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f3bb4:
    // 0x2f3bb4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2f3bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2f3bb8:
    // 0x2f3bb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f3bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f3bbc:
    // 0x2f3bbc: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2f3bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2f3bc0:
    // 0x2f3bc0: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x2f3bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_2f3bc4:
    // 0x2f3bc4: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x2f3bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_2f3bc8:
    // 0x2f3bc8: 0x60f809  jalr        $v1
label_2f3bcc:
    if (ctx->pc == 0x2F3BCCu) {
        ctx->pc = 0x2F3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BC8u;
        // 0x2f3bcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BD0u;
        goto label_2f3bd0;
    }
    ctx->pc = 0x2F3BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3BD0u);
        ctx->pc = 0x2F3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BC8u;
        // 0x2f3bcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3BC8u, 0x2F3BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3BD0u;
label_2f3bd0:
    // 0x2f3bd0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2f3bd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2f3bd4:
    // 0x2f3bd4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2f3bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2f3bd8:
    // 0x2f3bd8: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x2f3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2f3bdc:
    // 0x2f3bdc: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x2f3bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
label_2f3be0:
    // 0x2f3be0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f3be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f3be4:
    // 0x2f3be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3be8:
    // 0x2f3be8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f3be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2f3bec:
    // 0x2f3bec: 0xc088ef0  jal         func_223BC0
label_2f3bf0:
    if (ctx->pc == 0x2F3BF0u) {
        ctx->pc = 0x2F3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BECu;
        // 0x2f3bf0: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BF4u;
        goto label_2f3bf4;
    }
    ctx->pc = 0x2F3BECu;
    SET_GPR_U32(ctx, 31, 0x2F3BF4u);
    ctx->pc = 0x2F3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BECu;
    // 0x2f3bf0: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2F3BECu, 0x2F3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BF4u;
label_2f3bf4:
    // 0x2f3bf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3bf8:
    // 0x2f3bf8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2f3bfc:
    if (ctx->pc == 0x2F3BFCu) {
        ctx->pc = 0x2F3C00u;
        goto label_2f3c00;
    }
    ctx->pc = 0x2F3BF8u;
    {
        const bool branch_taken_0x2f3bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f3bf8) {
            ctx->pc = 0x2F3C1Cu;
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3C00u;
label_2f3c00:
    // 0x2f3c00: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2f3c00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2f3c04:
    // 0x2f3c04: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2f3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2f3c08:
    // 0x2f3c08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f3c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2f3c0c:
    // 0x2f3c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c10:
    // 0x2f3c10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f3c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f3c14:
    // 0x2f3c14: 0xc08be36  jal         func_22F8D8
label_2f3c18:
    if (ctx->pc == 0x2F3C18u) {
        ctx->pc = 0x2F3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C14u;
        // 0x2f3c18: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C1Cu;
        goto label_2f3c1c;
    }
    ctx->pc = 0x2F3C14u;
    SET_GPR_U32(ctx, 31, 0x2F3C1Cu);
    ctx->pc = 0x2F3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3C14u;
    // 0x2f3c18: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2F3C14u, 0x2F3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3C1Cu;
label_2f3c1c:
    // 0x2f3c1c: 0xc08bfa0  jal         func_22FE80
label_2f3c20:
    if (ctx->pc == 0x2F3C20u) {
        ctx->pc = 0x2F3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C1Cu;
        // 0x2f3c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C24u;
        goto label_2f3c24;
    }
    ctx->pc = 0x2F3C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F3C24u);
    ctx->pc = 0x2F3C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3C1Cu;
    // 0x2f3c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F3C1Cu, 0x2F3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3C24u;
label_2f3c24:
    // 0x2f3c24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f3c28:
    // 0x2f3c28: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2f3c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2f3c2c:
    // 0x2f3c2c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2f3c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2f3c30:
    // 0x2f3c30: 0x60f809  jalr        $v1
label_2f3c34:
    if (ctx->pc == 0x2F3C34u) {
        ctx->pc = 0x2F3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C30u;
        // 0x2f3c34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C38u;
        goto label_2f3c38;
    }
    ctx->pc = 0x2F3C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3C38u);
        ctx->pc = 0x2F3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C30u;
        // 0x2f3c34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3C30u, 0x2F3C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3C38u;
label_2f3c38:
    // 0x2f3c38: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x2f3c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
label_2f3c3c:
    // 0x2f3c3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f3c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f3c40:
    // 0x2f3c40: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2f3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2f3c44:
    // 0x2f3c44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f3c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f3c48:
    // 0x2f3c48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f3c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3c4c:
    // 0x2f3c4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f3c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f3c50:
    // 0x2f3c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3c54:
    // 0x2f3c54: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2f3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2f3c58:
    // 0x2f3c58: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f3c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f3c5c:
    // 0x2f3c5c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2f3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_2f3c60:
    // 0x2f3c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3c64:
    // 0x2f3c64: 0x3e00008  jr          $ra
label_2f3c68:
    if (ctx->pc == 0x2F3C68u) {
        ctx->pc = 0x2F3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C64u;
        // 0x2f3c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C6Cu;
        goto label_2f3c6c;
    }
    ctx->pc = 0x2F3C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C64u;
        // 0x2f3c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3C6Cu;
label_2f3c6c:
    // 0x2f3c6c: 0x0  nop
    ctx->pc = 0x2f3c6cu;
    // NOP
    ctx->pc = 0x2f3c70u;
}
