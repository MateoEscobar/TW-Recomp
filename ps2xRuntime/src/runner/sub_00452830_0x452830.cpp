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

// Function: sub_00452830
// Address: 0x452830 - 0x452bf0
void sub_00452830_0x452830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452830_0x452830");
#endif

    switch (ctx->pc) {
        case 0x4528d8u: goto label_4528d8;
        case 0x45294cu: goto label_45294c;
        case 0x45298cu: goto label_45298c;
        case 0x4529dcu: goto label_4529dc;
        case 0x452a78u: goto label_452a78;
        case 0x452a84u: goto label_452a84;
        case 0x452b40u: goto label_452b40;
        default: break;
    }

    ctx->pc = 0x452830u;

    // 0x452830: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x452830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x452834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x452834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452838: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x452838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x45283c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x45283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x452840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x452840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452844: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x452844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x452848: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x452848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45284c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x45284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x452850: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x452850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x452854: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x452854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x452858: 0x2614003c  addiu       $s4, $s0, 0x3C
    ctx->pc = 0x452858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x45285c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x45285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x452860: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x452860u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452864: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x452864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x452868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45286c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x45286cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x452870: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x452870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x452874: 0x8e51004c  lw          $s1, 0x4C($s2)
    ctx->pc = 0x452874u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x452878: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x452878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x45287c: 0x1482002d  bne         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x45287Cu;
    {
        const bool branch_taken_0x45287c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x452880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45287Cu;
        // 0x452880: 0x100b82d  daddu       $s7, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45287c) {
            ctx->pc = 0x452934u;
            goto label_452934;
        }
    }
    ctx->pc = 0x452884u;
    // 0x452884: 0x8e3600e4  lw          $s6, 0xE4($s1)
    ctx->pc = 0x452884u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x452888: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x452888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x45288c: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x45288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x452890: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x452890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x452894: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x452894u;
    {
        const bool branch_taken_0x452894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x452898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452894u;
        // 0x452898: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452894) {
            ctx->pc = 0x4528A0u;
            goto label_4528a0;
        }
    }
    ctx->pc = 0x45289Cu;
    // 0x45289c: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x45289cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_4528a0:
    // 0x4528a0: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x4528a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x4528a4: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x4528a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4528a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4528a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4528ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4528acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4528b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4528B0u;
    {
        const bool branch_taken_0x4528b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4528b0) {
            ctx->pc = 0x4528B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4528B0u;
            // 0x4528b4: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4528C8u;
            goto label_4528c8;
        }
    }
    ctx->pc = 0x4528B8u;
    // 0x4528b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4528b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4528bc: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4528BCu;
    {
        const bool branch_taken_0x4528bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4528bc) {
            ctx->pc = 0x4528C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4528BCu;
            // 0x4528c0: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4528E0u;
            goto label_4528e0;
        }
    }
    ctx->pc = 0x4528C4u;
    // 0x4528c4: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4528c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_4528c8:
    // 0x4528c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4528c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4528cc: 0x8f848910  lw          $a0, -0x76F0($gp)
    ctx->pc = 0x4528ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x4528d0: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x4528D0u;
    SET_GPR_U32(ctx, 31, 0x4528D8u);
    ctx->pc = 0x4528D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4528D0u;
    // 0x4528d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x4528D0u, 0x4528D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4528D8u;
