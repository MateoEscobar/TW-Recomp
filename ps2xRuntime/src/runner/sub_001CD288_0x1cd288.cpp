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

// Function: sub_001CD288
// Address: 0x1cd288 - 0x1cd3c8
void sub_001CD288_0x1cd288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD288_0x1cd288");
#endif

    switch (ctx->pc) {
        case 0x1cd288u: goto label_1cd288;
        case 0x1cd28cu: goto label_1cd28c;
        case 0x1cd290u: goto label_1cd290;
        case 0x1cd294u: goto label_1cd294;
        case 0x1cd298u: goto label_1cd298;
        case 0x1cd29cu: goto label_1cd29c;
        case 0x1cd2a0u: goto label_1cd2a0;
        case 0x1cd2a4u: goto label_1cd2a4;
        case 0x1cd2a8u: goto label_1cd2a8;
        case 0x1cd2acu: goto label_1cd2ac;
        case 0x1cd2b0u: goto label_1cd2b0;
        case 0x1cd2b4u: goto label_1cd2b4;
        case 0x1cd2b8u: goto label_1cd2b8;
        case 0x1cd2bcu: goto label_1cd2bc;
        case 0x1cd2c0u: goto label_1cd2c0;
        case 0x1cd2c4u: goto label_1cd2c4;
        case 0x1cd2c8u: goto label_1cd2c8;
        case 0x1cd2ccu: goto label_1cd2cc;
        case 0x1cd2d0u: goto label_1cd2d0;
        case 0x1cd2d4u: goto label_1cd2d4;
        case 0x1cd2d8u: goto label_1cd2d8;
        case 0x1cd2dcu: goto label_1cd2dc;
        case 0x1cd2e0u: goto label_1cd2e0;
        case 0x1cd2e4u: goto label_1cd2e4;
        case 0x1cd2e8u: goto label_1cd2e8;
        case 0x1cd2ecu: goto label_1cd2ec;
        case 0x1cd2f0u: goto label_1cd2f0;
        case 0x1cd2f4u: goto label_1cd2f4;
        case 0x1cd2f8u: goto label_1cd2f8;
        case 0x1cd2fcu: goto label_1cd2fc;
        case 0x1cd300u: goto label_1cd300;
        case 0x1cd304u: goto label_1cd304;
        case 0x1cd308u: goto label_1cd308;
        case 0x1cd30cu: goto label_1cd30c;
        case 0x1cd310u: goto label_1cd310;
        case 0x1cd314u: goto label_1cd314;
        case 0x1cd318u: goto label_1cd318;
        case 0x1cd31cu: goto label_1cd31c;
        case 0x1cd320u: goto label_1cd320;
        case 0x1cd324u: goto label_1cd324;
        case 0x1cd328u: goto label_1cd328;
        case 0x1cd32cu: goto label_1cd32c;
        case 0x1cd330u: goto label_1cd330;
        case 0x1cd334u: goto label_1cd334;
        case 0x1cd338u: goto label_1cd338;
        case 0x1cd33cu: goto label_1cd33c;
        case 0x1cd340u: goto label_1cd340;
        case 0x1cd344u: goto label_1cd344;
        case 0x1cd348u: goto label_1cd348;
        case 0x1cd34cu: goto label_1cd34c;
        case 0x1cd350u: goto label_1cd350;
        case 0x1cd354u: goto label_1cd354;
        case 0x1cd358u: goto label_1cd358;
        case 0x1cd35cu: goto label_1cd35c;
        case 0x1cd360u: goto label_1cd360;
        case 0x1cd364u: goto label_1cd364;
        case 0x1cd368u: goto label_1cd368;
        case 0x1cd36cu: goto label_1cd36c;
        case 0x1cd370u: goto label_1cd370;
        case 0x1cd374u: goto label_1cd374;
        case 0x1cd378u: goto label_1cd378;
        case 0x1cd37cu: goto label_1cd37c;
        case 0x1cd380u: goto label_1cd380;
        case 0x1cd384u: goto label_1cd384;
        case 0x1cd388u: goto label_1cd388;
        case 0x1cd38cu: goto label_1cd38c;
        case 0x1cd390u: goto label_1cd390;
        case 0x1cd394u: goto label_1cd394;
        case 0x1cd398u: goto label_1cd398;
        case 0x1cd39cu: goto label_1cd39c;
        case 0x1cd3a0u: goto label_1cd3a0;
        case 0x1cd3a4u: goto label_1cd3a4;
        case 0x1cd3a8u: goto label_1cd3a8;
        case 0x1cd3acu: goto label_1cd3ac;
        case 0x1cd3b0u: goto label_1cd3b0;
        case 0x1cd3b4u: goto label_1cd3b4;
        case 0x1cd3b8u: goto label_1cd3b8;
        case 0x1cd3bcu: goto label_1cd3bc;
        case 0x1cd3c0u: goto label_1cd3c0;
        case 0x1cd3c4u: goto label_1cd3c4;
        default: break;
    }

    ctx->pc = 0x1cd288u;

