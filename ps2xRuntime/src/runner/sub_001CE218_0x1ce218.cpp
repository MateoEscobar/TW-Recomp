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

// Function: sub_001CE218
// Address: 0x1ce218 - 0x1ce3c0
void sub_001CE218_0x1ce218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE218_0x1ce218");
#endif

    switch (ctx->pc) {
        case 0x1ce218u: goto label_1ce218;
        case 0x1ce21cu: goto label_1ce21c;
        case 0x1ce220u: goto label_1ce220;
        case 0x1ce224u: goto label_1ce224;
        case 0x1ce228u: goto label_1ce228;
        case 0x1ce22cu: goto label_1ce22c;
        case 0x1ce230u: goto label_1ce230;
        case 0x1ce234u: goto label_1ce234;
        case 0x1ce238u: goto label_1ce238;
        case 0x1ce23cu: goto label_1ce23c;
        case 0x1ce240u: goto label_1ce240;
        case 0x1ce244u: goto label_1ce244;
        case 0x1ce248u: goto label_1ce248;
        case 0x1ce24cu: goto label_1ce24c;
        case 0x1ce250u: goto label_1ce250;
        case 0x1ce254u: goto label_1ce254;
        case 0x1ce258u: goto label_1ce258;
        case 0x1ce25cu: goto label_1ce25c;
        case 0x1ce260u: goto label_1ce260;
        case 0x1ce264u: goto label_1ce264;
        case 0x1ce268u: goto label_1ce268;
        case 0x1ce26cu: goto label_1ce26c;
        case 0x1ce270u: goto label_1ce270;
        case 0x1ce274u: goto label_1ce274;
        case 0x1ce278u: goto label_1ce278;
        case 0x1ce27cu: goto label_1ce27c;
        case 0x1ce280u: goto label_1ce280;
        case 0x1ce284u: goto label_1ce284;
        case 0x1ce288u: goto label_1ce288;
        case 0x1ce28cu: goto label_1ce28c;
        case 0x1ce290u: goto label_1ce290;
        case 0x1ce294u: goto label_1ce294;
        case 0x1ce298u: goto label_1ce298;
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce2a0u: goto label_1ce2a0;
        case 0x1ce2a4u: goto label_1ce2a4;
        case 0x1ce2a8u: goto label_1ce2a8;
        case 0x1ce2acu: goto label_1ce2ac;
        case 0x1ce2b0u: goto label_1ce2b0;
        case 0x1ce2b4u: goto label_1ce2b4;
        case 0x1ce2b8u: goto label_1ce2b8;
        case 0x1ce2bcu: goto label_1ce2bc;
        case 0x1ce2c0u: goto label_1ce2c0;
        case 0x1ce2c4u: goto label_1ce2c4;
        case 0x1ce2c8u: goto label_1ce2c8;
        case 0x1ce2ccu: goto label_1ce2cc;
        case 0x1ce2d0u: goto label_1ce2d0;
        case 0x1ce2d4u: goto label_1ce2d4;
        case 0x1ce2d8u: goto label_1ce2d8;
        case 0x1ce2dcu: goto label_1ce2dc;
        case 0x1ce2e0u: goto label_1ce2e0;
        case 0x1ce2e4u: goto label_1ce2e4;
        case 0x1ce2e8u: goto label_1ce2e8;
        case 0x1ce2ecu: goto label_1ce2ec;
        case 0x1ce2f0u: goto label_1ce2f0;
        case 0x1ce2f4u: goto label_1ce2f4;
        case 0x1ce2f8u: goto label_1ce2f8;
        case 0x1ce2fcu: goto label_1ce2fc;
        case 0x1ce300u: goto label_1ce300;
        case 0x1ce304u: goto label_1ce304;
        case 0x1ce308u: goto label_1ce308;
        case 0x1ce30cu: goto label_1ce30c;
        case 0x1ce310u: goto label_1ce310;
        case 0x1ce314u: goto label_1ce314;
        case 0x1ce318u: goto label_1ce318;
        case 0x1ce31cu: goto label_1ce31c;
        case 0x1ce320u: goto label_1ce320;
        case 0x1ce324u: goto label_1ce324;
        case 0x1ce328u: goto label_1ce328;
        case 0x1ce32cu: goto label_1ce32c;
        case 0x1ce330u: goto label_1ce330;
        case 0x1ce334u: goto label_1ce334;
        case 0x1ce338u: goto label_1ce338;
        case 0x1ce33cu: goto label_1ce33c;
        case 0x1ce340u: goto label_1ce340;
        case 0x1ce344u: goto label_1ce344;
        case 0x1ce348u: goto label_1ce348;
        case 0x1ce34cu: goto label_1ce34c;
        case 0x1ce350u: goto label_1ce350;
        case 0x1ce354u: goto label_1ce354;
        case 0x1ce358u: goto label_1ce358;
        case 0x1ce35cu: goto label_1ce35c;
        case 0x1ce360u: goto label_1ce360;
        case 0x1ce364u: goto label_1ce364;
        case 0x1ce368u: goto label_1ce368;
        case 0x1ce36cu: goto label_1ce36c;
        case 0x1ce370u: goto label_1ce370;
        case 0x1ce374u: goto label_1ce374;
        case 0x1ce378u: goto label_1ce378;
        case 0x1ce37cu: goto label_1ce37c;
        case 0x1ce380u: goto label_1ce380;
        case 0x1ce384u: goto label_1ce384;
        case 0x1ce388u: goto label_1ce388;
        case 0x1ce38cu: goto label_1ce38c;
        case 0x1ce390u: goto label_1ce390;
        case 0x1ce394u: goto label_1ce394;
        case 0x1ce398u: goto label_1ce398;
        case 0x1ce39cu: goto label_1ce39c;
        case 0x1ce3a0u: goto label_1ce3a0;
        case 0x1ce3a4u: goto label_1ce3a4;
        case 0x1ce3a8u: goto label_1ce3a8;
        case 0x1ce3acu: goto label_1ce3ac;
        case 0x1ce3b0u: goto label_1ce3b0;
        case 0x1ce3b4u: goto label_1ce3b4;
        case 0x1ce3b8u: goto label_1ce3b8;
        case 0x1ce3bcu: goto label_1ce3bc;
        default: break;
    }

    ctx->pc = 0x1ce218u;

