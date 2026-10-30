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

// Function: sub_00407068
// Address: 0x407068 - 0x4071b8
void sub_00407068_0x407068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407068_0x407068");
#endif

    switch (ctx->pc) {
        case 0x407068u: goto label_407068;
        case 0x40706cu: goto label_40706c;
        case 0x407070u: goto label_407070;
        case 0x407074u: goto label_407074;
        case 0x407078u: goto label_407078;
        case 0x40707cu: goto label_40707c;
        case 0x407080u: goto label_407080;
        case 0x407084u: goto label_407084;
        case 0x407088u: goto label_407088;
        case 0x40708cu: goto label_40708c;
        case 0x407090u: goto label_407090;
        case 0x407094u: goto label_407094;
        case 0x407098u: goto label_407098;
        case 0x40709cu: goto label_40709c;
        case 0x4070a0u: goto label_4070a0;
        case 0x4070a4u: goto label_4070a4;
        case 0x4070a8u: goto label_4070a8;
        case 0x4070acu: goto label_4070ac;
        case 0x4070b0u: goto label_4070b0;
        case 0x4070b4u: goto label_4070b4;
        case 0x4070b8u: goto label_4070b8;
        case 0x4070bcu: goto label_4070bc;
        case 0x4070c0u: goto label_4070c0;
        case 0x4070c4u: goto label_4070c4;
        case 0x4070c8u: goto label_4070c8;
        case 0x4070ccu: goto label_4070cc;
        case 0x4070d0u: goto label_4070d0;
        case 0x4070d4u: goto label_4070d4;
        case 0x4070d8u: goto label_4070d8;
        case 0x4070dcu: goto label_4070dc;
        case 0x4070e0u: goto label_4070e0;
        case 0x4070e4u: goto label_4070e4;
        case 0x4070e8u: goto label_4070e8;
        case 0x4070ecu: goto label_4070ec;
        case 0x4070f0u: goto label_4070f0;
        case 0x4070f4u: goto label_4070f4;
        case 0x4070f8u: goto label_4070f8;
        case 0x4070fcu: goto label_4070fc;
        case 0x407100u: goto label_407100;
        case 0x407104u: goto label_407104;
        case 0x407108u: goto label_407108;
        case 0x40710cu: goto label_40710c;
        case 0x407110u: goto label_407110;
        case 0x407114u: goto label_407114;
        case 0x407118u: goto label_407118;
        case 0x40711cu: goto label_40711c;
        case 0x407120u: goto label_407120;
        case 0x407124u: goto label_407124;
        case 0x407128u: goto label_407128;
        case 0x40712cu: goto label_40712c;
        case 0x407130u: goto label_407130;
        case 0x407134u: goto label_407134;
        case 0x407138u: goto label_407138;
        case 0x40713cu: goto label_40713c;
        case 0x407140u: goto label_407140;
        case 0x407144u: goto label_407144;
        case 0x407148u: goto label_407148;
        case 0x40714cu: goto label_40714c;
        case 0x407150u: goto label_407150;
        case 0x407154u: goto label_407154;
        case 0x407158u: goto label_407158;
        case 0x40715cu: goto label_40715c;
        case 0x407160u: goto label_407160;
        case 0x407164u: goto label_407164;
        case 0x407168u: goto label_407168;
        case 0x40716cu: goto label_40716c;
        case 0x407170u: goto label_407170;
        case 0x407174u: goto label_407174;
        case 0x407178u: goto label_407178;
        case 0x40717cu: goto label_40717c;
        case 0x407180u: goto label_407180;
        case 0x407184u: goto label_407184;
        case 0x407188u: goto label_407188;
        case 0x40718cu: goto label_40718c;
        case 0x407190u: goto label_407190;
        case 0x407194u: goto label_407194;
        case 0x407198u: goto label_407198;
        case 0x40719cu: goto label_40719c;
        case 0x4071a0u: goto label_4071a0;
        case 0x4071a4u: goto label_4071a4;
        case 0x4071a8u: goto label_4071a8;
        case 0x4071acu: goto label_4071ac;
        case 0x4071b0u: goto label_4071b0;
        case 0x4071b4u: goto label_4071b4;
        default: break;
    }

    ctx->pc = 0x407068u;

