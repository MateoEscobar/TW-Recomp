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

// Function: sub_00340FE0
// Address: 0x340fe0 - 0x3410f0
void sub_00340FE0_0x340fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340FE0_0x340fe0");
#endif

    switch (ctx->pc) {
        case 0x340fe0u: goto label_340fe0;
        case 0x340fe4u: goto label_340fe4;
        case 0x340fe8u: goto label_340fe8;
        case 0x340fecu: goto label_340fec;
        case 0x340ff0u: goto label_340ff0;
        case 0x340ff4u: goto label_340ff4;
        case 0x340ff8u: goto label_340ff8;
        case 0x340ffcu: goto label_340ffc;
        case 0x341000u: goto label_341000;
        case 0x341004u: goto label_341004;
        case 0x341008u: goto label_341008;
        case 0x34100cu: goto label_34100c;
        case 0x341010u: goto label_341010;
        case 0x341014u: goto label_341014;
        case 0x341018u: goto label_341018;
        case 0x34101cu: goto label_34101c;
        case 0x341020u: goto label_341020;
        case 0x341024u: goto label_341024;
        case 0x341028u: goto label_341028;
        case 0x34102cu: goto label_34102c;
        case 0x341030u: goto label_341030;
        case 0x341034u: goto label_341034;
        case 0x341038u: goto label_341038;
        case 0x34103cu: goto label_34103c;
        case 0x341040u: goto label_341040;
        case 0x341044u: goto label_341044;
        case 0x341048u: goto label_341048;
        case 0x34104cu: goto label_34104c;
        case 0x341050u: goto label_341050;
        case 0x341054u: goto label_341054;
        case 0x341058u: goto label_341058;
        case 0x34105cu: goto label_34105c;
        case 0x341060u: goto label_341060;
        case 0x341064u: goto label_341064;
        case 0x341068u: goto label_341068;
        case 0x34106cu: goto label_34106c;
        case 0x341070u: goto label_341070;
        case 0x341074u: goto label_341074;
        case 0x341078u: goto label_341078;
        case 0x34107cu: goto label_34107c;
        case 0x341080u: goto label_341080;
        case 0x341084u: goto label_341084;
        case 0x341088u: goto label_341088;
        case 0x34108cu: goto label_34108c;
        case 0x341090u: goto label_341090;
        case 0x341094u: goto label_341094;
        case 0x341098u: goto label_341098;
        case 0x34109cu: goto label_34109c;
        case 0x3410a0u: goto label_3410a0;
        case 0x3410a4u: goto label_3410a4;
        case 0x3410a8u: goto label_3410a8;
        case 0x3410acu: goto label_3410ac;
        case 0x3410b0u: goto label_3410b0;
        case 0x3410b4u: goto label_3410b4;
        case 0x3410b8u: goto label_3410b8;
        case 0x3410bcu: goto label_3410bc;
        case 0x3410c0u: goto label_3410c0;
        case 0x3410c4u: goto label_3410c4;
        case 0x3410c8u: goto label_3410c8;
        case 0x3410ccu: goto label_3410cc;
        case 0x3410d0u: goto label_3410d0;
        case 0x3410d4u: goto label_3410d4;
        case 0x3410d8u: goto label_3410d8;
        case 0x3410dcu: goto label_3410dc;
        case 0x3410e0u: goto label_3410e0;
        case 0x3410e4u: goto label_3410e4;
        case 0x3410e8u: goto label_3410e8;
        case 0x3410ecu: goto label_3410ec;
        default: break;
    }

    ctx->pc = 0x340fe0u;

label_340fe0:
    // 0x340fe0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x340fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_340fe4:
    // 0x340fe4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x340fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_340fe8:
    // 0x340fe8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x340fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_340fec:
    // 0x340fec: 0x3442e6a0  ori         $v0, $v0, 0xE6A0
    ctx->pc = 0x340fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59040);
label_340ff0:
    // 0x340ff0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x340ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_340ff4:
    // 0x340ff4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x340ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340ff8:
    // 0x340ff8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x340ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_340ffc:
    // 0x340ffc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x340ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_341000:
    // 0x341000: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x341000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_341004:
    // 0x341004: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x341004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_341008:
    // 0x341008: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x341008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_34100c:
    // 0x34100c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x34100cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_341010:
    // 0x341010: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x341010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_341014:
    // 0x341014: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x341014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_341018:
    // 0x341018: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x341018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_34101c:
    // 0x34101c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34101cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341020:
    // 0x341020: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x341020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_341024:
    // 0x341024: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x341024u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_341028:
    // 0x341028: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x341028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_34102c:
    // 0x34102c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x34102cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_341030:
    // 0x341030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341034:
    // 0x341034: 0x3c160004  lui         $s6, 0x4
    ctx->pc = 0x341034u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4 << 16));
label_341038:
    // 0x341038: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x341038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34103c:
    // 0x34103c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_341040:
    if (ctx->pc == 0x341040u) {
        ctx->pc = 0x341040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34103Cu;
        // 0x341040: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x341044u;
        goto label_341044;
    }
    ctx->pc = 0x34103Cu;
    {
        const bool branch_taken_0x34103c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34103c) {
            ctx->pc = 0x341040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34103Cu;
            // 0x341040: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x341050u;
            goto label_341050;
        }
    }
    ctx->pc = 0x341044u;