label_1ce218:
    // 0x1ce218: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ce218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1ce21c:
    // 0x1ce21c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ce21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1ce220:
    // 0x1ce220: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ce220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1ce224:
    // 0x1ce224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce228:
    // 0x1ce228: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ce228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ce22c:
    // 0x1ce22c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ce22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce230:
    // 0x1ce230: 0x8e030290  lw          $v1, 0x290($s0)
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1ce234:
    // 0x1ce234: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce238:
    // 0x1ce238: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ce238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce23c:
    // 0x1ce23c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ce23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1ce240:
    // 0x1ce240: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce244:
    // 0x1ce244: 0x10820032  beq         $a0, $v0, . + 4 + (0x32 << 2)
label_1ce248:
    if (ctx->pc == 0x1CE248u) {
        ctx->pc = 0x1CE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE244u;
        // 0x1ce248: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE24Cu;
        goto label_1ce24c;
    }
    ctx->pc = 0x1CE244u;
    {
        const bool branch_taken_0x1ce244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE244u;
        // 0x1ce248: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce244) {
            ctx->pc = 0x1CE310u;
            goto label_1ce310;
        }
    }
    ctx->pc = 0x1CE24Cu;
label_1ce24c:
    // 0x1ce24c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1ce24cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_1ce250:
    // 0x1ce250: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ce254:
    // 0x1ce254: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ce254u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ce258:
    // 0x1ce258: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1ce258u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1ce25c:
    // 0x1ce25c: 0x0  nop
    ctx->pc = 0x1ce25cu;
    // NOP
label_1ce260:
    // 0x1ce260: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ce260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce264:
    // 0x1ce264: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x1ce264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_1ce268:
    // 0x1ce268: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ce268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ce26c:
    // 0x1ce26c: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x1ce26cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce270:
    // 0x1ce270: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ce270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ce274:
    // 0x1ce274: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1ce278:
    if (ctx->pc == 0x1CE278u) {
        ctx->pc = 0x1CE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE274u;
        // 0x1ce278: 0x24090042  addiu       $t1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE27Cu;
        goto label_1ce27c;
    }
    ctx->pc = 0x1CE274u;
    {
        const bool branch_taken_0x1ce274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE274u;
        // 0x1ce278: 0x24090042  addiu       $t1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce274) {
            ctx->pc = 0x1CE2F0u;
            goto label_1ce2f0;
        }
    }
    ctx->pc = 0x1CE27Cu;