label_407068:
    // 0x407068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x407068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40706c:
    // 0x40706c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x40706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_407070:
    // 0x407070: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x407070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_407074:
    // 0x407074: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x407074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_407078:
    // 0x407078: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x407078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40707c:
    // 0x40707c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_407080:
    // 0x407080: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x407080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_407084:
    // 0x407084: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x407084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_407088:
    // 0x407088: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x407088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_40708c:
    // 0x40708c: 0x40f809  jalr        $v0
label_407090:
    if (ctx->pc == 0x407090u) {
        ctx->pc = 0x407090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40708Cu;
        // 0x407090: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407094u;
        goto label_407094;
    }
    ctx->pc = 0x40708Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x407094u);
        ctx->pc = 0x407090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40708Cu;
        // 0x407090: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40708Cu, 0x407094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x407094u;
label_407094:
    // 0x407094: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x407094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407098:
    // 0x407098: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x407098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_40709c:
    // 0x40709c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x40709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4070a0:
    // 0x4070a0: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_4070a4:
    if (ctx->pc == 0x4070A4u) {
        ctx->pc = 0x4070A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070A0u;
        // 0x4070a4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4070A8u;
        goto label_4070a8;
    }
    ctx->pc = 0x4070A0u;
    {
        const bool branch_taken_0x4070a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4070a0) {
            ctx->pc = 0x4070A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4070A0u;
            // 0x4070a4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4070E0u;
            goto label_4070e0;
        }
    }
    ctx->pc = 0x4070A8u;
label_4070a8:
    // 0x4070a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4070a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4070ac:
    // 0x4070ac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4070b0:
    if (ctx->pc == 0x4070B0u) {
        ctx->pc = 0x4070B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070ACu;
        // 0x4070b0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4070B4u;
        goto label_4070b4;
    }
    ctx->pc = 0x4070ACu;
    {
        const bool branch_taken_0x4070ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4070ac) {
            ctx->pc = 0x4070B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4070ACu;
            // 0x4070b0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4070CCu;
            goto label_4070cc;
        }
    }
    ctx->pc = 0x4070B4u;
label_4070b4:
    // 0x4070b4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x4070b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4070b8:
    // 0x4070b8: 0xc0e91f0  jal         func_3A47C0
label_4070bc:
    if (ctx->pc == 0x4070BCu) {
        ctx->pc = 0x4070BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070B8u;
        // 0x4070bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4070C0u;
        goto label_4070c0;
    }
    ctx->pc = 0x4070B8u;
    SET_GPR_U32(ctx, 31, 0x4070C0u);
    ctx->pc = 0x4070BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4070B8u;
    // 0x4070bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x4070B8u, 0x4070C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4070C0u;
label_4070c0:
    // 0x4070c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4070c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4070c4:
    // 0x4070c4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x4070c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_4070c8:
    // 0x4070c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4070c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4070cc:
    // 0x4070cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4070ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4070d0:
    // 0x4070d0: 0x2c43001f  sltiu       $v1, $v0, 0x1F
    ctx->pc = 0x4070d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_4070d4:
    // 0x4070d4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_4070d8:
    if (ctx->pc == 0x4070D8u) {
        ctx->pc = 0x4070D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070D4u;
        // 0x4070d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4070DCu;
        goto label_4070dc;
    }
    ctx->pc = 0x4070D4u;
    {
        const bool branch_taken_0x4070d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4070D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070D4u;
        // 0x4070d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4070d4) {
            ctx->pc = 0x40712Cu;
            goto label_40712c;
        }
    }
    ctx->pc = 0x4070DCu;
label_4070dc:
    // 0x4070dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4070dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4070e0:
    // 0x4070e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4070e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4070e4:
    // 0x4070e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4070e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4070e8:
    // 0x4070e8: 0x40f809  jalr        $v0
label_4070ec:
    if (ctx->pc == 0x4070ECu) {
        ctx->pc = 0x4070ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070E8u;
        // 0x4070ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4070F0u;
        goto label_4070f0;
    }
    ctx->pc = 0x4070E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4070F0u);
        ctx->pc = 0x4070ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070E8u;
        // 0x4070ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4070E8u, 0x4070F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4070F0u;