label_1cd288:
    // 0x1cd288: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cd288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cd28c:
    // 0x1cd28c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1cd28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1cd290:
    // 0x1cd290: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1cd290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1cd294:
    // 0x1cd294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd298:
    // 0x1cd298: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cd298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1cd29c:
    // 0x1cd29c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cd29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cd2a0:
    // 0x1cd2a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cd2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd2a4:
    // 0x1cd2a4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1cd2a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1cd2a8:
    // 0x1cd2a8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1cd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1cd2ac:
    // 0x1cd2ac: 0x40f809  jalr        $v0
label_1cd2b0:
    if (ctx->pc == 0x1CD2B0u) {
        ctx->pc = 0x1CD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2ACu;
        // 0x1cd2b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2B4u;
        goto label_1cd2b4;
    }
    ctx->pc = 0x1CD2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD2B4u);
        ctx->pc = 0x1CD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2ACu;
        // 0x1cd2b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD2ACu, 0x1CD2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD2B4u;
label_1cd2b4:
    // 0x1cd2b4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1cd2b8:
    if (ctx->pc == 0x1CD2B8u) {
        ctx->pc = 0x1CD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B4u;
        // 0x1cd2b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2BCu;
        goto label_1cd2bc;
    }
    ctx->pc = 0x1CD2B4u;
    {
        const bool branch_taken_0x1cd2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B4u;
        // 0x1cd2b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2b4) {
            ctx->pc = 0x1CD3B0u;
            goto label_1cd3b0;
        }
    }
    ctx->pc = 0x1CD2BCu;
label_1cd2bc:
    // 0x1cd2bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cd2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd2c0:
    // 0x1cd2c0: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1cd2c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1cd2c4:
    // 0x1cd2c4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1cd2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1cd2c8:
    // 0x1cd2c8: 0x40f809  jalr        $v0
label_1cd2cc:
    if (ctx->pc == 0x1CD2CCu) {
        ctx->pc = 0x1CD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2C8u;
        // 0x1cd2cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2D0u;
        goto label_1cd2d0;
    }
    ctx->pc = 0x1CD2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD2D0u);
        ctx->pc = 0x1CD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2C8u;
        // 0x1cd2cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD2C8u, 0x1CD2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD2D0u;
label_1cd2d0:
    // 0x1cd2d0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1cd2d4:
    if (ctx->pc == 0x1CD2D4u) {
        ctx->pc = 0x1CD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2D0u;
        // 0x1cd2d4: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2D8u;
        goto label_1cd2d8;
    }
    ctx->pc = 0x1CD2D0u;
    {
        const bool branch_taken_0x1cd2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2D0u;
        // 0x1cd2d4: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2d0) {
            ctx->pc = 0x1CD3ACu;
            goto label_1cd3ac;
        }
    }
    ctx->pc = 0x1CD2D8u;
label_1cd2d8:
    // 0x1cd2d8: 0xc10c3ac  jal         func_430EB0
