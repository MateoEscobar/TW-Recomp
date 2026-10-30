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

// Function: sub_00321028
// Address: 0x321028 - 0x321180
void sub_00321028_0x321028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321028_0x321028");
#endif

    switch (ctx->pc) {
        case 0x321028u: goto label_321028;
        case 0x32102cu: goto label_32102c;
        case 0x321030u: goto label_321030;
        case 0x321034u: goto label_321034;
        case 0x321038u: goto label_321038;
        case 0x32103cu: goto label_32103c;
        case 0x321040u: goto label_321040;
        case 0x321044u: goto label_321044;
        case 0x321048u: goto label_321048;
        case 0x32104cu: goto label_32104c;
        case 0x321050u: goto label_321050;
        case 0x321054u: goto label_321054;
        case 0x321058u: goto label_321058;
        case 0x32105cu: goto label_32105c;
        case 0x321060u: goto label_321060;
        case 0x321064u: goto label_321064;
        case 0x321068u: goto label_321068;
        case 0x32106cu: goto label_32106c;
        case 0x321070u: goto label_321070;
        case 0x321074u: goto label_321074;
        case 0x321078u: goto label_321078;
        case 0x32107cu: goto label_32107c;
        case 0x321080u: goto label_321080;
        case 0x321084u: goto label_321084;
        case 0x321088u: goto label_321088;
        case 0x32108cu: goto label_32108c;
        case 0x321090u: goto label_321090;
        case 0x321094u: goto label_321094;
        case 0x321098u: goto label_321098;
        case 0x32109cu: goto label_32109c;
        case 0x3210a0u: goto label_3210a0;
        case 0x3210a4u: goto label_3210a4;
        case 0x3210a8u: goto label_3210a8;
        case 0x3210acu: goto label_3210ac;
        case 0x3210b0u: goto label_3210b0;
        case 0x3210b4u: goto label_3210b4;
        case 0x3210b8u: goto label_3210b8;
        case 0x3210bcu: goto label_3210bc;
        case 0x3210c0u: goto label_3210c0;
        case 0x3210c4u: goto label_3210c4;
        case 0x3210c8u: goto label_3210c8;
        case 0x3210ccu: goto label_3210cc;
        case 0x3210d0u: goto label_3210d0;
        case 0x3210d4u: goto label_3210d4;
        case 0x3210d8u: goto label_3210d8;
        case 0x3210dcu: goto label_3210dc;
        case 0x3210e0u: goto label_3210e0;
        case 0x3210e4u: goto label_3210e4;
        case 0x3210e8u: goto label_3210e8;
        case 0x3210ecu: goto label_3210ec;
        case 0x3210f0u: goto label_3210f0;
        case 0x3210f4u: goto label_3210f4;
        case 0x3210f8u: goto label_3210f8;
        case 0x3210fcu: goto label_3210fc;
        case 0x321100u: goto label_321100;
        case 0x321104u: goto label_321104;
        case 0x321108u: goto label_321108;
        case 0x32110cu: goto label_32110c;
        case 0x321110u: goto label_321110;
        case 0x321114u: goto label_321114;
        case 0x321118u: goto label_321118;
        case 0x32111cu: goto label_32111c;
        case 0x321120u: goto label_321120;
        case 0x321124u: goto label_321124;
        case 0x321128u: goto label_321128;
        case 0x32112cu: goto label_32112c;
        case 0x321130u: goto label_321130;
        case 0x321134u: goto label_321134;
        case 0x321138u: goto label_321138;
        case 0x32113cu: goto label_32113c;
        case 0x321140u: goto label_321140;
        case 0x321144u: goto label_321144;
        case 0x321148u: goto label_321148;
        case 0x32114cu: goto label_32114c;
        case 0x321150u: goto label_321150;
        case 0x321154u: goto label_321154;
        case 0x321158u: goto label_321158;
        case 0x32115cu: goto label_32115c;
        case 0x321160u: goto label_321160;
        case 0x321164u: goto label_321164;
        case 0x321168u: goto label_321168;
        case 0x32116cu: goto label_32116c;
        case 0x321170u: goto label_321170;
        case 0x321174u: goto label_321174;
        case 0x321178u: goto label_321178;
        case 0x32117cu: goto label_32117c;
        default: break;
    }

    ctx->pc = 0x321028u;