label_4070f0:
    // 0x4070f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4070f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4070f4:
    // 0x4070f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x4070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_4070f8:
    // 0x4070f8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x4070f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_4070fc:
    // 0x4070fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_407100:
    if (ctx->pc == 0x407100u) {
        ctx->pc = 0x407100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070FCu;
        // 0x407100: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407104u;
        goto label_407104;
    }
    ctx->pc = 0x4070FCu;
    {
        const bool branch_taken_0x4070fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070FCu;
        // 0x407100: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4070fc) {
            ctx->pc = 0x407134u;
            goto label_407134;
        }
    }
    ctx->pc = 0x407104u;
label_407104:
    // 0x407104: 0xc0e87c0  jal         func_3A1F00
label_407108:
    if (ctx->pc == 0x407108u) {
        ctx->pc = 0x407108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407104u;
        // 0x407108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40710Cu;
        goto label_40710c;
    }
    ctx->pc = 0x407104u;
    SET_GPR_U32(ctx, 31, 0x40710Cu);
    ctx->pc = 0x407108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407104u;
    // 0x407108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x407104u, 0x40710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40710Cu;
label_40710c:
    // 0x40710c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x40710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_407110:
    // 0x407110: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x407110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_407114:
    // 0x407114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x407114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_407118:
    // 0x407118: 0x0  nop
    ctx->pc = 0x407118u;
    // NOP
label_40711c:
    // 0x40711c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40711cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_407120:
    // 0x407120: 0x0  nop
    ctx->pc = 0x407120u;
    // NOP
label_407124:
    // 0x407124: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_407128:
    if (ctx->pc == 0x407128u) {
        ctx->pc = 0x407128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407124u;
        // 0x407128: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40712Cu;
        goto label_40712c;
    }
    ctx->pc = 0x407124u;
    {
        const bool branch_taken_0x407124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x407128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407124u;
        // 0x407128: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407124) {
            ctx->pc = 0x407134u;
            goto label_407134;
        }
    }
    ctx->pc = 0x40712Cu;
label_40712c:
    // 0x40712c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_407130:
    if (ctx->pc == 0x407130u) {
        ctx->pc = 0x407130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40712Cu;
        // 0x407130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407134u;
        goto label_407134;
    }
    ctx->pc = 0x40712Cu;
    {
        const bool branch_taken_0x40712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40712Cu;
        // 0x407130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40712c) {
            ctx->pc = 0x4071A0u;
            goto label_4071a0;
        }
    }
    ctx->pc = 0x407134u;
label_407134:
    // 0x407134: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x407134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_407138:
    // 0x407138: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_40713c:
    if (ctx->pc == 0x40713Cu) {
        ctx->pc = 0x40713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407138u;
        // 0x40713c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407140u;
        goto label_407140;
    }
    ctx->pc = 0x407138u;
    {
        const bool branch_taken_0x407138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407138u;
        // 0x40713c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407138) {
            ctx->pc = 0x407190u;
            goto label_407190;
        }
    }
    ctx->pc = 0x407140u;
label_407140:
    // 0x407140: 0xc0e90ca  jal         func_3A4328
label_407144:
    if (ctx->pc == 0x407144u) {
        ctx->pc = 0x407144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407140u;
        // 0x407144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407148u;
        goto label_407148;
    }
    ctx->pc = 0x407140u;
    SET_GPR_U32(ctx, 31, 0x407148u);
    ctx->pc = 0x407144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407140u;
    // 0x407144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x407140u, 0x407148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407148u;
label_407148:
    // 0x407148: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x407148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_40714c:
    // 0x40714c: 0xc043d5e  jal         func_10F578
label_407150:
    if (ctx->pc == 0x407150u) {
        ctx->pc = 0x407150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40714Cu;
        // 0x407150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407154u;
        goto label_407154;
    }
    ctx->pc = 0x40714Cu;
    SET_GPR_U32(ctx, 31, 0x407154u);
    ctx->pc = 0x407150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40714Cu;
    // 0x407150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x40714Cu, 0x407154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407154u;
