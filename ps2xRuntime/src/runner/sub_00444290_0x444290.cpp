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

// Function: sub_00444290
// Address: 0x444290 - 0x444388
void sub_00444290_0x444290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444290_0x444290");
#endif

    switch (ctx->pc) {
        case 0x44430cu: goto label_44430c;
        case 0x444354u: goto label_444354;
        case 0x44435cu: goto label_44435c;
        case 0x444364u: goto label_444364;
        default: break;
    }

    ctx->pc = 0x444290u;

    // 0x444290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x444290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x444294: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x444294u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x444298: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x444298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44429c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4442a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4442a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4442a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4442a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4442a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4442a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4442ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4442acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4442b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4442b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4442b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4442b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4442b8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4442B8u;
    {
        const bool branch_taken_0x4442b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4442BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4442B8u;
        // 0x4442bc: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4442b8) {
            ctx->pc = 0x4442D0u;
            goto label_4442d0;
        }
    }
    ctx->pc = 0x4442C0u;
    // 0x4442c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4442c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4442c4: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x4442c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x4442c8: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4442C8u;
    {
        const bool branch_taken_0x4442c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4442c8) {
            ctx->pc = 0x4442CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4442C8u;
            // 0x4442cc: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4442DCu;
            goto label_4442dc;
        }
    }
    ctx->pc = 0x4442D0u;
label_4442d0:
    // 0x4442d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4442d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4442d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4442D4u;
    {
        const bool branch_taken_0x4442d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4442D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4442D4u;
        // 0x4442d8: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4442d4) {
            ctx->pc = 0x444368u;
            goto label_444368;
        }
    }
    ctx->pc = 0x4442DCu;
label_4442dc:
    // 0x4442dc: 0x24429ea0  addiu       $v0, $v0, -0x6160
    ctx->pc = 0x4442dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x4442e0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x4442e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4442e4: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4442E4u;
    {
        const bool branch_taken_0x4442e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4442e4) {
            ctx->pc = 0x4442E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4442E4u;
            // 0x4442e8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4442F8u;
            goto label_4442f8;
        }
    }
    ctx->pc = 0x4442ECu;
    // 0x4442ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4442ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4442f0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4442F0u;
    {
        const bool branch_taken_0x4442f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4442F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4442F0u;
        // 0x4442f4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4442f0) {
            ctx->pc = 0x444368u;
            goto label_444368;
        }
    }
    ctx->pc = 0x4442F8u;
label_4442f8:
    // 0x4442f8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4442f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4442fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4442FCu;
    {
        const bool branch_taken_0x4442fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4442fc) {
            ctx->pc = 0x444310u;
            goto label_444310;
        }
    }
    ctx->pc = 0x444304u;
    // 0x444304: 0xc110f58  jal         func_443D60
    ctx->pc = 0x444304u;
    SET_GPR_U32(ctx, 31, 0x44430Cu);
    ctx->pc = 0x444308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444304u;
    // 0x444308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D60u, 0x444304u, 0x44430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44430Cu;
label_44430c:
    // 0x44430c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x44430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_444310:
    // 0x444310: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x444310u;
    {
        const bool branch_taken_0x444310 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x444314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444310u;
        // 0x444314: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444310) {
            ctx->pc = 0x44432Cu;
            goto label_44432c;
        }
    }
    ctx->pc = 0x444318u;
    // 0x444318: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x444318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44431c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x44431cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x444320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x444320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x444324: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x444324u;
    {
        const bool branch_taken_0x444324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444324u;
        // 0x444328: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444324) {
            ctx->pc = 0x444354u;
            goto label_444354;
        }
    }
    ctx->pc = 0x44432Cu;
label_44432c:
    // 0x44432c: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x44432cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x444330: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x444330u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x444334: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x444334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x444338: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x444338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x44433c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x44433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x444340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x444340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x444344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x444344u;
    {
        const bool branch_taken_0x444344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444344u;
        // 0x444348: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444344) {
            ctx->pc = 0x444354u;
            goto label_444354;
        }
    }
    ctx->pc = 0x44434Cu;
    // 0x44434c: 0xc110f36  jal         func_443CD8
    ctx->pc = 0x44434Cu;
    SET_GPR_U32(ctx, 31, 0x444354u);
    ctx->pc = 0x444350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44434Cu;
    // 0x444350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443CD8u, 0x44434Cu, 0x444354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444354u;
label_444354:
    // 0x444354: 0xc111010  jal         func_444040
    ctx->pc = 0x444354u;
    SET_GPR_U32(ctx, 31, 0x44435Cu);
    ctx->pc = 0x444040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444040u, 0x444354u, 0x44435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44435Cu;
label_44435c:
    // 0x44435c: 0xc110ed2  jal         func_443B48
    ctx->pc = 0x44435Cu;
    SET_GPR_U32(ctx, 31, 0x444364u);
    ctx->pc = 0x444360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44435Cu;
    // 0x444360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443B48u, 0x44435Cu, 0x444364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444364u;
label_444364:
    // 0x444364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x444364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444368:
    // 0x444368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x444368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44436c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44436cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x444370: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x444370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444374: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x444374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44437c: 0x3e00008  jr          $ra
    ctx->pc = 0x44437Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44437Cu;
        // 0x444380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44437Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444384u;
    // 0x444384: 0x0  nop
    ctx->pc = 0x444384u;
    // NOP
    ctx->pc = 0x444388u;
}
