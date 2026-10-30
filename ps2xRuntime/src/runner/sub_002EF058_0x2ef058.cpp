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

// Function: sub_002EF058
// Address: 0x2ef058 - 0x2ef130
void sub_002EF058_0x2ef058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF058_0x2ef058");
#endif

    switch (ctx->pc) {
        case 0x2ef058u: goto label_2ef058;
        case 0x2ef05cu: goto label_2ef05c;
        case 0x2ef060u: goto label_2ef060;
        case 0x2ef064u: goto label_2ef064;
        case 0x2ef068u: goto label_2ef068;
        case 0x2ef06cu: goto label_2ef06c;
        case 0x2ef070u: goto label_2ef070;
        case 0x2ef074u: goto label_2ef074;
        case 0x2ef078u: goto label_2ef078;
        case 0x2ef07cu: goto label_2ef07c;
        case 0x2ef080u: goto label_2ef080;
        case 0x2ef084u: goto label_2ef084;
        case 0x2ef088u: goto label_2ef088;
        case 0x2ef08cu: goto label_2ef08c;
        case 0x2ef090u: goto label_2ef090;
        case 0x2ef094u: goto label_2ef094;
        case 0x2ef098u: goto label_2ef098;
        case 0x2ef09cu: goto label_2ef09c;
        case 0x2ef0a0u: goto label_2ef0a0;
        case 0x2ef0a4u: goto label_2ef0a4;
        case 0x2ef0a8u: goto label_2ef0a8;
        case 0x2ef0acu: goto label_2ef0ac;
        case 0x2ef0b0u: goto label_2ef0b0;
        case 0x2ef0b4u: goto label_2ef0b4;
        case 0x2ef0b8u: goto label_2ef0b8;
        case 0x2ef0bcu: goto label_2ef0bc;
        case 0x2ef0c0u: goto label_2ef0c0;
        case 0x2ef0c4u: goto label_2ef0c4;
        case 0x2ef0c8u: goto label_2ef0c8;
        case 0x2ef0ccu: goto label_2ef0cc;
        case 0x2ef0d0u: goto label_2ef0d0;
        case 0x2ef0d4u: goto label_2ef0d4;
        case 0x2ef0d8u: goto label_2ef0d8;
        case 0x2ef0dcu: goto label_2ef0dc;
        case 0x2ef0e0u: goto label_2ef0e0;
        case 0x2ef0e4u: goto label_2ef0e4;
        case 0x2ef0e8u: goto label_2ef0e8;
        case 0x2ef0ecu: goto label_2ef0ec;
        case 0x2ef0f0u: goto label_2ef0f0;
        case 0x2ef0f4u: goto label_2ef0f4;
        case 0x2ef0f8u: goto label_2ef0f8;
        case 0x2ef0fcu: goto label_2ef0fc;
        case 0x2ef100u: goto label_2ef100;
        case 0x2ef104u: goto label_2ef104;
        case 0x2ef108u: goto label_2ef108;
        case 0x2ef10cu: goto label_2ef10c;
        case 0x2ef110u: goto label_2ef110;
        case 0x2ef114u: goto label_2ef114;
        case 0x2ef118u: goto label_2ef118;
        case 0x2ef11cu: goto label_2ef11c;
        case 0x2ef120u: goto label_2ef120;
        case 0x2ef124u: goto label_2ef124;
        case 0x2ef128u: goto label_2ef128;
        case 0x2ef12cu: goto label_2ef12c;
        default: break;
    }

    ctx->pc = 0x2ef058u;

label_2ef058:
    // 0x2ef058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ef05c:
    // 0x2ef05c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ef05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef060:
    // 0x2ef060: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ef060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ef064:
    // 0x2ef064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ef064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef068:
    // 0x2ef068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ef06c:
    // 0x2ef06c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef070:
    // 0x2ef070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef074:
    // 0x2ef074: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ef074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef078:
    // 0x2ef078: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2ef078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2ef07c:
    // 0x2ef07c: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2ef07cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2ef080:
    // 0x2ef080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ef080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef084:
    // 0x2ef084: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ef084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef088:
    // 0x2ef088: 0xac64021c  sw          $a0, 0x21C($v1)
    ctx->pc = 0x2ef088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 4));
label_2ef08c:
    // 0x2ef08c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2ef08cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ef090:
    // 0x2ef090: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ef090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef094:
    // 0x2ef094: 0xa0460265  sb          $a2, 0x265($v0)
    ctx->pc = 0x2ef094u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 6));
