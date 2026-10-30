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

// Function: sub_002E7A68
// Address: 0x2e7a68 - 0x2e7b30
void sub_002E7A68_0x2e7a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7A68_0x2e7a68");
#endif

    switch (ctx->pc) {
        case 0x2e7a68u: goto label_2e7a68;
        case 0x2e7a6cu: goto label_2e7a6c;
        case 0x2e7a70u: goto label_2e7a70;
        case 0x2e7a74u: goto label_2e7a74;
        case 0x2e7a78u: goto label_2e7a78;
        case 0x2e7a7cu: goto label_2e7a7c;
        case 0x2e7a80u: goto label_2e7a80;
        case 0x2e7a84u: goto label_2e7a84;
        case 0x2e7a88u: goto label_2e7a88;
        case 0x2e7a8cu: goto label_2e7a8c;
        case 0x2e7a90u: goto label_2e7a90;
        case 0x2e7a94u: goto label_2e7a94;
        case 0x2e7a98u: goto label_2e7a98;
        case 0x2e7a9cu: goto label_2e7a9c;
        case 0x2e7aa0u: goto label_2e7aa0;
        case 0x2e7aa4u: goto label_2e7aa4;
        case 0x2e7aa8u: goto label_2e7aa8;
        case 0x2e7aacu: goto label_2e7aac;
        case 0x2e7ab0u: goto label_2e7ab0;
        case 0x2e7ab4u: goto label_2e7ab4;
        case 0x2e7ab8u: goto label_2e7ab8;
        case 0x2e7abcu: goto label_2e7abc;
        case 0x2e7ac0u: goto label_2e7ac0;
        case 0x2e7ac4u: goto label_2e7ac4;
        case 0x2e7ac8u: goto label_2e7ac8;
        case 0x2e7accu: goto label_2e7acc;
        case 0x2e7ad0u: goto label_2e7ad0;
        case 0x2e7ad4u: goto label_2e7ad4;
        case 0x2e7ad8u: goto label_2e7ad8;
        case 0x2e7adcu: goto label_2e7adc;
        case 0x2e7ae0u: goto label_2e7ae0;
        case 0x2e7ae4u: goto label_2e7ae4;
        case 0x2e7ae8u: goto label_2e7ae8;
        case 0x2e7aecu: goto label_2e7aec;
        case 0x2e7af0u: goto label_2e7af0;
        case 0x2e7af4u: goto label_2e7af4;
        case 0x2e7af8u: goto label_2e7af8;
        case 0x2e7afcu: goto label_2e7afc;
        case 0x2e7b00u: goto label_2e7b00;
        case 0x2e7b04u: goto label_2e7b04;
        case 0x2e7b08u: goto label_2e7b08;
        case 0x2e7b0cu: goto label_2e7b0c;
        case 0x2e7b10u: goto label_2e7b10;
        case 0x2e7b14u: goto label_2e7b14;
        case 0x2e7b18u: goto label_2e7b18;
        case 0x2e7b1cu: goto label_2e7b1c;
        case 0x2e7b20u: goto label_2e7b20;
        case 0x2e7b24u: goto label_2e7b24;
        case 0x2e7b28u: goto label_2e7b28;
        case 0x2e7b2cu: goto label_2e7b2c;
        default: break;
    }

    ctx->pc = 0x2e7a68u;

label_2e7a68:
    // 0x2e7a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e7a6c:
    // 0x2e7a6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e7a70:
    // 0x2e7a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e7a74:
    // 0x2e7a74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e7a78:
    // 0x2e7a78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e7a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2e7a7c:
    // 0x2e7a7c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2e7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_2e7a80:
    // 0x2e7a80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e7a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e7a84:
    // 0x2e7a84: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e7a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e7a88:
    // 0x2e7a88: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2e7a88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2e7a8c:
    // 0x2e7a8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e7a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2e7a90:
    // 0x2e7a90: 0x2193a  dsrl        $v1, $v0, 4
    ctx->pc = 0x2e7a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 4);
