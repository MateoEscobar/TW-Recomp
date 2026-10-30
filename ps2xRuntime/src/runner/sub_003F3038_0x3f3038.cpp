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

// Function: sub_003F3038
// Address: 0x3f3038 - 0x3f30b0
void sub_003F3038_0x3f3038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3038_0x3f3038");
#endif

    switch (ctx->pc) {
        case 0x3f3038u: goto label_3f3038;
        case 0x3f303cu: goto label_3f303c;
        case 0x3f3040u: goto label_3f3040;
        case 0x3f3044u: goto label_3f3044;
        case 0x3f3048u: goto label_3f3048;
        case 0x3f304cu: goto label_3f304c;
        case 0x3f3050u: goto label_3f3050;
        case 0x3f3054u: goto label_3f3054;
        case 0x3f3058u: goto label_3f3058;
        case 0x3f305cu: goto label_3f305c;
        case 0x3f3060u: goto label_3f3060;
        case 0x3f3064u: goto label_3f3064;
        case 0x3f3068u: goto label_3f3068;
        case 0x3f306cu: goto label_3f306c;
        case 0x3f3070u: goto label_3f3070;
        case 0x3f3074u: goto label_3f3074;
        case 0x3f3078u: goto label_3f3078;
        case 0x3f307cu: goto label_3f307c;
        case 0x3f3080u: goto label_3f3080;
        case 0x3f3084u: goto label_3f3084;
        case 0x3f3088u: goto label_3f3088;
        case 0x3f308cu: goto label_3f308c;
        case 0x3f3090u: goto label_3f3090;
        case 0x3f3094u: goto label_3f3094;
        case 0x3f3098u: goto label_3f3098;
        case 0x3f309cu: goto label_3f309c;
        case 0x3f30a0u: goto label_3f30a0;
        case 0x3f30a4u: goto label_3f30a4;
        case 0x3f30a8u: goto label_3f30a8;
        case 0x3f30acu: goto label_3f30ac;
        default: break;
    }

    ctx->pc = 0x3f3038u;

label_3f3038:
    // 0x3f3038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f3038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f303c:
    // 0x3f303c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f3040:
    // 0x3f3040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f3044:
    // 0x3f3044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f3044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f3048:
    // 0x3f3048: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f3048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f304c:
    // 0x3f304c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f304cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f3050:
    // 0x3f3050: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f3050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f3054:
    // 0x3f3054: 0x40f809  jalr        $v0
label_3f3058:
    if (ctx->pc == 0x3F3058u) {
        ctx->pc = 0x3F3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3054u;
        // 0x3f3058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F305Cu;
        goto label_3f305c;
    }
    ctx->pc = 0x3F3054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F305Cu);
        ctx->pc = 0x3F3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3054u;
        // 0x3f3058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3054u, 0x3F305Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F305Cu;
label_3f305c:
    // 0x3f305c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f3060:
    // 0x3f3060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3f3060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f3064:
    // 0x3f3064: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3f3064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3f3068:
    // 0x3f3068: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3f306c:
    if (ctx->pc == 0x3F306Cu) {
        ctx->pc = 0x3F306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3068u;
        // 0x3f306c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3070u;
        goto label_3f3070;
    }
    ctx->pc = 0x3F3068u;
    {
        const bool branch_taken_0x3f3068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3068u;
        // 0x3f306c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3068) {
            ctx->pc = 0x3F3098u;
            goto label_3f3098;
        }
    }
    ctx->pc = 0x3F3070u;
label_3f3070:
    // 0x3f3070: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x3f3070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3074:
    // 0x3f3074: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f3074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f3078:
    // 0x3f3078: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3f3078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3f307c:
    // 0x3f307c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3f307cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3f3080:
    // 0x3f3080: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3f3080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3f3084:
    // 0x3f3084: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3f3084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3f3088:
    // 0x3f3088: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f3088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f308c:
    // 0x3f308c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f3090:
    // 0x3f3090: 0x10000002  b           . + 4 + (0x2 << 2)
label_3f3094:
    if (ctx->pc == 0x3F3094u) {
        ctx->pc = 0x3F3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3090u;
        // 0x3f3094: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3098u;
        goto label_3f3098;
    }
    ctx->pc = 0x3F3090u;
    {
        const bool branch_taken_0x3f3090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3090u;
        // 0x3f3094: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3090) {
            ctx->pc = 0x3F309Cu;
            goto label_3f309c;
        }
    }
    ctx->pc = 0x3F3098u;
label_3f3098:
    // 0x3f3098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f3098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f309c:
    // 0x3f309c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f309cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f30a0:
    // 0x3f30a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f30a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f30a4:
    // 0x3f30a4: 0x3e00008  jr          $ra
label_3f30a8:
    if (ctx->pc == 0x3F30A8u) {
        ctx->pc = 0x3F30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F30A4u;
        // 0x3f30a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F30ACu;
        goto label_3f30ac;
    }
    ctx->pc = 0x3F30A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F30A4u;
        // 0x3f30a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F30A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F30ACu;
label_3f30ac:
    // 0x3f30ac: 0x0  nop
    ctx->pc = 0x3f30acu;
    // NOP
    ctx->pc = 0x3f30b0u;
}
