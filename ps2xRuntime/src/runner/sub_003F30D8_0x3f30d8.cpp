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

// Function: sub_003F30D8
// Address: 0x3f30d8 - 0x3f3178
void sub_003F30D8_0x3f30d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F30D8_0x3f30d8");
#endif

    switch (ctx->pc) {
        case 0x3f30d8u: goto label_3f30d8;
        case 0x3f30dcu: goto label_3f30dc;
        case 0x3f30e0u: goto label_3f30e0;
        case 0x3f30e4u: goto label_3f30e4;
        case 0x3f30e8u: goto label_3f30e8;
        case 0x3f30ecu: goto label_3f30ec;
        case 0x3f30f0u: goto label_3f30f0;
        case 0x3f30f4u: goto label_3f30f4;
        case 0x3f30f8u: goto label_3f30f8;
        case 0x3f30fcu: goto label_3f30fc;
        case 0x3f3100u: goto label_3f3100;
        case 0x3f3104u: goto label_3f3104;
        case 0x3f3108u: goto label_3f3108;
        case 0x3f310cu: goto label_3f310c;
        case 0x3f3110u: goto label_3f3110;
        case 0x3f3114u: goto label_3f3114;
        case 0x3f3118u: goto label_3f3118;
        case 0x3f311cu: goto label_3f311c;
        case 0x3f3120u: goto label_3f3120;
        case 0x3f3124u: goto label_3f3124;
        case 0x3f3128u: goto label_3f3128;
        case 0x3f312cu: goto label_3f312c;
        case 0x3f3130u: goto label_3f3130;
        case 0x3f3134u: goto label_3f3134;
        case 0x3f3138u: goto label_3f3138;
        case 0x3f313cu: goto label_3f313c;
        case 0x3f3140u: goto label_3f3140;
        case 0x3f3144u: goto label_3f3144;
        case 0x3f3148u: goto label_3f3148;
        case 0x3f314cu: goto label_3f314c;
        case 0x3f3150u: goto label_3f3150;
        case 0x3f3154u: goto label_3f3154;
        case 0x3f3158u: goto label_3f3158;
        case 0x3f315cu: goto label_3f315c;
        case 0x3f3160u: goto label_3f3160;
        case 0x3f3164u: goto label_3f3164;
        case 0x3f3168u: goto label_3f3168;
        case 0x3f316cu: goto label_3f316c;
        case 0x3f3170u: goto label_3f3170;
        case 0x3f3174u: goto label_3f3174;
        default: break;
    }

    ctx->pc = 0x3f30d8u;

label_3f30d8:
    // 0x3f30d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f30d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f30dc:
    // 0x3f30dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f30dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f30e0:
    // 0x3f30e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f30e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f30e4:
    // 0x3f30e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f30e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f30e8:
    // 0x3f30e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f30e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f30ec:
    // 0x3f30ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f30ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f30f0:
    // 0x3f30f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f30f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f30f4:
    // 0x3f30f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f30f8:
    // 0x3f30f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f30f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f30fc:
    // 0x3f30fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f3100:
    // 0x3f3100: 0x40f809  jalr        $v0
label_3f3104:
    if (ctx->pc == 0x3F3104u) {
        ctx->pc = 0x3F3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3100u;
        // 0x3f3104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3108u;
        goto label_3f3108;
    }
    ctx->pc = 0x3F3100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F3108u);
        ctx->pc = 0x3F3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3100u;
        // 0x3f3104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3100u, 0x3F3108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F3108u;
label_3f3108:
    // 0x3f3108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f3108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f310c:
    // 0x3f310c: 0xc0ea146  jal         func_3A8518
label_3f3110:
    if (ctx->pc == 0x3F3110u) {
        ctx->pc = 0x3F3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F310Cu;
        // 0x3f3110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3114u;
        goto label_3f3114;
    }
    ctx->pc = 0x3F310Cu;
    SET_GPR_U32(ctx, 31, 0x3F3114u);
    ctx->pc = 0x3F3110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F310Cu;
    // 0x3f3110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F310Cu, 0x3F3114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3114u;
label_3f3114:
    // 0x3f3114: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3f3114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_3f3118:
    // 0x3f3118: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f3118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f311c:
    // 0x3f311c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3f311cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3f3120:
    // 0x3f3120: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f3120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f3124:
    // 0x3f3124: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3f3124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3f3128:
    // 0x3f3128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f312c:
    // 0x3f312c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f312cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f3130:
    // 0x3f3130: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f3130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f3134:
    // 0x3f3134: 0xc0e858c  jal         func_3A1630
label_3f3138:
    if (ctx->pc == 0x3F3138u) {
        ctx->pc = 0x3F3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3134u;
        // 0x3f3138: 0x7e030010  sq          $v1, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F313Cu;
        goto label_3f313c;
    }
    ctx->pc = 0x3F3134u;
    SET_GPR_U32(ctx, 31, 0x3F313Cu);
    ctx->pc = 0x3F3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3134u;
    // 0x3f3138: 0x7e030010  sq          $v1, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F3134u, 0x3F313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F313Cu;
label_3f313c:
    // 0x3f313c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3f313cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3f3140:
    // 0x3f3140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f3140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3144:
    // 0x3f3144: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f3144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f3148:
    // 0x3f3148: 0x3442ff40  ori         $v0, $v0, 0xFF40
    ctx->pc = 0x3f3148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65344);
label_3f314c:
    // 0x3f314c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f3150:
    // 0x3f3150: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x3f3150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_3f3154:
    // 0x3f3154: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3f3154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3f3158:
    // 0x3f3158: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3f3158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3f315c:
    // 0x3f315c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3f315cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3f3160:
    // 0x3f3160: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f3160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f3164:
    // 0x3f3164: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f3164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f3168:
    // 0x3f3168: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f3168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f316c:
    // 0x3f316c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3170:
    // 0x3f3170: 0x3e00008  jr          $ra
label_3f3174:
    if (ctx->pc == 0x3F3174u) {
        ctx->pc = 0x3F3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3170u;
        // 0x3f3174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3178u;
        goto label_fallthrough_0x3f3170;
    }
    ctx->pc = 0x3F3170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3170u;
        // 0x3f3174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f3170:
    ctx->pc = 0x3F3178u;
}