label_4528d8:
    // 0x4528d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4528d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4528dc: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x4528dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_4528e0:
    // 0x4528e0: 0x26240138  addiu       $a0, $s1, 0x138
    ctx->pc = 0x4528e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x4528e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4528e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4528e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4528e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4528ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4528ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4528f0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4528f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4528f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4528f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4528f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4528F8u;
    {
        const bool branch_taken_0x4528f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4528FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4528F8u;
        // 0x4528fc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4528f8) {
            ctx->pc = 0x452918u;
            goto label_452918;
        }
    }
    ctx->pc = 0x452900u;
    // 0x452900: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x452900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x452904: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x452904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x452908: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x452908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x45290c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45290cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x452910: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x452910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x452914: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x452914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_452918:
    // 0x452918: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x452918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x45291c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x45291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x452920: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x452920u;
    {
        const bool branch_taken_0x452920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x452924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452920u;
        // 0x452924: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452920) {
            ctx->pc = 0x452934u;
            goto label_452934;
        }
    }
    ctx->pc = 0x452928u;
    // 0x452928: 0x24620138  addiu       $v0, $v1, 0x138
    ctx->pc = 0x452928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x45292c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x45292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x452930: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x452930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_452934:
    // 0x452934: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x452934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x452938: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x452938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x45293c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45293Cu;
    {
        const bool branch_taken_0x45293c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x452940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45293Cu;
        // 0x452940: 0x8e3600e4  lw          $s6, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45293c) {
            ctx->pc = 0x45294Cu;
            goto label_45294c;
        }
    }
    ctx->pc = 0x452944u;
    // 0x452944: 0xc113b66  jal         func_44ED98
    ctx->pc = 0x452944u;
    SET_GPR_U32(ctx, 31, 0x45294Cu);
    ctx->pc = 0x452948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452944u;
    // 0x452948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44ED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44ED98u, 0x452944u, 0x45294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45294Cu;
label_45294c:
    // 0x45294c: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x45294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x452950: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x452950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x452954: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x452954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452958: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x452958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x45295c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x45295cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x452960: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x452960u;
    {
        const bool branch_taken_0x452960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x452964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452960u;
        // 0x452964: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452960) {
            ctx->pc = 0x452980u;
            goto label_452980;
        }
    }
    ctx->pc = 0x452968u;
    // 0x452968: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x452968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45296c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452970: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x452970u;
    {
        const bool branch_taken_0x452970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x452974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452970u;
        // 0x452974: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452970) {
            ctx->pc = 0x452984u;
            goto label_452984;
        }
    }
    ctx->pc = 0x452978u;
    // 0x452978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x452978u;
    {
        const bool branch_taken_0x452978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452978u;
        // 0x45297c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452978) {
            ctx->pc = 0x45298Cu;
            goto label_45298c;
        }
    }
    ctx->pc = 0x452980u;
label_452980:
    // 0x452980: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x452980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_452984:
    // 0x452984: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x452984u;
    SET_GPR_U32(ctx, 31, 0x45298Cu);
    ctx->pc = 0x452988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452984u;
    // 0x452988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x452984u, 0x45298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45298Cu;
label_45298c:
    // 0x45298c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x452990: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x452990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x452994: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x452994u;
    {
        const bool branch_taken_0x452994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x452998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452994u;
        // 0x452998: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452994) {
            ctx->pc = 0x4529D0u;
            goto label_4529d0;
        }
    }
    ctx->pc = 0x45299Cu;
    // 0x45299c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x45299cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x4529a0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4529a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x4529a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4529a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4529a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4529a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4529ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4529acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4529b0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4529b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4529b4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4529b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x4529b8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4529b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4529bc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4529bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x4529c0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x4529c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x4529c4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4529c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x4529c8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x4529C8u;
    {
        const bool branch_taken_0x4529c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4529CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4529C8u;
        // 0x4529cc: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4529c8) {
            ctx->pc = 0x452BC0u;
            goto label_452bc0;
        }
    }
    ctx->pc = 0x4529D0u;
label_4529d0:
    // 0x4529d0: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x4529d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946072)));
    // 0x4529d4: 0xc12104a  jal         func_484128
    ctx->pc = 0x4529D4u;
    SET_GPR_U32(ctx, 31, 0x4529DCu);
    ctx->pc = 0x4529D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4529D4u;
    // 0x4529d8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x4529D4u, 0x4529DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4529DCu;
