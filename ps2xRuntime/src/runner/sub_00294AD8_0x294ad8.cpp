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

// Function: sub_00294AD8
// Address: 0x294ad8 - 0x294b60
void sub_00294AD8_0x294ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294AD8_0x294ad8");
#endif

    switch (ctx->pc) {
        case 0x294ad8u: goto label_294ad8;
        case 0x294adcu: goto label_294adc;
        case 0x294ae0u: goto label_294ae0;
        case 0x294ae4u: goto label_294ae4;
        case 0x294ae8u: goto label_294ae8;
        case 0x294aecu: goto label_294aec;
        case 0x294af0u: goto label_294af0;
        case 0x294af4u: goto label_294af4;
        case 0x294af8u: goto label_294af8;
        case 0x294afcu: goto label_294afc;
        case 0x294b00u: goto label_294b00;
        case 0x294b04u: goto label_294b04;
        case 0x294b08u: goto label_294b08;
        case 0x294b0cu: goto label_294b0c;
        case 0x294b10u: goto label_294b10;
        case 0x294b14u: goto label_294b14;
        case 0x294b18u: goto label_294b18;
        case 0x294b1cu: goto label_294b1c;
        case 0x294b20u: goto label_294b20;
        case 0x294b24u: goto label_294b24;
        case 0x294b28u: goto label_294b28;
        case 0x294b2cu: goto label_294b2c;
        case 0x294b30u: goto label_294b30;
        case 0x294b34u: goto label_294b34;
        case 0x294b38u: goto label_294b38;
        case 0x294b3cu: goto label_294b3c;
        case 0x294b40u: goto label_294b40;
        case 0x294b44u: goto label_294b44;
        case 0x294b48u: goto label_294b48;
        case 0x294b4cu: goto label_294b4c;
        case 0x294b50u: goto label_294b50;
        case 0x294b54u: goto label_294b54;
        case 0x294b58u: goto label_294b58;
        case 0x294b5cu: goto label_294b5c;
        default: break;
    }

    ctx->pc = 0x294ad8u;

label_294ad8:
    // 0x294ad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_294adc:
    // 0x294adc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x294adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_294ae0:
    // 0x294ae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294ae4:
    // 0x294ae4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x294ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_294ae8:
    // 0x294ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_294aec:
    // 0x294aec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_294af0:
    // 0x294af0: 0xae050244  sw          $a1, 0x244($s0)
    ctx->pc = 0x294af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 5));
label_294af4:
    // 0x294af4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x294af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294af8:
    // 0x294af8: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x294af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
label_294afc:
    // 0x294afc: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x294afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
label_294b00:
    // 0x294b00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x294b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_294b04:
    // 0x294b04: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x294b04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_294b08:
    // 0x294b08: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x294b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_294b0c:
    // 0x294b0c: 0xc0f809  jalr        $a2
label_294b10:
    if (ctx->pc == 0x294B10u) {
        ctx->pc = 0x294B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B0Cu;
        // 0x294b10: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294B14u;
        goto label_294b14;
    }
    ctx->pc = 0x294B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x294B14u);
        ctx->pc = 0x294B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B0Cu;
        // 0x294b10: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B0Cu, 0x294B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294B14u;
label_294b14:
    // 0x294b14: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x294b14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_294b18:
    // 0x294b18: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x294b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_294b1c:
    // 0x294b1c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x294b1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_294b20:
    // 0x294b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294b24:
    // 0x294b24: 0xa2110274  sb          $s1, 0x274($s0)
    ctx->pc = 0x294b24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 628), (uint8_t)GPR_U32(ctx, 17));
label_294b28:
    // 0x294b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294b2c:
    // 0x294b2c: 0x7e030220  sq          $v1, 0x220($s0)
    ctx->pc = 0x294b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 3));
label_294b30:
    // 0x294b30: 0x7e020230  sq          $v0, 0x230($s0)
    ctx->pc = 0x294b30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), GPR_VEC(ctx, 2));
label_294b34:
    // 0x294b34: 0xa2060272  sb          $a2, 0x272($s0)
    ctx->pc = 0x294b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 626), (uint8_t)GPR_U32(ctx, 6));
label_294b38:
    // 0x294b38: 0xc0a576c  jal         func_295DB0
label_294b3c:
    if (ctx->pc == 0x294B3Cu) {
        ctx->pc = 0x294B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B38u;
        // 0x294b3c: 0xa2060271  sb          $a2, 0x271($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 625), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294B40u;
        goto label_294b40;
    }
    ctx->pc = 0x294B38u;
    SET_GPR_U32(ctx, 31, 0x294B40u);
    ctx->pc = 0x294B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B38u;
    // 0x294b3c: 0xa2060271  sb          $a2, 0x271($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 625), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x294B38u, 0x294B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B40u;
label_294b40:
    // 0x294b40: 0xa2110274  sb          $s1, 0x274($s0)
    ctx->pc = 0x294b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 628), (uint8_t)GPR_U32(ctx, 17));
label_294b44:
    // 0x294b44: 0xa2000275  sb          $zero, 0x275($s0)
    ctx->pc = 0x294b44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 629), (uint8_t)GPR_U32(ctx, 0));
label_294b48:
    // 0x294b48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x294b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_294b4c:
    // 0x294b4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x294b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_294b50:
    // 0x294b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_294b54:
    // 0x294b54: 0x3e00008  jr          $ra
label_294b58:
    if (ctx->pc == 0x294B58u) {
        ctx->pc = 0x294B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B54u;
        // 0x294b58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294B5Cu;
        goto label_294b5c;
    }
    ctx->pc = 0x294B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B54u;
        // 0x294b58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B5Cu;
label_294b5c:
    // 0x294b5c: 0x0  nop
    ctx->pc = 0x294b5cu;
    // NOP
    ctx->pc = 0x294b60u;
}