label_321028:
    // 0x321028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x321028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32102c:
    // 0x32102c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_321030:
    // 0x321030: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x321030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_321034:
    // 0x321034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321038:
    // 0x321038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x321038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32103c:
    // 0x32103c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_321040:
    // 0x321040: 0xc05959e  jal         func_165678
label_321044:
    if (ctx->pc == 0x321044u) {
        ctx->pc = 0x321044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321040u;
        // 0x321044: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321048u;
        goto label_321048;
    }
    ctx->pc = 0x321040u;
    SET_GPR_U32(ctx, 31, 0x321048u);
    ctx->pc = 0x321044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321040u;
    // 0x321044: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x321040u, 0x321048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321048u;
label_321048:
    // 0x321048: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_32104c:
    if (ctx->pc == 0x32104Cu) {
        ctx->pc = 0x32104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321048u;
        // 0x32104c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321050u;
        goto label_321050;
    }
    ctx->pc = 0x321048u;
    {
        const bool branch_taken_0x321048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321048u;
        // 0x32104c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321048) {
            ctx->pc = 0x321164u;
            goto label_321164;
        }
    }
    ctx->pc = 0x321050u;
label_321050:
    // 0x321050: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x321050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_321054:
    // 0x321054: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x321054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_321058:
    // 0x321058: 0x86250028  lh          $a1, 0x28($s1)
    ctx->pc = 0x321058u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_32105c:
    // 0x32105c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x32105cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_321060:
    // 0x321060: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x321060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_321064:
    // 0x321064: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
label_321068:
    if (ctx->pc == 0x321068u) {
        ctx->pc = 0x321068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321064u;
        // 0x321068: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32106Cu;
        goto label_32106c;
    }
    ctx->pc = 0x321064u;
    {
        const bool branch_taken_0x321064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x321068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321064u;
        // 0x321068: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321064) {
            ctx->pc = 0x3210A4u;
            goto label_3210a4;
        }
    }
    ctx->pc = 0x32106Cu;
label_32106c:
    // 0x32106c: 0xc0e40a2  jal         func_390288
label_321070:
    if (ctx->pc == 0x321070u) {
        ctx->pc = 0x321070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32106Cu;
        // 0x321070: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321074u;
        goto label_321074;
    }
    ctx->pc = 0x32106Cu;
    SET_GPR_U32(ctx, 31, 0x321074u);
    ctx->pc = 0x321070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32106Cu;
    // 0x321070: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x32106Cu, 0x321074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321074u;
label_321074:
    // 0x321074: 0xc10587a  jal         func_4161E8
label_321078:
    if (ctx->pc == 0x321078u) {
        ctx->pc = 0x321078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321074u;
        // 0x321078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32107Cu;
        goto label_32107c;
    }
    ctx->pc = 0x321074u;
    SET_GPR_U32(ctx, 31, 0x32107Cu);
    ctx->pc = 0x321078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321074u;
    // 0x321078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x321074u, 0x32107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32107Cu;
label_32107c:
    // 0x32107c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321080:
    // 0x321080: 0xc0cdb38  jal         func_336CE0
label_321084:
    if (ctx->pc == 0x321084u) {
        ctx->pc = 0x321084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321080u;
        // 0x321084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321088u;
        goto label_321088;
    }
    ctx->pc = 0x321080u;
    SET_GPR_U32(ctx, 31, 0x321088u);
    ctx->pc = 0x321084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321080u;
    // 0x321084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x321080u, 0x321088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321088u;
label_321088:
    // 0x321088: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x321088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_32108c:
    // 0x32108c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32108cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_321090:
    // 0x321090: 0x0  nop
    ctx->pc = 0x321090u;
    // NOP
label_321094:
    // 0x321094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x321094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_321098:
    // 0x321098: 0x0  nop
    ctx->pc = 0x321098u;
    // NOP
