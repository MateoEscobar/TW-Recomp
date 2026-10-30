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

// Function: sub_0029F230
// Address: 0x29f230 - 0x29f3a8
void sub_0029F230_0x29f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F230_0x29f230");
#endif

    switch (ctx->pc) {
        case 0x29f230u: goto label_29f230;
        case 0x29f234u: goto label_29f234;
        case 0x29f238u: goto label_29f238;
        case 0x29f23cu: goto label_29f23c;
        case 0x29f240u: goto label_29f240;
        case 0x29f244u: goto label_29f244;
        case 0x29f248u: goto label_29f248;
        case 0x29f24cu: goto label_29f24c;
        case 0x29f250u: goto label_29f250;
        case 0x29f254u: goto label_29f254;
        case 0x29f258u: goto label_29f258;
        case 0x29f25cu: goto label_29f25c;
        case 0x29f260u: goto label_29f260;
        case 0x29f264u: goto label_29f264;
        case 0x29f268u: goto label_29f268;
        case 0x29f26cu: goto label_29f26c;
        case 0x29f270u: goto label_29f270;
        case 0x29f274u: goto label_29f274;
        case 0x29f278u: goto label_29f278;
        case 0x29f27cu: goto label_29f27c;
        case 0x29f280u: goto label_29f280;
        case 0x29f284u: goto label_29f284;
        case 0x29f288u: goto label_29f288;
        case 0x29f28cu: goto label_29f28c;
        case 0x29f290u: goto label_29f290;
        case 0x29f294u: goto label_29f294;
        case 0x29f298u: goto label_29f298;
        case 0x29f29cu: goto label_29f29c;
        case 0x29f2a0u: goto label_29f2a0;
        case 0x29f2a4u: goto label_29f2a4;
        case 0x29f2a8u: goto label_29f2a8;
        case 0x29f2acu: goto label_29f2ac;
        case 0x29f2b0u: goto label_29f2b0;
        case 0x29f2b4u: goto label_29f2b4;
        case 0x29f2b8u: goto label_29f2b8;
        case 0x29f2bcu: goto label_29f2bc;
        case 0x29f2c0u: goto label_29f2c0;
        case 0x29f2c4u: goto label_29f2c4;
        case 0x29f2c8u: goto label_29f2c8;
        case 0x29f2ccu: goto label_29f2cc;
        case 0x29f2d0u: goto label_29f2d0;
        case 0x29f2d4u: goto label_29f2d4;
        case 0x29f2d8u: goto label_29f2d8;
        case 0x29f2dcu: goto label_29f2dc;
        case 0x29f2e0u: goto label_29f2e0;
        case 0x29f2e4u: goto label_29f2e4;
        case 0x29f2e8u: goto label_29f2e8;
        case 0x29f2ecu: goto label_29f2ec;
        case 0x29f2f0u: goto label_29f2f0;
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f2f8u: goto label_29f2f8;
        case 0x29f2fcu: goto label_29f2fc;
        case 0x29f300u: goto label_29f300;
        case 0x29f304u: goto label_29f304;
        case 0x29f308u: goto label_29f308;
        case 0x29f30cu: goto label_29f30c;
        case 0x29f310u: goto label_29f310;
        case 0x29f314u: goto label_29f314;
        case 0x29f318u: goto label_29f318;
        case 0x29f31cu: goto label_29f31c;
        case 0x29f320u: goto label_29f320;
        case 0x29f324u: goto label_29f324;
        case 0x29f328u: goto label_29f328;
        case 0x29f32cu: goto label_29f32c;
        case 0x29f330u: goto label_29f330;
        case 0x29f334u: goto label_29f334;
        case 0x29f338u: goto label_29f338;
        case 0x29f33cu: goto label_29f33c;
        case 0x29f340u: goto label_29f340;
        case 0x29f344u: goto label_29f344;
        case 0x29f348u: goto label_29f348;
        case 0x29f34cu: goto label_29f34c;
        case 0x29f350u: goto label_29f350;
        case 0x29f354u: goto label_29f354;
        case 0x29f358u: goto label_29f358;
        case 0x29f35cu: goto label_29f35c;
        case 0x29f360u: goto label_29f360;
        case 0x29f364u: goto label_29f364;
        case 0x29f368u: goto label_29f368;
        case 0x29f36cu: goto label_29f36c;
        case 0x29f370u: goto label_29f370;
        case 0x29f374u: goto label_29f374;
        case 0x29f378u: goto label_29f378;
        case 0x29f37cu: goto label_29f37c;
        case 0x29f380u: goto label_29f380;
        case 0x29f384u: goto label_29f384;
        case 0x29f388u: goto label_29f388;
        case 0x29f38cu: goto label_29f38c;
        case 0x29f390u: goto label_29f390;
        case 0x29f394u: goto label_29f394;
        case 0x29f398u: goto label_29f398;
        case 0x29f39cu: goto label_29f39c;
        case 0x29f3a0u: goto label_29f3a0;
        case 0x29f3a4u: goto label_29f3a4;
        default: break;
    }

    ctx->pc = 0x29f230u;

