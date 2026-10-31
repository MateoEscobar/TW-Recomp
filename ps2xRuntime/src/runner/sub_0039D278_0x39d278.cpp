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

// Function: sub_0039D278
// Address: 0x39d278 - 0x39d360
void sub_0039D278_0x39d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D278_0x39d278");
#endif

    switch (ctx->pc) {
        case 0x39d278u: goto label_39d278;
        case 0x39d27cu: goto label_39d27c;
        case 0x39d280u: goto label_39d280;
        case 0x39d284u: goto label_39d284;
        case 0x39d288u: goto label_39d288;
        case 0x39d28cu: goto label_39d28c;
        case 0x39d290u: goto label_39d290;
        case 0x39d294u: goto label_39d294;
        case 0x39d298u: goto label_39d298;
        case 0x39d29cu: goto label_39d29c;
        case 0x39d2a0u: goto label_39d2a0;
        case 0x39d2a4u: goto label_39d2a4;
        case 0x39d2a8u: goto label_39d2a8;
        case 0x39d2acu: goto label_39d2ac;
        case 0x39d2b0u: goto label_39d2b0;
        case 0x39d2b4u: goto label_39d2b4;
        case 0x39d2b8u: goto label_39d2b8;
        case 0x39d2bcu: goto label_39d2bc;
        case 0x39d2c0u: goto label_39d2c0;
        case 0x39d2c4u: goto label_39d2c4;
        case 0x39d2c8u: goto label_39d2c8;
        case 0x39d2ccu: goto label_39d2cc;
        case 0x39d2d0u: goto label_39d2d0;
        case 0x39d2d4u: goto label_39d2d4;
        case 0x39d2d8u: goto label_39d2d8;
        case 0x39d2dcu: goto label_39d2dc;
        case 0x39d2e0u: goto label_39d2e0;
        case 0x39d2e4u: goto label_39d2e4;
        case 0x39d2e8u: goto label_39d2e8;
        case 0x39d2ecu: goto label_39d2ec;
        case 0x39d2f0u: goto label_39d2f0;
        case 0x39d2f4u: goto label_39d2f4;
        case 0x39d2f8u: goto label_39d2f8;
        case 0x39d2fcu: goto label_39d2fc;
        case 0x39d300u: goto label_39d300;
        case 0x39d304u: goto label_39d304;
        case 0x39d308u: goto label_39d308;
        case 0x39d30cu: goto label_39d30c;
        case 0x39d310u: goto label_39d310;
        case 0x39d314u: goto label_39d314;
        case 0x39d318u: goto label_39d318;
        case 0x39d31cu: goto label_39d31c;
        case 0x39d320u: goto label_39d320;
        case 0x39d324u: goto label_39d324;
        case 0x39d328u: goto label_39d328;
        case 0x39d32cu: goto label_39d32c;
        case 0x39d330u: goto label_39d330;
        case 0x39d334u: goto label_39d334;
        case 0x39d338u: goto label_39d338;
        case 0x39d33cu: goto label_39d33c;
        case 0x39d340u: goto label_39d340;
        case 0x39d344u: goto label_39d344;
        case 0x39d348u: goto label_39d348;
        case 0x39d34cu: goto label_39d34c;
        case 0x39d350u: goto label_39d350;
        case 0x39d354u: goto label_39d354;
        case 0x39d358u: goto label_39d358;
        case 0x39d35cu: goto label_39d35c;
        default: break;
    }

    ctx->pc = 0x39d278u;

label_39d278:
    // 0x39d278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39d278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39d27c:
    // 0x39d27c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39d27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_39d280:
    // 0x39d280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39d280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39d284:
    // 0x39d284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d288:
    // 0x39d288: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39d288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39d28c:
    // 0x39d28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39d290:
    // 0x39d290: 0xc0e858c  jal         func_3A1630
label_39d294:
    if (ctx->pc == 0x39D294u) {
        ctx->pc = 0x39D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D290u;
        // 0x39d294: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D298u;
        goto label_39d298;
    }
    ctx->pc = 0x39D290u;
    SET_GPR_U32(ctx, 31, 0x39D298u);
    ctx->pc = 0x39D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D290u;
    // 0x39d294: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x39D290u, 0x39D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D298u;
label_39d298:
    // 0x39d298: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x39d298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d29c:
    // 0x39d29c: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x39d29cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_39d2a0:
    // 0x39d2a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_39d2a4:
    if (ctx->pc == 0x39D2A4u) {
        ctx->pc = 0x39D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2A0u;
        // 0x39d2a4: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D2A8u;
        goto label_39d2a8;
    }
    ctx->pc = 0x39D2A0u;
    {
        const bool branch_taken_0x39d2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2A0u;
        // 0x39d2a4: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d2a0) {
            ctx->pc = 0x39D2C0u;
            goto label_39d2c0;
        }
    }
    ctx->pc = 0x39D2A8u;
label_39d2a8:
    // 0x39d2a8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x39d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_39d2ac:
    // 0x39d2ac: 0x24a51560  addiu       $a1, $a1, 0x1560
    ctx->pc = 0x39d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5472));
label_39d2b0:
    // 0x39d2b0: 0xc13c4da  jal         func_4F1368
label_39d2b4:
    if (ctx->pc == 0x39D2B4u) {
        ctx->pc = 0x39D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2B0u;
        // 0x39d2b4: 0x24060164  addiu       $a2, $zero, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D2B8u;
        goto label_39d2b8;
    }
    ctx->pc = 0x39D2B0u;
    SET_GPR_U32(ctx, 31, 0x39D2B8u);
    ctx->pc = 0x39D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D2B0u;
    // 0x39d2b4: 0x24060164  addiu       $a2, $zero, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1368u, 0x39D2B0u, 0x39D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D2B8u;