label_1ce27c:
    // 0x1ce27c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1ce27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_1ce280:
    // 0x1ce280: 0x24a55990  addiu       $a1, $a1, 0x5990
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
label_1ce284:
    // 0x1ce284: 0x8cecb9c0  lw          $t4, -0x4640($a3)
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294949312)));
label_1ce288:
    // 0x1ce288: 0x25085998  addiu       $t0, $t0, 0x5998
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22936));
label_1ce28c:
    // 0x1ce28c: 0x254a59c0  addiu       $t2, $t2, 0x59C0
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 22976));
label_1ce290:
    // 0x1ce290: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1ce290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ce294:
    // 0x1ce294: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ce294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ce298:
    // 0x1ce298: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ce298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ce29c:
    // 0x1ce29c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ce29cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce2a0:
    // 0x1ce2a0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ce2a4:
    // 0x1ce2a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ce2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ce2a8:
    // 0x1ce2a8: 0x40f809  jalr        $v0
label_1ce2ac:
    if (ctx->pc == 0x1CE2ACu) {
        ctx->pc = 0x1CE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2A8u;
        // 0x1ce2ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE2B0u;
        goto label_1ce2b0;
    }
    ctx->pc = 0x1CE2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE2B0u);
        ctx->pc = 0x1CE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2A8u;
        // 0x1ce2ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE2A8u, 0x1CE2B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE2B0u;
label_1ce2b0:
    // 0x1ce2b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce2b4:
    // 0x1ce2b4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1ce2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1ce2b8:
    // 0x1ce2b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1ce2bc:
    if (ctx->pc == 0x1CE2BCu) {
        ctx->pc = 0x1CE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2B8u;
        // 0x1ce2bc: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE2C0u;
        goto label_1ce2c0;
    }
    ctx->pc = 0x1CE2B8u;
    {
        const bool branch_taken_0x1ce2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce2b8) {
            ctx->pc = 0x1CE2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE2B8u;
            // 0x1ce2bc: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE2C0u;
            goto label_1ce2c0;
        }
    }
    ctx->pc = 0x1CE2C0u;
label_1ce2c0:
    // 0x1ce2c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce2c4:
    // 0x1ce2c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ce2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ce2c8:
    // 0x1ce2c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce2cc:
    // 0x1ce2cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce2d0:
    // 0x1ce2d0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ce2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ce2d4:
    // 0x1ce2d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce2d8:
    // 0x1ce2d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce2dc:
    // 0x1ce2dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ce2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1ce2e0:
    // 0x1ce2e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce2e4:
    // 0x1ce2e4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1ce2e8:
    // 0x1ce2e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ce2ec:
    if (ctx->pc == 0x1CE2ECu) {
        ctx->pc = 0x1CE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2E8u;
        // 0x1ce2ec: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE2F0u;
        goto label_1ce2f0;
    }
    ctx->pc = 0x1CE2E8u;
    {
        const bool branch_taken_0x1ce2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2E8u;
        // 0x1ce2ec: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2e8) {
            ctx->pc = 0x1CE310u;
            goto label_1ce310;
        }
    }
    ctx->pc = 0x1CE2F0u;
label_1ce2f0:
    // 0x1ce2f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ce2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_1ce2f4:
    // 0x1ce2f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ce2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ce2f8:
    // 0x1ce2f8: 0x8e040290  lw          $a0, 0x290($s0)
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1ce2fc:
    // 0x1ce2fc: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1ce2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_1ce300:
    // 0x1ce300: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ce300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1ce304:
    // 0x1ce304: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ce308:
    // 0x1ce308: 0x1462ffd5  bne         $v1, $v0, . + 4 + (-0x2B << 2)
label_1ce30c:
    if (ctx->pc == 0x1CE30Cu) {
        ctx->pc = 0x1CE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE308u;
        // 0x1ce30c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE310u;
        goto label_1ce310;
    }
    ctx->pc = 0x1CE308u;
    {
        const bool branch_taken_0x1ce308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE308u;
        // 0x1ce30c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce308) {
            ctx->pc = 0x1CE260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce260;
        }
    }
    ctx->pc = 0x1CE310u;