label_29f230:
    // 0x29f230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_29f234:
    // 0x29f234: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x29f234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_29f238:
    // 0x29f238: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x29f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_29f23c:
    // 0x29f23c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29f23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f240:
    // 0x29f240: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x29f240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_29f244:
    // 0x29f244: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29f244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f248:
    // 0x29f248: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x29f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_29f24c:
    // 0x29f24c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29f250:
    // 0x29f250: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29f250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f254:
    // 0x29f254: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x29f254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_29f258:
    // 0x29f258: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29f258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f25c:
    // 0x29f25c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x29f25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_29f260:
    // 0x29f260: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x29f260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_29f264:
    // 0x29f264: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x29f264u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f268:
    // 0x29f268: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x29f268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_29f26c:
    // 0x29f26c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x29f26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_29f270:
    // 0x29f270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29f270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29f274:
    // 0x29f274: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29f274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f278:
    // 0x29f278: 0x8c9e0000  lw          $fp, 0x0($a0)
    ctx->pc = 0x29f278u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f27c:
    // 0x29f27c: 0xc0e409a  jal         func_390268
label_29f280:
    if (ctx->pc == 0x29F280u) {
        ctx->pc = 0x29F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F27Cu;
        // 0x29f280: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F284u;
        goto label_29f284;
    }
    ctx->pc = 0x29F27Cu;
    SET_GPR_U32(ctx, 31, 0x29F284u);
    ctx->pc = 0x29F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F27Cu;
    // 0x29f280: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29F27Cu, 0x29F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F284u;
label_29f284:
    // 0x29f284: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29f284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f288:
    // 0x29f288: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29f288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f28c:
    // 0x29f28c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f290:
    // 0x29f290: 0xc0a33f8  jal         func_28CFE0
label_29f294:
    if (ctx->pc == 0x29F294u) {
        ctx->pc = 0x29F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F290u;
        // 0x29f294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F298u;
        goto label_29f298;
    }
    ctx->pc = 0x29F290u;
    SET_GPR_U32(ctx, 31, 0x29F298u);
    ctx->pc = 0x29F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F290u;
    // 0x29f294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x29F290u, 0x29F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F298u;
label_29f298:
    // 0x29f298: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29f298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f29c:
    // 0x29f29c: 0xc0a34d6  jal         func_28D358
label_29f2a0:
    if (ctx->pc == 0x29F2A0u) {
        ctx->pc = 0x29F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F29Cu;
        // 0x29f2a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2A4u;
        goto label_29f2a4;
    }
    ctx->pc = 0x29F29Cu;
    SET_GPR_U32(ctx, 31, 0x29F2A4u);
    ctx->pc = 0x29F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F29Cu;
    // 0x29f2a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x29F29Cu, 0x29F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2A4u;
label_29f2a4:
    // 0x29f2a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f2a8:
    // 0x29f2a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29f2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f2ac:
    // 0x29f2ac: 0x10000016  b           . + 4 + (0x16 << 2)
label_29f2b0:
    if (ctx->pc == 0x29F2B0u) {
        ctx->pc = 0x29F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2ACu;
        // 0x29f2b0: 0x24760164  addiu       $s6, $v1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2B4u;
        goto label_29f2b4;
    }
    ctx->pc = 0x29F2ACu;
    {
        const bool branch_taken_0x29f2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2ACu;
        // 0x29f2b0: 0x24760164  addiu       $s6, $v1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2ac) {
            ctx->pc = 0x29F308u;
            goto label_29f308;
        }
    }
    ctx->pc = 0x29F2B4u;