label_1cd2dc:
    if (ctx->pc == 0x1CD2DCu) {
        ctx->pc = 0x1CD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2D8u;
        // 0x1cd2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2E0u;
        goto label_1cd2e0;
    }
    ctx->pc = 0x1CD2D8u;
    SET_GPR_U32(ctx, 31, 0x1CD2E0u);
    ctx->pc = 0x1CD2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2D8u;
    // 0x1cd2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CD2D8u, 0x1CD2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2E0u;
label_1cd2e0:
    // 0x1cd2e0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1cd2e4:
    if (ctx->pc == 0x1CD2E4u) {
        ctx->pc = 0x1CD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2E0u;
        // 0x1cd2e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2E8u;
        goto label_1cd2e8;
    }
    ctx->pc = 0x1CD2E0u;
    {
        const bool branch_taken_0x1cd2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2E0u;
        // 0x1cd2e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2e0) {
            ctx->pc = 0x1CD3B0u;
            goto label_1cd3b0;
        }
    }
    ctx->pc = 0x1CD2E8u;
label_1cd2e8:
    // 0x1cd2e8: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1cd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1cd2ec:
    // 0x1cd2ec: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1cd2f0:
    if (ctx->pc == 0x1CD2F0u) {
        ctx->pc = 0x1CD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2ECu;
        // 0x1cd2f0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2F4u;
        goto label_1cd2f4;
    }
    ctx->pc = 0x1CD2ECu;
    {
        const bool branch_taken_0x1cd2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2ECu;
        // 0x1cd2f0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2ec) {
            ctx->pc = 0x1CD348u;
            goto label_1cd348;
        }
    }
    ctx->pc = 0x1CD2F4u;
label_1cd2f4:
    // 0x1cd2f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd2f8:
    // 0x1cd2f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1cd2f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1cd2fc:
    // 0x1cd2fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1cd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1cd300:
    // 0x1cd300: 0x40f809  jalr        $v0
label_1cd304:
    if (ctx->pc == 0x1CD304u) {
        ctx->pc = 0x1CD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD300u;
        // 0x1cd304: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD308u;
        goto label_1cd308;
    }
    ctx->pc = 0x1CD300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD308u);
        ctx->pc = 0x1CD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD300u;
        // 0x1cd304: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD300u, 0x1CD308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD308u;
label_1cd308:
    // 0x1cd308: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1cd308u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1cd30c:
    // 0x1cd30c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x1cd30cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_1cd310:
    // 0x1cd310: 0x922a00c4  lbu         $t2, 0xC4($s1)
    ctx->pc = 0x1cd310u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
label_1cd314:
    // 0x1cd314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd318:
    // 0x1cd318: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x1cd318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cd31c:
    // 0x1cd31c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cd320:
    // 0x1cd320: 0xc62d0068  lwc1        $f13, 0x68($s1)
    ctx->pc = 0x1cd320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cd324:
    // 0x1cd324: 0x26260078  addiu       $a2, $s1, 0x78
    ctx->pc = 0x1cd324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1cd328:
    // 0x1cd328: 0x8e270070  lw          $a3, 0x70($s1)
    ctx->pc = 0x1cd328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1cd32c:
    // 0x1cd32c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1cd32cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_1cd330:
    // 0x1cd330: 0x8e2800a0  lw          $t0, 0xA0($s1)
    ctx->pc = 0x1cd330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1cd334:
    // 0x1cd334: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x1cd334u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_1cd338:
    // 0x1cd338: 0xc05e70c  jal         func_179C30
label_1cd33c:
    if (ctx->pc == 0x1CD33Cu) {
        ctx->pc = 0x1CD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD338u;
        // 0x1cd33c: 0xc62e00c0  lwc1        $f14, 0xC0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD340u;
        goto label_1cd340;
    }
    ctx->pc = 0x1CD338u;
    SET_GPR_U32(ctx, 31, 0x1CD340u);
    ctx->pc = 0x1CD33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD338u;
    // 0x1cd33c: 0xc62e00c0  lwc1        $f14, 0xC0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C30u, 0x1CD338u, 0x1CD340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD340u;
