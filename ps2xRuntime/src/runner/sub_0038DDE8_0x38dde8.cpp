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

// Function: sub_0038DDE8
// Address: 0x38dde8 - 0x38dea8
void sub_0038DDE8_0x38dde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DDE8_0x38dde8");
#endif

    switch (ctx->pc) {
        case 0x38dde8u: goto label_38dde8;
        case 0x38ddecu: goto label_38ddec;
        case 0x38ddf0u: goto label_38ddf0;
        case 0x38ddf4u: goto label_38ddf4;
        case 0x38ddf8u: goto label_38ddf8;
        case 0x38ddfcu: goto label_38ddfc;
        case 0x38de00u: goto label_38de00;
        case 0x38de04u: goto label_38de04;
        case 0x38de08u: goto label_38de08;
        case 0x38de0cu: goto label_38de0c;
        case 0x38de10u: goto label_38de10;
        case 0x38de14u: goto label_38de14;
        case 0x38de18u: goto label_38de18;
        case 0x38de1cu: goto label_38de1c;
        case 0x38de20u: goto label_38de20;
        case 0x38de24u: goto label_38de24;
        case 0x38de28u: goto label_38de28;
        case 0x38de2cu: goto label_38de2c;
        case 0x38de30u: goto label_38de30;
        case 0x38de34u: goto label_38de34;
        case 0x38de38u: goto label_38de38;
        case 0x38de3cu: goto label_38de3c;
        case 0x38de40u: goto label_38de40;
        case 0x38de44u: goto label_38de44;
        case 0x38de48u: goto label_38de48;
        case 0x38de4cu: goto label_38de4c;
        case 0x38de50u: goto label_38de50;
        case 0x38de54u: goto label_38de54;
        case 0x38de58u: goto label_38de58;
        case 0x38de5cu: goto label_38de5c;
        case 0x38de60u: goto label_38de60;
        case 0x38de64u: goto label_38de64;
        case 0x38de68u: goto label_38de68;
        case 0x38de6cu: goto label_38de6c;
        case 0x38de70u: goto label_38de70;
        case 0x38de74u: goto label_38de74;
        case 0x38de78u: goto label_38de78;
        case 0x38de7cu: goto label_38de7c;
        case 0x38de80u: goto label_38de80;
        case 0x38de84u: goto label_38de84;
        case 0x38de88u: goto label_38de88;
        case 0x38de8cu: goto label_38de8c;
        case 0x38de90u: goto label_38de90;
        case 0x38de94u: goto label_38de94;
        case 0x38de98u: goto label_38de98;
        case 0x38de9cu: goto label_38de9c;
        case 0x38dea0u: goto label_38dea0;
        case 0x38dea4u: goto label_38dea4;
        default: break;
    }

    ctx->pc = 0x38dde8u;

label_38dde8:
    // 0x38dde8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38dde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38ddec:
    // 0x38ddec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x38ddecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38ddf0:
    // 0x38ddf0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_38ddf4:
    // 0x38ddf4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x38ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_38ddf8:
    // 0x38ddf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38ddfc:
    // 0x38ddfc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38ddfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38de00:
    // 0x38de00: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x38de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38de04:
    // 0x38de04: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x38de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_38de08:
    // 0x38de08: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x38de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38de0c:
    // 0x38de0c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x38de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38de10:
    // 0x38de10: 0xc4c7000c  lwc1        $f7, 0xC($a2)
    ctx->pc = 0x38de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_38de14:
    // 0x38de14: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x38de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38de18:
    // 0x38de18: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x38de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_38de1c:
    // 0x38de1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38de1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38de20:
    // 0x38de20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38de20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38de24:
    // 0x38de24: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x38de24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38de28:
    // 0x38de28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x38de28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_38de2c:
    // 0x38de2c: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x38de2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_38de30:
    // 0x38de30: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x38de30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_38de34:
    // 0x38de34: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x38de34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_38de38:
    // 0x38de38: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x38de38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_38de3c:
    // 0x38de3c: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x38de3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_38de40:
    // 0x38de40: 0xe7a7001c  swc1        $f7, 0x1C($sp)
    ctx->pc = 0x38de40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_38de44:
    // 0x38de44: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x38de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_38de48:
    // 0x38de48: 0xc0e390c  jal         func_38E430