label_29f2b4:
    // 0x29f2b4: 0x0  nop
    ctx->pc = 0x29f2b4u;
    // NOP
label_29f2b8:
    // 0x29f2b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29f2bc:
    // 0x29f2bc: 0xc0a73a6  jal         func_29CE98
label_29f2c0:
    if (ctx->pc == 0x29F2C0u) {
        ctx->pc = 0x29F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2BCu;
        // 0x29f2c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2C4u;
        goto label_29f2c4;
    }
    ctx->pc = 0x29F2BCu;
    SET_GPR_U32(ctx, 31, 0x29F2C4u);
    ctx->pc = 0x29F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2BCu;
    // 0x29f2c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE98u, 0x29F2BCu, 0x29F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2C4u;
label_29f2c4:
    // 0x29f2c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x29f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_29f2c8:
    // 0x29f2c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f2cc:
    // 0x29f2cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_29f2d0:
    // 0x29f2d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29f2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29f2d4:
    // 0x29f2d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x29f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_29f2d8:
    // 0x29f2d8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29f2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29f2dc:
    // 0x29f2dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x29f2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_29f2e0:
    // 0x29f2e0: 0x40f809  jalr        $v0
label_29f2e4:
    if (ctx->pc == 0x29F2E4u) {
        ctx->pc = 0x29F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2E0u;
        // 0x29f2e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2E8u;
        goto label_29f2e8;
    }
    ctx->pc = 0x29F2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F2E8u);
        ctx->pc = 0x29F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2E0u;
        // 0x29f2e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F2E0u, 0x29F2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F2E8u;
label_29f2e8:
    // 0x29f2e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29f2ec:
    // 0x29f2ec: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x29f2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29f2f0:
    // 0x29f2f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_29f2f4:
    if (ctx->pc == 0x29F2F4u) {
        ctx->pc = 0x29F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2F0u;
        // 0x29f2f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2F8u;
        goto label_29f2f8;
    }
    ctx->pc = 0x29F2F0u;
    {
        const bool branch_taken_0x29f2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f2f0) {
            ctx->pc = 0x29F2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F2F0u;
            // 0x29f2f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F304u;
            goto label_29f304;
        }
    }
    ctx->pc = 0x29F2F8u;
label_29f2f8:
    // 0x29f2f8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x29f2f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_29f2fc:
    // 0x29f2fc: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x29f2fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f300:
    // 0x29f300: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29f300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29f304:
    // 0x29f304: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29f304u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_29f308:
    // 0x29f308: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x29f308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_29f30c:
    // 0x29f30c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_29f310:
    if (ctx->pc == 0x29F310u) {
        ctx->pc = 0x29F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F30Cu;
        // 0x29f310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F314u;
        goto label_29f314;
    }
    ctx->pc = 0x29F30Cu;
    {
        const bool branch_taken_0x29f30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F30Cu;
        // 0x29f310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f30c) {
            ctx->pc = 0x29F358u;
            goto label_29f358;
        }
    }
    ctx->pc = 0x29F314u;
label_29f314:
    // 0x29f314: 0xc137866  jal         func_4DE198
label_29f318:
    if (ctx->pc == 0x29F318u) {
        ctx->pc = 0x29F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F314u;
        // 0x29f318: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F31Cu;
        goto label_29f31c;
    }
    ctx->pc = 0x29F314u;
    SET_GPR_U32(ctx, 31, 0x29F31Cu);
    ctx->pc = 0x29F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F314u;
    // 0x29f318: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x29F314u, 0x29F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F31Cu;
label_29f31c:
    // 0x29f31c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f320:
    // 0x29f320: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x29f320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_29f324:
    // 0x29f324: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x29f324u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f328:
    // 0x29f328: 0xc0e409a  jal         func_390268
label_29f32c:
    if (ctx->pc == 0x29F32Cu) {
        ctx->pc = 0x29F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F328u;
        // 0x29f32c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F330u;
        goto label_29f330;
    }
    ctx->pc = 0x29F328u;
    SET_GPR_U32(ctx, 31, 0x29F330u);
    ctx->pc = 0x29F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F328u;
    // 0x29f32c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29F328u, 0x29F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F330u;
label_29f330:
    // 0x29f330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f334:
    // 0x29f334: 0xc0a34d6  jal         func_28D358
