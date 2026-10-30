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

// Function: sub_001172C8
// Address: 0x1172c8 - 0x1173e8
void sub_001172C8_0x1172c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001172C8_0x1172c8");
#endif

    switch (ctx->pc) {
        case 0x117318u: goto label_117318;
        case 0x1173d4u: goto label_1173d4;
        default: break;
    }

    ctx->pc = 0x1172c8u;

    // 0x1172c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1172c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1172cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1172ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1172d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1172d4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1172d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1172d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1172d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1172dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1172dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172e0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1172e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1172e4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1172e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1172e8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1172e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1172ec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1172ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1172f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1172f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1172f4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1172f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1172f8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1172f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1172fc: 0x14e00021  bnez        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x1172FCu;
    {
        const bool branch_taken_0x1172fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x117300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172FCu;
        // 0x117300: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172fc) {
            ctx->pc = 0x117384u;
            goto label_117384;
        }
    }
    ctx->pc = 0x117304u;
    // 0x117304: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x117304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x117308: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x117308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x11730c: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x11730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    // 0x117310: 0xc050fda  jal         func_143F68
    ctx->pc = 0x117310u;
    SET_GPR_U32(ctx, 31, 0x117318u);
    ctx->pc = 0x117314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117310u;
    // 0x117314: 0x24a582f0  addiu       $a1, $a1, -0x7D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x117310u, 0x117318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117318u;
label_117318:
    // 0x117318: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x117318u;
    {
        const bool branch_taken_0x117318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117318u;
        // 0x11731c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117318) {
            ctx->pc = 0x117360u;
            goto label_117360;
        }
    }
    ctx->pc = 0x117320u;
    // 0x117320: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x117320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x117324: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x117324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x117328: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x117328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x11732c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x117330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x117330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x117334: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x117334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x117338: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x117338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11733c: 0x24a58318  addiu       $a1, $a1, -0x7CE8
    ctx->pc = 0x11733cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935320));
    // 0x117340: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x117340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x117344: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x117344u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117348: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x117348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11734c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x11734cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117350: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117354: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x117354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117358: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x117358u;
    {
        const bool branch_taken_0x117358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117358u;
        // 0x11735c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117358) {
            ctx->pc = 0x1173C8u;
            goto label_1173c8;
        }
    }
    ctx->pc = 0x117360u;
label_117360:
    // 0x117360: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x117360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x117364: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x117364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x117368: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x117368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x11736c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x117370: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x117370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x117374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x117374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117378: 0x24a58328  addiu       $a1, $a1, -0x7CD8
    ctx->pc = 0x117378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935336));
    // 0x11737c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11737Cu;
    {
        const bool branch_taken_0x11737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11737Cu;
        // 0x117380: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11737c) {
            ctx->pc = 0x1173B0u;
            goto label_1173b0;
        }
    }
    ctx->pc = 0x117384u;
label_117384:
    // 0x117384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117388: 0x14e20012  bne         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x117388u;
    {
        const bool branch_taken_0x117388 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x11738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117388u;
        // 0x11738c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117388) {
            ctx->pc = 0x1173D4u;
            goto label_1173d4;
        }
    }
    ctx->pc = 0x117390u;
    // 0x117390: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x117390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x117394: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x117394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x117398: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x117398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x11739c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x11739cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x1173a0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1173a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1173a4: 0x24a58328  addiu       $a1, $a1, -0x7CD8
    ctx->pc = 0x1173a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935336));
    // 0x1173a8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1173a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1173ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1173acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1173b0:
    // 0x1173b0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1173b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1173b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1173b8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1173b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1173bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1173c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1173c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1173c4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1173c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1173c8:
    // 0x1173c8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1173c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1173cc: 0xc0443a6  jal         func_110E98
    ctx->pc = 0x1173CCu;
    SET_GPR_U32(ctx, 31, 0x1173D4u);
    ctx->pc = 0x1173D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173CCu;
    // 0x1173d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E98u, 0x1173CCu, 0x1173D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173D4u;
label_1173d4:
    // 0x1173d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1173d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1173d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1173d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1173dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1173DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1173E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173DCu;
        // 0x1173e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1173DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1173E4u;
    // 0x1173e4: 0x0  nop
    ctx->pc = 0x1173e4u;
    // NOP
    ctx->pc = 0x1173e8u;
}