label_1cd340:
    // 0x1cd340: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1cd344:
    if (ctx->pc == 0x1CD344u) {
        ctx->pc = 0x1CD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD340u;
        // 0x1cd344: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD348u;
        goto label_1cd348;
    }
    ctx->pc = 0x1CD340u;
    {
        const bool branch_taken_0x1cd340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD340u;
        // 0x1cd344: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd340) {
            ctx->pc = 0x1CD3B0u;
            goto label_1cd3b0;
        }
    }
    ctx->pc = 0x1CD348u;
label_1cd348:
    // 0x1cd348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cd34c:
    // 0x1cd34c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd350:
    // 0x1cd350: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cd350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1cd354:
    // 0x1cd354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd358:
    // 0x1cd358: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1cd358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1cd35c:
    // 0x1cd35c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cd35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cd360:
    // 0x1cd360: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cd360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1cd364:
    // 0x1cd364: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cd364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd368:
    // 0x1cd368: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1cd368u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1cd36c:
    // 0x1cd36c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1cd370:
    // 0x1cd370: 0xc0f809  jalr        $a2
label_1cd374:
    if (ctx->pc == 0x1CD374u) {
        ctx->pc = 0x1CD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD370u;
        // 0x1cd374: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD378u;
        goto label_1cd378;
    }
    ctx->pc = 0x1CD370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CD378u);
        ctx->pc = 0x1CD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD370u;
        // 0x1cd374: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD370u, 0x1CD378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD378u;
label_1cd378:
    // 0x1cd378: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cd378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd37c:
    // 0x1cd37c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1cd380:
    // 0x1cd380: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1cd380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1cd384:
    // 0x1cd384: 0x40f809  jalr        $v0
label_1cd388:
    if (ctx->pc == 0x1CD388u) {
        ctx->pc = 0x1CD388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD384u;
        // 0x1cd388: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD38Cu;
        goto label_1cd38c;
    }
    ctx->pc = 0x1CD384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD38Cu);
        ctx->pc = 0x1CD388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD384u;
        // 0x1cd388: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD384u, 0x1CD38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD38Cu;
label_1cd38c:
    // 0x1cd38c: 0xc62c0078  lwc1        $f12, 0x78($s1)
    ctx->pc = 0x1cd38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cd390:
    // 0x1cd390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd394:
    // 0x1cd394: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cd394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd398:
    // 0x1cd398: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1cd398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cd39c:
    // 0x1cd39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3a0:
    // 0x1cd3a0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1cd3a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3a4:
    // 0x1cd3a4: 0xc05e86c  jal         func_17A1B0
label_1cd3a8:
    if (ctx->pc == 0x1CD3A8u) {
        ctx->pc = 0x1CD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3A4u;
        // 0x1cd3a8: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD3ACu;
        goto label_1cd3ac;
    }
    ctx->pc = 0x1CD3A4u;
    SET_GPR_U32(ctx, 31, 0x1CD3ACu);
    ctx->pc = 0x1CD3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3A4u;
    // 0x1cd3a8: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A1B0u, 0x1CD3A4u, 0x1CD3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3ACu;
label_1cd3ac:
    // 0x1cd3ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1cd3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cd3b0:
    // 0x1cd3b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1cd3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cd3b4:
    // 0x1cd3b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cd3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd3b8:
    // 0x1cd3b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cd3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd3bc:
    // 0x1cd3bc: 0x3e00008  jr          $ra
label_1cd3c0:
    if (ctx->pc == 0x1CD3C0u) {
        ctx->pc = 0x1CD3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3BCu;
        // 0x1cd3c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD3C4u;
        goto label_1cd3c4;
    }
    ctx->pc = 0x1CD3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3BCu;
        // 0x1cd3c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD3C4u;
label_1cd3c4:
    // 0x1cd3c4: 0x0  nop
    ctx->pc = 0x1cd3c4u;
    // NOP
    ctx->pc = 0x1cd3c8u;
}