label_29f338:
    if (ctx->pc == 0x29F338u) {
        ctx->pc = 0x29F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F334u;
        // 0x29f338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F33Cu;
        goto label_29f33c;
    }
    ctx->pc = 0x29F334u;
    SET_GPR_U32(ctx, 31, 0x29F33Cu);
    ctx->pc = 0x29F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F334u;
    // 0x29f338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x29F334u, 0x29F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F33Cu;
label_29f33c:
    // 0x29f33c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f340:
    // 0x29f340: 0x1200ffef  beqz        $s0, . + 4 + (-0x11 << 2)
label_29f344:
    if (ctx->pc == 0x29F344u) {
        ctx->pc = 0x29F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F340u;
        // 0x29f344: 0x2e820005  sltiu       $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F348u;
        goto label_29f348;
    }
    ctx->pc = 0x29F340u;
    {
        const bool branch_taken_0x29f340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F340u;
        // 0x29f344: 0x2e820005  sltiu       $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f340) {
            ctx->pc = 0x29F300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f300;
        }
    }
    ctx->pc = 0x29F348u;
label_29f348:
    // 0x29f348: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_29f34c:
    if (ctx->pc == 0x29F34Cu) {
        ctx->pc = 0x29F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F348u;
        // 0x29f34c: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F350u;
        goto label_29f350;
    }
    ctx->pc = 0x29F348u;
    {
        const bool branch_taken_0x29f348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F348u;
        // 0x29f34c: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f348) {
            ctx->pc = 0x29F2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f2b8;
        }
    }
    ctx->pc = 0x29F350u;
label_29f350:
    // 0x29f350: 0x1aa0ffd9  blez        $s5, . + 4 + (-0x27 << 2)
label_29f354:
    if (ctx->pc == 0x29F354u) {
        ctx->pc = 0x29F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F350u;
        // 0x29f354: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F358u;
        goto label_29f358;
    }
    ctx->pc = 0x29F350u;
    {
        const bool branch_taken_0x29f350 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x29F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F350u;
        // 0x29f354: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f350) {
            ctx->pc = 0x29F2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f2b8;
        }
    }
    ctx->pc = 0x29F358u;
label_29f358:
    // 0x29f358: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29f358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f35c:
    // 0x29f35c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x29f35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29f360:
    // 0x29f360: 0xc0a33f8  jal         func_28CFE0
label_29f364:
    if (ctx->pc == 0x29F364u) {
        ctx->pc = 0x29F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F360u;
        // 0x29f364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F368u;
        goto label_29f368;
    }
    ctx->pc = 0x29F360u;
    SET_GPR_U32(ctx, 31, 0x29F368u);
    ctx->pc = 0x29F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F360u;
    // 0x29f364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x29F360u, 0x29F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F368u;
label_29f368:
    // 0x29f368: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f36c:
    // 0x29f36c: 0xc0e409a  jal         func_390268
label_29f370:
    if (ctx->pc == 0x29F370u) {
        ctx->pc = 0x29F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F36Cu;
        // 0x29f370: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F374u;
        goto label_29f374;
    }
    ctx->pc = 0x29F36Cu;
    SET_GPR_U32(ctx, 31, 0x29F374u);
    ctx->pc = 0x29F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F36Cu;
    // 0x29f370: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29F36Cu, 0x29F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F374u;
label_29f374:
    // 0x29f374: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x29f374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_29f378:
    // 0x29f378: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x29f378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29f37c:
    // 0x29f37c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x29f37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29f380:
    // 0x29f380: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x29f380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29f384:
    // 0x29f384: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x29f384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29f388:
    // 0x29f388: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29f388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29f38c:
    // 0x29f38c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x29f38cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29f390:
    // 0x29f390: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x29f390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29f394:
    // 0x29f394: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x29f394u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f398:
    // 0x29f398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29f398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29f39c:
    // 0x29f39c: 0x3e00008  jr          $ra
label_29f3a0:
    if (ctx->pc == 0x29F3A0u) {
        ctx->pc = 0x29F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F39Cu;
        // 0x29f3a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F3A4u;
        goto label_29f3a4;
    }
    ctx->pc = 0x29F39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F39Cu;
        // 0x29f3a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F3A4u;
label_29f3a4:
    // 0x29f3a4: 0x0  nop
    ctx->pc = 0x29f3a4u;
    // NOP
    ctx->pc = 0x29f3a8u;
}