label_39d2b8:
    // 0x39d2b8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x39d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_39d2bc:
    // 0x39d2bc: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x39d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d2c0:
    // 0x39d2c0: 0x90430021  lbu         $v1, 0x21($v0)
    ctx->pc = 0x39d2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
label_39d2c4:
    // 0x39d2c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_39d2c8:
    if (ctx->pc == 0x39D2C8u) {
        ctx->pc = 0x39D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2C4u;
        // 0x39d2c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D2CCu;
        goto label_39d2cc;
    }
    ctx->pc = 0x39D2C4u;
    {
        const bool branch_taken_0x39d2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2C4u;
        // 0x39d2c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d2c4) {
            ctx->pc = 0x39D2F8u;
            goto label_39d2f8;
        }
    }
    ctx->pc = 0x39D2CCu;
label_39d2cc:
    // 0x39d2cc: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x39d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_39d2d0:
    // 0x39d2d0: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x39d2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_39d2d4:
    // 0x39d2d4: 0x24c61560  addiu       $a2, $a2, 0x1560
    ctx->pc = 0x39d2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5472));
label_39d2d8:
    // 0x39d2d8: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x39d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_39d2dc:
    // 0x39d2dc: 0x2407016a  addiu       $a3, $zero, 0x16A
    ctx->pc = 0x39d2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
label_39d2e0:
    // 0x39d2e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x39d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39d2e4:
    // 0x39d2e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x39d2e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_39d2e8:
    // 0x39d2e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x39d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_39d2ec:
    // 0x39d2ec: 0x60f809  jalr        $v1
label_39d2f0:
    if (ctx->pc == 0x39D2F0u) {
        ctx->pc = 0x39D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2ECu;
        // 0x39d2f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D2F4u;
        goto label_39d2f4;
    }
    ctx->pc = 0x39D2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D2F4u);
        ctx->pc = 0x39D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2ECu;
        // 0x39d2f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D2ECu, 0x39D2F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D2F4u;
label_39d2f4:
    // 0x39d2f4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x39d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_39d2f8:
    // 0x39d2f8: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x39d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d2fc:
    // 0x39d2fc: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x39d2fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_39d300:
    // 0x39d300: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_39d304:
    if (ctx->pc == 0x39D304u) {
        ctx->pc = 0x39D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D300u;
        // 0x39d304: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D308u;
        goto label_39d308;
    }
    ctx->pc = 0x39D300u;
    {
        const bool branch_taken_0x39d300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D300u;
        // 0x39d304: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d300) {
            ctx->pc = 0x39D334u;
            goto label_39d334;
        }
    }
    ctx->pc = 0x39D308u;
label_39d308:
    // 0x39d308: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x39d308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_39d30c:
    // 0x39d30c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x39d30cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_39d310:
    // 0x39d310: 0x24c61560  addiu       $a2, $a2, 0x1560
    ctx->pc = 0x39d310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5472));
label_39d314:
    // 0x39d314: 0x8e050078  lw          $a1, 0x78($s0)
    ctx->pc = 0x39d314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_39d318:
    // 0x39d318: 0x24070170  addiu       $a3, $zero, 0x170
    ctx->pc = 0x39d318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_39d31c:
    // 0x39d31c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x39d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39d320:
    // 0x39d320: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x39d320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_39d324:
    // 0x39d324: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x39d324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_39d328:
    // 0x39d328: 0x60f809  jalr        $v1
label_39d32c:
    if (ctx->pc == 0x39D32Cu) {
        ctx->pc = 0x39D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D328u;
        // 0x39d32c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D330u;
        goto label_39d330;
    }
    ctx->pc = 0x39D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D330u);
        ctx->pc = 0x39D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D328u;
        // 0x39d32c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D328u, 0x39D330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D330u;
label_39d330:
    // 0x39d330: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x39d330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_39d334:
    // 0x39d334: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_39d338:
    if (ctx->pc == 0x39D338u) {
        ctx->pc = 0x39D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D334u;
        // 0x39d338: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D33Cu;
        goto label_39d33c;
    }
    ctx->pc = 0x39D334u;
    {
        const bool branch_taken_0x39d334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D334u;
        // 0x39d338: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d334) {
            ctx->pc = 0x39D34Cu;
            goto label_39d34c;
        }
    }
    ctx->pc = 0x39D33Cu;
label_39d33c:
    // 0x39d33c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39d33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d340:
    // 0x39d340: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x39d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_39d344:
    // 0x39d344: 0xc0e853a  jal         func_3A14E8
label_39d348:
    if (ctx->pc == 0x39D348u) {
        ctx->pc = 0x39D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D344u;
        // 0x39d348: 0x8c440850  lw          $a0, 0x850($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D34Cu;
        goto label_39d34c;
    }
    ctx->pc = 0x39D344u;
    SET_GPR_U32(ctx, 31, 0x39D34Cu);
    ctx->pc = 0x39D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D344u;
    // 0x39d348: 0x8c440850  lw          $a0, 0x850($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A14E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A14E8u, 0x39D344u, 0x39D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D34Cu;
label_39d34c:
    // 0x39d34c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39d34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d350:
    // 0x39d350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39d350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d354:
    // 0x39d354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39d354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39d358:
    // 0x39d358: 0x3e00008  jr          $ra
label_39d35c:
    if (ctx->pc == 0x39D35Cu) {
        ctx->pc = 0x39D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D358u;
        // 0x39d35c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D360u;
        goto label_fallthrough_0x39d358;
    }
    ctx->pc = 0x39D358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D358u;
        // 0x39d35c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39d358:
    ctx->pc = 0x39D360u;
}