label_4529dc:
    // 0x4529dc: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x4529dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x4529e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4529e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4529e4: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x4529e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x4529e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4529E8u;
    {
        const bool branch_taken_0x4529e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4529E8u;
        // 0x4529ec: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4529e8) {
            ctx->pc = 0x452A28u;
            goto label_452a28;
        }
    }
    ctx->pc = 0x4529F0u;
    // 0x4529f0: 0x6a4200b7  ldl         $v0, 0xB7($s2)
    ctx->pc = 0x4529f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4529f4: 0x6e4200b0  ldr         $v0, 0xB0($s2)
    ctx->pc = 0x4529f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4529f8: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x4529f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x4529fc: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x4529fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452a00: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x452a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452a04: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x452a04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x452a08: 0x6a4200c7  ldl         $v0, 0xC7($s2)
    ctx->pc = 0x452a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x452a0c: 0x6e4200c0  ldr         $v0, 0xC0($s2)
    ctx->pc = 0x452a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x452a10: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x452a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x452a14: 0xb2820007  sdl         $v0, 0x7($s4)
    ctx->pc = 0x452a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452a18: 0xb6820000  sdr         $v0, 0x0($s4)
    ctx->pc = 0x452a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452a1c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x452a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x452a20: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x452A20u;
    {
        const bool branch_taken_0x452a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452a20) {
            ctx->pc = 0x452B38u;
            goto label_452b38;
        }
    }
    ctx->pc = 0x452A28u;
label_452a28:
    // 0x452a28: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x452a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x452a2c: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x452A2Cu;
    {
        const bool branch_taken_0x452a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452a2c) {
            ctx->pc = 0x452A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x452A2Cu;
            // 0x452a30: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x452B00u;
            goto label_452b00;
        }
    }
    ctx->pc = 0x452A34u;
    // 0x452a34: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x452a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452a38: 0xc64c0078  lwc1        $f12, 0x78($s2)
    ctx->pc = 0x452a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x452a3c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x452a3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x452a40: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x452a40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x452a44: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x452a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452a48: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452a48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x452a4c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x452a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x452a50: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x452a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452a54: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x452a54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x452a58: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x452a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x452a5c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x452a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452a60: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x452a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x452a64: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x452a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452a68: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x452a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x452a6c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x452a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452a70: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x452A70u;
    SET_GPR_U32(ctx, 31, 0x452A78u);
    ctx->pc = 0x452A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452A70u;
    // 0x452a74: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x452A70u, 0x452A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452A78u;
label_452a78:
    // 0x452a78: 0xc64c0078  lwc1        $f12, 0x78($s2)
    ctx->pc = 0x452a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x452a7c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x452A7Cu;
    SET_GPR_U32(ctx, 31, 0x452A84u);
    ctx->pc = 0x452A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452A7Cu;
    // 0x452a80: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x452A7Cu, 0x452A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452A84u;
label_452a84:
    // 0x452a84: 0x4600a0c7  neg.s       $f3, $f20
    ctx->pc = 0x452a84u;
    ctx->f[3] = FPU_NEG_S(ctx->f[20]);
    // 0x452a88: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x452a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x452a8c: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x452a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x452a90: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x452a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x452a94: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x452a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452a98: 0x46061b02  mul.s       $f12, $f3, $f6
    ctx->pc = 0x452a98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x452a9c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x452a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x452aa0: 0x46091ac2  mul.s       $f11, $f3, $f9
    ctx->pc = 0x452aa0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x452aa4: 0xc7aa0004  lwc1        $f10, 0x4($sp)
    ctx->pc = 0x452aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x452aa8: 0x46040202  mul.s       $f8, $f0, $f4
    ctx->pc = 0x452aa8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x452aac: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x452aacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x452ab0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x452ab0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x452ab4: 0x460a01c2  mul.s       $f7, $f0, $f10
    ctx->pc = 0x452ab4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x452ab8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x452ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x452abc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x452abcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x452ac0: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x452ac0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x452ac4: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x452ac4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x452ac8: 0x460aa502  mul.s       $f20, $f20, $f10
    ctx->pc = 0x452ac8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
    // 0x452acc: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x452accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x452ad0: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x452ad0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x452ad4: 0x460b39c0  add.s       $f7, $f7, $f11
    ctx->pc = 0x452ad4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[11]);
    // 0x452ad8: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x452ad8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x452adc: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x452adcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x452ae0: 0xe6680000  swc1        $f8, 0x0($s3)
    ctx->pc = 0x452ae0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x452ae4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x452ae4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x452ae8: 0xe6670004  swc1        $f7, 0x4($s3)
    ctx->pc = 0x452ae8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x452aec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x452aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x452af0: 0xe6650008  swc1        $f5, 0x8($s3)
    ctx->pc = 0x452af0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x452af4: 0xe6840000  swc1        $f4, 0x0($s4)
    ctx->pc = 0x452af4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x452af8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x452AF8u;
    {
        const bool branch_taken_0x452af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x452AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452AF8u;
        // 0x452afc: 0xe6940004  swc1        $f20, 0x4($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x452af8) {
            ctx->pc = 0x452B34u;
            goto label_452b34;
        }
    }
    ctx->pc = 0x452B00u;