label_1ce310:
    // 0x1ce310: 0x8e040290  lw          $a0, 0x290($s0)
    ctx->pc = 0x1ce310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1ce314:
    // 0x1ce314: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ce314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce318:
    // 0x1ce318: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ce31c:
    // 0x1ce31c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_1ce320:
    if (ctx->pc == 0x1CE320u) {
        ctx->pc = 0x1CE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE31Cu;
        // 0x1ce320: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE324u;
        goto label_1ce324;
    }
    ctx->pc = 0x1CE31Cu;
    {
        const bool branch_taken_0x1ce31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE31Cu;
        // 0x1ce320: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce31c) {
            ctx->pc = 0x1CE3ACu;
            goto label_1ce3ac;
        }
    }
    ctx->pc = 0x1CE324u;
label_1ce324:
    // 0x1ce324: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ce324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ce328:
    // 0x1ce328: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ce328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ce32c:
    // 0x1ce32c: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1ce330:
    // 0x1ce330: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ce330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ce334:
    // 0x1ce334: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1ce334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1ce338:
    // 0x1ce338: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ce33c:
    // 0x1ce33c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1ce33cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1ce340:
    // 0x1ce340: 0x24a55990  addiu       $a1, $a1, 0x5990
    ctx->pc = 0x1ce340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
label_1ce344:
    // 0x1ce344: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1ce344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1ce348:
    // 0x1ce348: 0x25085998  addiu       $t0, $t0, 0x5998
    ctx->pc = 0x1ce348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22936));
label_1ce34c:
    // 0x1ce34c: 0x254a59c0  addiu       $t2, $t2, 0x59C0
    ctx->pc = 0x1ce34cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 22976));
label_1ce350:
    // 0x1ce350: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ce354:
    // 0x1ce354: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ce358:
    // 0x1ce358: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ce358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ce35c:
    // 0x1ce35c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ce35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ce360:
    // 0x1ce360: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1ce360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1ce364:
    // 0x1ce364: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1ce364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1ce368:
    // 0x1ce368: 0x40f809  jalr        $v0
label_1ce36c:
    if (ctx->pc == 0x1CE36Cu) {
        ctx->pc = 0x1CE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE368u;
        // 0x1ce36c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE370u;
        goto label_1ce370;
    }
    ctx->pc = 0x1CE368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE370u);
        ctx->pc = 0x1CE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE368u;
        // 0x1ce36c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE368u, 0x1CE370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE370u;
label_1ce370:
    // 0x1ce370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce374:
    // 0x1ce374: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1ce378:
    // 0x1ce378: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1ce37c:
    if (ctx->pc == 0x1CE37Cu) {
        ctx->pc = 0x1CE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE378u;
        // 0x1ce37c: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE380u;
        goto label_1ce380;
    }
    ctx->pc = 0x1CE378u;
    {
        const bool branch_taken_0x1ce378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce378) {
            ctx->pc = 0x1CE37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE378u;
            // 0x1ce37c: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE380u;
            goto label_1ce380;
        }
    }
    ctx->pc = 0x1CE380u;
label_1ce380:
    // 0x1ce380: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce384:
    // 0x1ce384: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ce384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ce388:
    // 0x1ce388: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ce388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce38c:
    // 0x1ce38c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce390:
    // 0x1ce390: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ce390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ce394:
    // 0x1ce394: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ce394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce398:
    // 0x1ce398: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce39c:
    // 0x1ce39c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ce39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1ce3a0:
    // 0x1ce3a0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ce3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce3a4:
    // 0x1ce3a4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1ce3a8:
    // 0x1ce3a8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1ce3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1ce3ac:
    // 0x1ce3ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ce3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ce3b0:
    // 0x1ce3b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ce3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ce3b4:
    // 0x1ce3b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ce3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ce3b8:
    // 0x1ce3b8: 0x3e00008  jr          $ra
label_1ce3bc:
    if (ctx->pc == 0x1CE3BCu) {
        ctx->pc = 0x1CE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3B8u;
        // 0x1ce3bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3C0u;
        goto label_fallthrough_0x1ce3b8;
    }
    ctx->pc = 0x1CE3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3B8u;
        // 0x1ce3bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ce3b8:
    ctx->pc = 0x1CE3C0u;
}