label_2e7a94:
    // 0x2e7a94: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2e7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2e7a98:
    // 0x2e7a98: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e7a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2e7a9c:
    // 0x2e7a9c: 0xa223001d  sb          $v1, 0x1D($s1)
    ctx->pc = 0x2e7a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 3));
label_2e7aa0:
    // 0x2e7aa0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2e7aa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2e7aa4:
    // 0x2e7aa4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2e7aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2e7aa8:
    // 0x2e7aa8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e7aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e7aac:
    // 0x2e7aac: 0xa222001e  sb          $v0, 0x1E($s1)
    ctx->pc = 0x2e7aacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 2));
label_2e7ab0:
    // 0x2e7ab0: 0x920300e1  lbu         $v1, 0xE1($s0)
    ctx->pc = 0x2e7ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 225)));
label_2e7ab4:
    // 0x2e7ab4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e7ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2e7ab8:
    // 0x2e7ab8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e7ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2e7abc:
    // 0x2e7abc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e7abcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2e7ac0:
    // 0x2e7ac0: 0xa223001f  sb          $v1, 0x1F($s1)
    ctx->pc = 0x2e7ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 3));
label_2e7ac4:
    // 0x2e7ac4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e7ac8:
    // 0x2e7ac8: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x2e7ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_2e7acc:
    // 0x2e7acc: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x2e7accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_2e7ad0:
    // 0x2e7ad0: 0x60f809  jalr        $v1
label_2e7ad4:
    if (ctx->pc == 0x2E7AD4u) {
        ctx->pc = 0x2E7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD0u;
        // 0x2e7ad4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AD8u;
        goto label_2e7ad8;
    }
    ctx->pc = 0x2E7AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E7AD8u);
        ctx->pc = 0x2E7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD0u;
        // 0x2e7ad4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7AD0u, 0x2E7AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7AD8u;
label_2e7ad8:
    // 0x2e7ad8: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2e7ad8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2e7adc:
    // 0x2e7adc: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2e7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2e7ae0:
    // 0x2e7ae0: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x2e7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2e7ae4:
    // 0x2e7ae4: 0x2406feff  addiu       $a2, $zero, -0x101
    ctx->pc = 0x2e7ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2e7ae8:
    // 0x2e7ae8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e7ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e7aec:
    // 0x2e7aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7af0:
    // 0x2e7af0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e7af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2e7af4:
    // 0x2e7af4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e7af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2e7af8:
    // 0x2e7af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7afc:
    // 0x2e7afc: 0xc08bd96  jal         func_22F658
label_2e7b00:
    if (ctx->pc == 0x2E7B00u) {
        ctx->pc = 0x2E7B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AFCu;
        // 0x2e7b00: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B04u;
        goto label_2e7b04;
    }
    ctx->pc = 0x2E7AFCu;
    SET_GPR_U32(ctx, 31, 0x2E7B04u);
    ctx->pc = 0x2E7B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AFCu;
    // 0x2e7b00: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2E7AFCu, 0x2E7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B04u;
label_2e7b04:
    // 0x2e7b04: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2e7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2e7b08:
    // 0x2e7b08: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2e7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e7b0c:
    // 0x2e7b0c: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2e7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2e7b10:
    // 0x2e7b10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e7b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7b14:
    // 0x2e7b14: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2e7b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2e7b18:
    // 0x2e7b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7b1c:
    // 0x2e7b1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e7b20:
    // 0x2e7b20: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2e7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2e7b24:
    // 0x2e7b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7b28:
    // 0x2e7b28: 0x3e00008  jr          $ra
label_2e7b2c:
    if (ctx->pc == 0x2E7B2Cu) {
        ctx->pc = 0x2E7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B28u;
        // 0x2e7b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B30u;
        goto label_fallthrough_0x2e7b28;
    }
    ctx->pc = 0x2E7B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B28u;
        // 0x2e7b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e7b28:
    ctx->pc = 0x2E7B30u;
}