label_2ef098:
    // 0x2ef098: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ef098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef09c:
    // 0x2ef09c: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ef09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ef0a0:
    // 0x2ef0a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ef0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef0a4:
    // 0x2ef0a4: 0xa046011e  sb          $a2, 0x11E($v0)
    ctx->pc = 0x2ef0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 6));
label_2ef0a8:
    // 0x2ef0a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ef0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef0ac:
    // 0x2ef0ac: 0xc0a22c6  jal         func_288B18
label_2ef0b0:
    if (ctx->pc == 0x2EF0B0u) {
        ctx->pc = 0x2EF0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0ACu;
        // 0x2ef0b0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF0B4u;
        goto label_2ef0b4;
    }
    ctx->pc = 0x2EF0ACu;
    SET_GPR_U32(ctx, 31, 0x2EF0B4u);
    ctx->pc = 0x2EF0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF0ACu;
    // 0x2ef0b0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2EF0ACu, 0x2EF0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0B4u;
label_2ef0b4:
    // 0x2ef0b4: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ef0b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2ef0b8:
    // 0x2ef0b8: 0x3c04fffb  lui         $a0, 0xFFFB
    ctx->pc = 0x2ef0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65531 << 16));
label_2ef0bc:
    // 0x2ef0bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ef0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2ef0c0:
    // 0x2ef0c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ef0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef0c4:
    // 0x2ef0c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ef0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ef0c8:
    // 0x2ef0c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ef0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ef0cc:
    // 0x2ef0cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ef0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ef0d0:
    // 0x2ef0d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ef0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ef0d4:
    // 0x2ef0d4: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2ef0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2ef0d8:
    // 0x2ef0d8: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2ef0d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2ef0dc:
    // 0x2ef0dc: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2ef0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2ef0e0:
    // 0x2ef0e0: 0x40f809  jalr        $v0
label_2ef0e4:
    if (ctx->pc == 0x2EF0E4u) {
        ctx->pc = 0x2EF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0E0u;
        // 0x2ef0e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF0E8u;
        goto label_2ef0e8;
    }
    ctx->pc = 0x2EF0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF0E8u);
        ctx->pc = 0x2EF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0E0u;
        // 0x2ef0e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF0E0u, 0x2EF0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF0E8u;
label_2ef0e8:
    // 0x2ef0e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef0ec:
    // 0x2ef0ec: 0x24050225  addiu       $a1, $zero, 0x225
    ctx->pc = 0x2ef0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
label_2ef0f0:
    // 0x2ef0f0: 0xc0886a8  jal         func_221AA0
label_2ef0f4:
    if (ctx->pc == 0x2EF0F4u) {
        ctx->pc = 0x2EF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0F0u;
        // 0x2ef0f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF0F8u;
        goto label_2ef0f8;
    }
    ctx->pc = 0x2EF0F0u;
    SET_GPR_U32(ctx, 31, 0x2EF0F8u);
    ctx->pc = 0x2EF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF0F0u;
    // 0x2ef0f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2EF0F0u, 0x2EF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0F8u;
label_2ef0f8:
    // 0x2ef0f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ef0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef0fc:
    // 0x2ef0fc: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x2ef0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2ef100:
    // 0x2ef100: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2ef100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2ef104:
    // 0x2ef104: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2ef108:
    if (ctx->pc == 0x2EF108u) {
        ctx->pc = 0x2EF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF104u;
        // 0x2ef108: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF10Cu;
        goto label_2ef10c;
    }
    ctx->pc = 0x2EF104u;
    {
        const bool branch_taken_0x2ef104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF104u;
        // 0x2ef108: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef104) {
            ctx->pc = 0x2EF11Cu;
            goto label_2ef11c;
        }
    }
    ctx->pc = 0x2EF10Cu;
label_2ef10c:
    // 0x2ef10c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2ef10cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2ef110:
    // 0x2ef110: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2ef110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2ef114:
    // 0x2ef114: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ef114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ef118:
    // 0x2ef118: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2ef118u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2ef11c:
    // 0x2ef11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef120:
    // 0x2ef120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef124:
    // 0x2ef124: 0x3e00008  jr          $ra
label_2ef128:
    if (ctx->pc == 0x2EF128u) {
        ctx->pc = 0x2EF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF124u;
        // 0x2ef128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF12Cu;
        goto label_2ef12c;
    }
    ctx->pc = 0x2EF124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF124u;
        // 0x2ef128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF12Cu;
label_2ef12c:
    // 0x2ef12c: 0x0  nop
    ctx->pc = 0x2ef12cu;
    // NOP
    ctx->pc = 0x2ef130u;
}