label_341044:
    // 0x341044: 0x1451001d  bne         $v0, $s1, . + 4 + (0x1D << 2)
label_341048:
    if (ctx->pc == 0x341048u) {
        ctx->pc = 0x341048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341044u;
        // 0x341048: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34104Cu;
        goto label_34104c;
    }
    ctx->pc = 0x341044u;
    {
        const bool branch_taken_0x341044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x341048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341044u;
        // 0x341048: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341044) {
            ctx->pc = 0x3410BCu;
            goto label_3410bc;
        }
    }
    ctx->pc = 0x34104Cu;
label_34104c:
    // 0x34104c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x34104cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_341050:
    // 0x341050: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x341050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_341054:
    // 0x341054: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x341054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_341058:
    // 0x341058: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x341058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_34105c:
    // 0x34105c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x34105cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_341060:
    // 0x341060: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x341060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_341064:
    // 0x341064: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x341064u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_341068:
    // 0x341068: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x341068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_34106c:
    // 0x34106c: 0x60f809  jalr        $v1
label_341070:
    if (ctx->pc == 0x341070u) {
        ctx->pc = 0x341070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34106Cu;
        // 0x341070: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341074u;
        goto label_341074;
    }
    ctx->pc = 0x34106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341074u);
        ctx->pc = 0x341070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34106Cu;
        // 0x341070: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34106Cu, 0x341074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341074u;
label_341074:
    // 0x341074: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x341074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341078:
    // 0x341078: 0x26a516c0  addiu       $a1, $s5, 0x16C0
    ctx->pc = 0x341078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5824));
label_34107c:
    // 0x34107c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x34107cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_341080:
    // 0x341080: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x341080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_341084:
    // 0x341084: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x341084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_341088:
    // 0x341088: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x341088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_34108c:
    // 0x34108c: 0x40f809  jalr        $v0
label_341090:
    if (ctx->pc == 0x341090u) {
        ctx->pc = 0x341090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34108Cu;
        // 0x341090: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341094u;
        goto label_341094;
    }
    ctx->pc = 0x34108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341094u);
        ctx->pc = 0x341090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34108Cu;
        // 0x341090: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34108Cu, 0x341094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341094u;
label_341094:
    // 0x341094: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x341094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_341098:
    // 0x341098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x341098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34109c:
    // 0x34109c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34109cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3410a0:
    // 0x3410a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3410a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3410a4:
    // 0x3410a4: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x3410a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
label_3410a8:
    // 0x3410a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3410a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3410ac:
    // 0x3410ac: 0xc0d0342  jal         func_340D08
label_3410b0:
    if (ctx->pc == 0x3410B0u) {
        ctx->pc = 0x3410B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410ACu;
        // 0x3410b0: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3410B4u;
        goto label_3410b4;
    }
    ctx->pc = 0x3410ACu;
    SET_GPR_U32(ctx, 31, 0x3410B4u);
    ctx->pc = 0x3410B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3410ACu;
    // 0x3410b0: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340D08u, 0x3410ACu, 0x3410B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410B4u;
label_3410b4:
    // 0x3410b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3410b8:
    if (ctx->pc == 0x3410B8u) {
        ctx->pc = 0x3410B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410B4u;
        // 0x3410b8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3410BCu;
        goto label_3410bc;
    }
    ctx->pc = 0x3410B4u;
    {
        const bool branch_taken_0x3410b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3410B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410B4u;
        // 0x3410b8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3410b4) {
            ctx->pc = 0x3410CCu;
            goto label_3410cc;
        }
    }
    ctx->pc = 0x3410BCu;
label_3410bc:
    // 0x3410bc: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x3410bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_3410c0:
    // 0x3410c0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_3410c4:
    if (ctx->pc == 0x3410C4u) {
        ctx->pc = 0x3410C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410C0u;
        // 0x3410c4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3410C8u;
        goto label_3410c8;
    }
    ctx->pc = 0x3410C0u;
    {
        const bool branch_taken_0x3410c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3410C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410C0u;
        // 0x3410c4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3410c0) {
            ctx->pc = 0x341038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341038;
        }
    }
    ctx->pc = 0x3410C8u;
label_3410c8:
    // 0x3410c8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3410c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3410cc:
    // 0x3410cc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3410ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3410d0:
    // 0x3410d0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3410d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3410d4:
    // 0x3410d4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3410d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3410d8:
    // 0x3410d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3410d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3410dc:
    // 0x3410dc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3410dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3410e0:
    // 0x3410e0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3410e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3410e4:
    // 0x3410e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3410e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3410e8:
    // 0x3410e8: 0x3e00008  jr          $ra
label_3410ec:
    if (ctx->pc == 0x3410ECu) {
        ctx->pc = 0x3410ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410E8u;
        // 0x3410ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3410F0u;
        goto label_fallthrough_0x3410e8;
    }
    ctx->pc = 0x3410E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3410ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410E8u;
        // 0x3410ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3410E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3410e8:
    ctx->pc = 0x3410F0u;
}