label_32109c:
    // 0x32109c: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_3210a0:
    if (ctx->pc == 0x3210A0u) {
        ctx->pc = 0x3210A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32109Cu;
        // 0x3210a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210A4u;
        goto label_3210a4;
    }
    ctx->pc = 0x32109Cu;
    {
        const bool branch_taken_0x32109c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3210A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32109Cu;
        // 0x3210a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32109c) {
            ctx->pc = 0x321168u;
            goto label_321168;
        }
    }
    ctx->pc = 0x3210A4u;
label_3210a4:
    // 0x3210a4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x3210a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_3210a8:
    // 0x3210a8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x3210a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_3210ac:
    // 0x3210ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3210acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3210b0:
    // 0x3210b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3210b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3210b4:
    // 0x3210b4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3210b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3210b8:
    // 0x3210b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3210b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3210bc:
    // 0x3210bc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3210bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3210c0:
    // 0x3210c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3210c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3210c4:
    // 0x3210c4: 0xc105df6  jal         func_4177D8
label_3210c8:
    if (ctx->pc == 0x3210C8u) {
        ctx->pc = 0x3210C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210C4u;
        // 0x3210c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210CCu;
        goto label_3210cc;
    }
    ctx->pc = 0x3210C4u;
    SET_GPR_U32(ctx, 31, 0x3210CCu);
    ctx->pc = 0x3210C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3210C4u;
    // 0x3210c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x3210C4u, 0x3210CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3210CCu;
label_3210cc:
    // 0x3210cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3210ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3210d0:
    // 0x3210d0: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_3210d4:
    if (ctx->pc == 0x3210D4u) {
        ctx->pc = 0x3210D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210D0u;
        // 0x3210d4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210D8u;
        goto label_3210d8;
    }
    ctx->pc = 0x3210D0u;
    {
        const bool branch_taken_0x3210d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210D0u;
        // 0x3210d4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210d0) {
            ctx->pc = 0x321158u;
            goto label_321158;
        }
    }
    ctx->pc = 0x3210D8u;
label_3210d8:
    // 0x3210d8: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x3210d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_3210dc:
    // 0x3210dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3210dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3210e0:
    // 0x3210e0: 0x0  nop
    ctx->pc = 0x3210e0u;
    // NOP
label_3210e4:
    // 0x3210e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3210e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3210e8:
    // 0x3210e8: 0x0  nop
    ctx->pc = 0x3210e8u;
    // NOP
label_3210ec:
    // 0x3210ec: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_3210f0:
    if (ctx->pc == 0x3210F0u) {
        ctx->pc = 0x3210F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210ECu;
        // 0x3210f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210F4u;
        goto label_3210f4;
    }
    ctx->pc = 0x3210ECu;
    {
        const bool branch_taken_0x3210ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3210F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210ECu;
        // 0x3210f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210ec) {
            ctx->pc = 0x32115Cu;
            goto label_32115c;
        }
    }
    ctx->pc = 0x3210F4u;
label_3210f4:
    // 0x3210f4: 0xc10587a  jal         func_4161E8
label_3210f8:
    if (ctx->pc == 0x3210F8u) {
        ctx->pc = 0x3210F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210F4u;
        // 0x3210f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210FCu;
        goto label_3210fc;
    }
    ctx->pc = 0x3210F4u;
    SET_GPR_U32(ctx, 31, 0x3210FCu);
    ctx->pc = 0x3210F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3210F4u;
    // 0x3210f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x3210F4u, 0x3210FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3210FCu;
label_3210fc:
    // 0x3210fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3210fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_321100:
    // 0x321100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x321100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321104:
    // 0x321104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321108:
    // 0x321108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32110c:
    // 0x32110c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32110cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321110:
    // 0x321110: 0xc09381e  jal         func_24E078
label_321114:
    if (ctx->pc == 0x321114u) {
        ctx->pc = 0x321114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321110u;
        // 0x321114: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321118u;
        goto label_321118;
    }
    ctx->pc = 0x321110u;
    SET_GPR_U32(ctx, 31, 0x321118u);
    ctx->pc = 0x321114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321110u;
    // 0x321114: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x321110u, 0x321118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321118u;