label_38de4c:
    if (ctx->pc == 0x38DE4Cu) {
        ctx->pc = 0x38DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE48u;
        // 0x38de4c: 0x8c440844  lw          $a0, 0x844($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE50u;
        goto label_38de50;
    }
    ctx->pc = 0x38DE48u;
    SET_GPR_U32(ctx, 31, 0x38DE50u);
    ctx->pc = 0x38DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE48u;
    // 0x38de4c: 0x8c440844  lw          $a0, 0x844($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E430u, 0x38DE48u, 0x38DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE50u;
label_38de50:
    // 0x38de50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38de50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38de54:
    // 0x38de54: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_38de58:
    if (ctx->pc == 0x38DE58u) {
        ctx->pc = 0x38DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE54u;
        // 0x38de58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE5Cu;
        goto label_38de5c;
    }
    ctx->pc = 0x38DE54u;
    {
        const bool branch_taken_0x38de54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE54u;
        // 0x38de58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de54) {
            ctx->pc = 0x38DE8Cu;
            goto label_38de8c;
        }
    }
    ctx->pc = 0x38DE5Cu;
label_38de5c:
    // 0x38de5c: 0xc0e25ec  jal         func_3897B0
label_38de60:
    if (ctx->pc == 0x38DE60u) {
        ctx->pc = 0x38DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE5Cu;
        // 0x38de60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE64u;
        goto label_38de64;
    }
    ctx->pc = 0x38DE5Cu;
    SET_GPR_U32(ctx, 31, 0x38DE64u);
    ctx->pc = 0x38DE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE5Cu;
    // 0x38de60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3897B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3897B0u, 0x38DE5Cu, 0x38DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE64u;
label_38de64:
    // 0x38de64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38de64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38de68:
    // 0x38de68: 0xc0e25f2  jal         func_3897C8
label_38de6c:
    if (ctx->pc == 0x38DE6Cu) {
        ctx->pc = 0x38DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE68u;
        // 0x38de6c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE70u;
        goto label_38de70;
    }
    ctx->pc = 0x38DE68u;
    SET_GPR_U32(ctx, 31, 0x38DE70u);
    ctx->pc = 0x38DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE68u;
    // 0x38de6c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3897C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3897C8u, 0x38DE68u, 0x38DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE70u;
label_38de70:
    // 0x38de70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38de74:
    // 0x38de74: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x38de74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38de78:
    // 0x38de78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38de7c:
    // 0x38de7c: 0x40f809  jalr        $v0
label_38de80:
    if (ctx->pc == 0x38DE80u) {
        ctx->pc = 0x38DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE7Cu;
        // 0x38de80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE84u;
        goto label_38de84;
    }
    ctx->pc = 0x38DE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38DE84u);
        ctx->pc = 0x38DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE7Cu;
        // 0x38de80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DE7Cu, 0x38DE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38DE84u;
label_38de84:
    // 0x38de84: 0x10000004  b           . + 4 + (0x4 << 2)
label_38de88:
    if (ctx->pc == 0x38DE88u) {
        ctx->pc = 0x38DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE84u;
        // 0x38de88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DE8Cu;
        goto label_38de8c;
    }
    ctx->pc = 0x38DE84u;
    {
        const bool branch_taken_0x38de84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE84u;
        // 0x38de88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de84) {
            ctx->pc = 0x38DE98u;
            goto label_38de98;
        }
    }
    ctx->pc = 0x38DE8Cu;
label_38de8c:
    // 0x38de8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38de90:
    // 0x38de90: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x38de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_38de94:
    // 0x38de94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38de94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38de98:
    // 0x38de98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38de98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38de9c:
    // 0x38de9c: 0x3e00008  jr          $ra
label_38dea0:
    if (ctx->pc == 0x38DEA0u) {
        ctx->pc = 0x38DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE9Cu;
        // 0x38dea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DEA4u;
        goto label_38dea4;
    }
    ctx->pc = 0x38DE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE9Cu;
        // 0x38dea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DEA4u;
label_38dea4:
    // 0x38dea4: 0x0  nop
    ctx->pc = 0x38dea4u;
    // NOP
    ctx->pc = 0x38dea8u;
}