label_407154:
    // 0x407154: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_407158:
    if (ctx->pc == 0x407158u) {
        ctx->pc = 0x407158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407154u;
        // 0x407158: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40715Cu;
        goto label_40715c;
    }
    ctx->pc = 0x407154u;
    {
        const bool branch_taken_0x407154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x407154) {
            ctx->pc = 0x407158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x407154u;
            // 0x407158: 0x26300014  addiu       $s0, $s1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x407170u;
            goto label_407170;
        }
    }
    ctx->pc = 0x40715Cu;
label_40715c:
    // 0x40715c: 0xc043d5e  jal         func_10F578
label_407160:
    if (ctx->pc == 0x407160u) {
        ctx->pc = 0x407160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40715Cu;
        // 0x407160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407164u;
        goto label_407164;
    }
    ctx->pc = 0x40715Cu;
    SET_GPR_U32(ctx, 31, 0x407164u);
    ctx->pc = 0x407160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40715Cu;
    // 0x407160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x40715Cu, 0x407164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407164u;
label_407164:
    // 0x407164: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x407164u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407168:
    // 0x407168: 0x7c4300c0  sq          $v1, 0xC0($v0)
    ctx->pc = 0x407168u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 3));
label_40716c:
    // 0x40716c: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x40716cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_407170:
    // 0x407170: 0xc043d5e  jal         func_10F578
label_407174:
    if (ctx->pc == 0x407174u) {
        ctx->pc = 0x407174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407170u;
        // 0x407174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407178u;
        goto label_407178;
    }
    ctx->pc = 0x407170u;
    SET_GPR_U32(ctx, 31, 0x407178u);
    ctx->pc = 0x407174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407170u;
    // 0x407174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x407170u, 0x407178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407178u;
label_407178:
    // 0x407178: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_40717c:
    if (ctx->pc == 0x40717Cu) {
        ctx->pc = 0x40717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407178u;
        // 0x40717c: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407180u;
        goto label_407180;
    }
    ctx->pc = 0x407178u;
    {
        const bool branch_taken_0x407178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x407178) {
            ctx->pc = 0x40717Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x407178u;
            // 0x40717c: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x407194u;
            goto label_407194;
        }
    }
    ctx->pc = 0x407180u;
label_407180:
    // 0x407180: 0xc043d5e  jal         func_10F578
label_407184:
    if (ctx->pc == 0x407184u) {
        ctx->pc = 0x407184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407180u;
        // 0x407184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407188u;
        goto label_407188;
    }
    ctx->pc = 0x407180u;
    SET_GPR_U32(ctx, 31, 0x407188u);
    ctx->pc = 0x407184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407180u;
    // 0x407184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x407180u, 0x407188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407188u;
label_407188:
    // 0x407188: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x407188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40718c:
    // 0x40718c: 0x7c4300c0  sq          $v1, 0xC0($v0)
    ctx->pc = 0x40718cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 3));
label_407190:
    // 0x407190: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x407190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_407194:
    // 0x407194: 0xc0e858c  jal         func_3A1630
label_407198:
    if (ctx->pc == 0x407198u) {
        ctx->pc = 0x407198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407194u;
        // 0x407198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40719Cu;
        goto label_40719c;
    }
    ctx->pc = 0x407194u;
    SET_GPR_U32(ctx, 31, 0x40719Cu);
    ctx->pc = 0x407198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407194u;
    // 0x407198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x407194u, 0x40719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40719Cu;
label_40719c:
    // 0x40719c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40719cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4071a0:
    // 0x4071a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4071a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4071a4:
    // 0x4071a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4071a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4071a8:
    // 0x4071a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4071a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4071ac:
    // 0x4071ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4071acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4071b0:
    // 0x4071b0: 0x3e00008  jr          $ra
label_4071b4:
    if (ctx->pc == 0x4071B4u) {
        ctx->pc = 0x4071B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4071B0u;
        // 0x4071b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4071B8u;
        goto label_fallthrough_0x4071b0;
    }
    ctx->pc = 0x4071B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4071B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4071B0u;
        // 0x4071b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4071B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4071b0:
    ctx->pc = 0x4071B8u;
}
