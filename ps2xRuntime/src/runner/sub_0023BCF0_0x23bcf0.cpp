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

// Function: sub_0023BCF0
// Address: 0x23bcf0 - 0x23bd78
void sub_0023BCF0_0x23bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BCF0_0x23bcf0");
#endif

    switch (ctx->pc) {
        case 0x23bcf0u: goto label_23bcf0;
        case 0x23bcf4u: goto label_23bcf4;
        case 0x23bcf8u: goto label_23bcf8;
        case 0x23bcfcu: goto label_23bcfc;
        case 0x23bd00u: goto label_23bd00;
        case 0x23bd04u: goto label_23bd04;
        case 0x23bd08u: goto label_23bd08;
        case 0x23bd0cu: goto label_23bd0c;
        case 0x23bd10u: goto label_23bd10;
        case 0x23bd14u: goto label_23bd14;
        case 0x23bd18u: goto label_23bd18;
        case 0x23bd1cu: goto label_23bd1c;
        case 0x23bd20u: goto label_23bd20;
        case 0x23bd24u: goto label_23bd24;
        case 0x23bd28u: goto label_23bd28;
        case 0x23bd2cu: goto label_23bd2c;
        case 0x23bd30u: goto label_23bd30;
        case 0x23bd34u: goto label_23bd34;
        case 0x23bd38u: goto label_23bd38;
        case 0x23bd3cu: goto label_23bd3c;
        case 0x23bd40u: goto label_23bd40;
        case 0x23bd44u: goto label_23bd44;
        case 0x23bd48u: goto label_23bd48;
        case 0x23bd4cu: goto label_23bd4c;
        case 0x23bd50u: goto label_23bd50;
        case 0x23bd54u: goto label_23bd54;
        case 0x23bd58u: goto label_23bd58;
        case 0x23bd5cu: goto label_23bd5c;
        case 0x23bd60u: goto label_23bd60;
        case 0x23bd64u: goto label_23bd64;
        case 0x23bd68u: goto label_23bd68;
        case 0x23bd6cu: goto label_23bd6c;
        case 0x23bd70u: goto label_23bd70;
        case 0x23bd74u: goto label_23bd74;
        default: break;
    }

    ctx->pc = 0x23bcf0u;

label_23bcf0:
    // 0x23bcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23bcf4:
    // 0x23bcf4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x23bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_23bcf8:
    // 0x23bcf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_23bcfc:
    // 0x23bcfc: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x23bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_23bd00:
    // 0x23bd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23bd04:
    // 0x23bd04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23bd08:
    // 0x23bd08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23bd0c:
    // 0x23bd0c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x23bd0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_23bd10:
    // 0x23bd10: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x23bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_23bd14:
    // 0x23bd14: 0x60f809  jalr        $v1
label_23bd18:
    if (ctx->pc == 0x23BD18u) {
        ctx->pc = 0x23BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD14u;
        // 0x23bd18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD1Cu;
        goto label_23bd1c;
    }
    ctx->pc = 0x23BD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23BD1Cu);
        ctx->pc = 0x23BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD14u;
        // 0x23bd18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BD14u, 0x23BD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BD1Cu;
label_23bd1c:
    // 0x23bd1c: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x23bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
label_23bd20:
    // 0x23bd20: 0xc08ef28  jal         func_23BCA0
label_23bd24:
    if (ctx->pc == 0x23BD24u) {
        ctx->pc = 0x23BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD20u;
        // 0x23bd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD28u;
        goto label_23bd28;
    }
    ctx->pc = 0x23BD20u;
    SET_GPR_U32(ctx, 31, 0x23BD28u);
    ctx->pc = 0x23BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD20u;
    // 0x23bd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x23BD20u, 0x23BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD28u;
label_23bd28:
    // 0x23bd28: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x23bd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_23bd2c:
    // 0x23bd2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23bd2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_23bd30:
    // 0x23bd30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23bd30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23bd34:
    // 0x23bd34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bd38:
    // 0x23bd38: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x23bd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
label_23bd3c:
    // 0x23bd3c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x23bd3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_23bd40:
    // 0x23bd40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23bd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23bd44:
    // 0x23bd44: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x23bd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_23bd48:
    // 0x23bd48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23bd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23bd4c:
    // 0x23bd4c: 0xa0400460  sb          $zero, 0x460($v0)
    ctx->pc = 0x23bd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1120), (uint8_t)GPR_U32(ctx, 0));
label_23bd50:
    // 0x23bd50: 0xe602022c  swc1        $f2, 0x22C($s0)
    ctx->pc = 0x23bd50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
label_23bd54:
    // 0x23bd54: 0xa2030255  sb          $v1, 0x255($s0)
    ctx->pc = 0x23bd54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 597), (uint8_t)GPR_U32(ctx, 3));
label_23bd58:
    // 0x23bd58: 0xe6000220  swc1        $f0, 0x220($s0)
    ctx->pc = 0x23bd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
label_23bd5c:
    // 0x23bd5c: 0xe6010224  swc1        $f1, 0x224($s0)
    ctx->pc = 0x23bd5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
label_23bd60:
    // 0x23bd60: 0xe6020228  swc1        $f2, 0x228($s0)
    ctx->pc = 0x23bd60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
label_23bd64:
    // 0x23bd64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23bd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23bd68:
    // 0x23bd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23bd6c:
    // 0x23bd6c: 0x3e00008  jr          $ra
label_23bd70:
    if (ctx->pc == 0x23BD70u) {
        ctx->pc = 0x23BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD6Cu;
        // 0x23bd70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BD74u;
        goto label_23bd74;
    }
    ctx->pc = 0x23BD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD6Cu;
        // 0x23bd70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BD74u;
label_23bd74:
    // 0x23bd74: 0x0  nop
    ctx->pc = 0x23bd74u;
    // NOP
    ctx->pc = 0x23bd78u;
}