label_321118:
    // 0x321118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32111c:
    // 0x32111c: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_321120:
    if (ctx->pc == 0x321120u) {
        ctx->pc = 0x321120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32111Cu;
        // 0x321120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321124u;
        goto label_321124;
    }
    ctx->pc = 0x32111Cu;
    {
        const bool branch_taken_0x32111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x321120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32111Cu;
        // 0x321120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32111c) {
            ctx->pc = 0x32115Cu;
            goto label_32115c;
        }
    }
    ctx->pc = 0x321124u;
label_321124:
    // 0x321124: 0x920500d8  lbu         $a1, 0xD8($s0)
    ctx->pc = 0x321124u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
label_321128:
    // 0x321128: 0xc0c8460  jal         func_321180
label_32112c:
    if (ctx->pc == 0x32112Cu) {
        ctx->pc = 0x32112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321128u;
        // 0x32112c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321130u;
        goto label_321130;
    }
    ctx->pc = 0x321128u;
    SET_GPR_U32(ctx, 31, 0x321130u);
    ctx->pc = 0x32112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321128u;
    // 0x32112c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321180u, 0x321128u, 0x321130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321130u;
label_321130:
    // 0x321130: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x321130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321134:
    // 0x321134: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x321134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_321138:
    // 0x321138: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x321138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_32113c:
    // 0x32113c: 0x40f809  jalr        $v0
label_321140:
    if (ctx->pc == 0x321140u) {
        ctx->pc = 0x321140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32113Cu;
        // 0x321140: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321144u;
        goto label_321144;
    }
    ctx->pc = 0x32113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321144u);
        ctx->pc = 0x321140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32113Cu;
        // 0x321140: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32113Cu, 0x321144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321144u;
label_321144:
    // 0x321144: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x321144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_321148:
    // 0x321148: 0xc0c831a  jal         func_320C68
label_32114c:
    if (ctx->pc == 0x32114Cu) {
        ctx->pc = 0x32114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321148u;
        // 0x32114c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321150u;
        goto label_321150;
    }
    ctx->pc = 0x321148u;
    SET_GPR_U32(ctx, 31, 0x321150u);
    ctx->pc = 0x32114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321148u;
    // 0x32114c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C68u, 0x321148u, 0x321150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321150u;
label_321150:
    // 0x321150: 0x10000005  b           . + 4 + (0x5 << 2)
label_321154:
    if (ctx->pc == 0x321154u) {
        ctx->pc = 0x321154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321150u;
        // 0x321154: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321158u;
        goto label_321158;
    }
    ctx->pc = 0x321150u;
    {
        const bool branch_taken_0x321150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321150u;
        // 0x321154: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321150) {
            ctx->pc = 0x321168u;
            goto label_321168;
        }
    }
    ctx->pc = 0x321158u;
label_321158:
    // 0x321158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32115c:
    // 0x32115c: 0xc0c8460  jal         func_321180
label_321160:
    if (ctx->pc == 0x321160u) {
        ctx->pc = 0x321160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32115Cu;
        // 0x321160: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321164u;
        goto label_321164;
    }
    ctx->pc = 0x32115Cu;
    SET_GPR_U32(ctx, 31, 0x321164u);
    ctx->pc = 0x321160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32115Cu;
    // 0x321160: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321180u, 0x32115Cu, 0x321164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321164u;
label_321164:
    // 0x321164: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x321164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_321168:
    // 0x321168: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x321168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32116c:
    // 0x32116c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32116cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_321170:
    // 0x321170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321174:
    // 0x321174: 0x3e00008  jr          $ra
label_321178:
    if (ctx->pc == 0x321178u) {
        ctx->pc = 0x321178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321174u;
        // 0x321178: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32117Cu;
        goto label_32117c;
    }
    ctx->pc = 0x321174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321174u;
        // 0x321178: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32117Cu;
label_32117c:
    // 0x32117c: 0x0  nop
    ctx->pc = 0x32117cu;
    // NOP
    ctx->pc = 0x321180u;
}