label_452b00:
    // 0x452b00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452b00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x452b04: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x452b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x452b08: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x452b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452b0c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x452b0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x452b10: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x452b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x452b14: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x452b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452b18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452b18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x452b1c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x452b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x452b20: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x452b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452b24: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x452b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x452b28: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x452b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452b2c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x452b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x452b30: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x452b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_452b34:
    // 0x452b34: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x452b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_452b38:
    // 0x452b38: 0xc123508  jal         func_48D420
    ctx->pc = 0x452B38u;
    SET_GPR_U32(ctx, 31, 0x452B40u);
    ctx->pc = 0x48D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D420u, 0x452B38u, 0x452B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452B40u;
label_452b40:
    // 0x452b40: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x452b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x452b44: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x452b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x452b48: 0x3c02ffe7  lui         $v0, 0xFFE7
    ctx->pc = 0x452b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65511 << 16));
    // 0x452b4c: 0x2c43018  mult        $a2, $s6, $a0
    ctx->pc = 0x452b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x452b50: 0x3463dfbd  ori         $v1, $v1, 0xDFBD
    ctx->pc = 0x452b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57277);
    // 0x452b54: 0x3442fe7f  ori         $v0, $v0, 0xFE7F
    ctx->pc = 0x452b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65151);
    // 0x452b58: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x452b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x452b5c: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x452b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x452b60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x452b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x452b64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x452b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452b68: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x452b68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x452b6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x452b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x452b70: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x452b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x452b74: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x452b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x452b78: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x452b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x452b7c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x452b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x452b80: 0x8ca40140  lw          $a0, 0x140($a1)
    ctx->pc = 0x452b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x452b84: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x452b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x452b88: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x452B88u;
    {
        const bool branch_taken_0x452b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x452B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452B88u;
        // 0x452b8c: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452b88) {
            ctx->pc = 0x452BA4u;
            goto label_452ba4;
        }
    }
    ctx->pc = 0x452B90u;
    // 0x452b90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x452b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452b94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x452b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x452b98: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x452b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x452b9c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x452b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x452ba0: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x452ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_452ba4:
    // 0x452ba4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x452ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x452ba8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x452BA8u;
    {
        const bool branch_taken_0x452ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x452BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452BA8u;
        // 0x452bac: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452ba8) {
            ctx->pc = 0x452BC0u;
            goto label_452bc0;
        }
    }
    ctx->pc = 0x452BB0u;
    // 0x452bb0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x452bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x452bb4: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x452bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x452bb8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x452bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x452bbc: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x452bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_452bc0:
    // 0x452bc0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x452bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x452bc4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x452bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x452bc8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x452bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x452bcc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x452bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x452bd0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x452bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x452bd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x452bd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x452bd8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x452bd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452bdc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x452bdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x452be0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x452be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452be4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x452be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x452be8: 0x3e00008  jr          $ra
    ctx->pc = 0x452BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452BE8u;
        // 0x452bec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452BF0u;
}
