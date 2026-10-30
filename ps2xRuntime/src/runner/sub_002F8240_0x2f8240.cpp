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

// Function: sub_002F8240
// Address: 0x2f8240 - 0x2f8400
void sub_002F8240_0x2f8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8240_0x2f8240");
#endif

    switch (ctx->pc) {
        case 0x2f8240u: goto label_2f8240;
        case 0x2f8244u: goto label_2f8244;
        case 0x2f8248u: goto label_2f8248;
        case 0x2f824cu: goto label_2f824c;
        case 0x2f8250u: goto label_2f8250;
        case 0x2f8254u: goto label_2f8254;
        case 0x2f8258u: goto label_2f8258;
        case 0x2f825cu: goto label_2f825c;
        case 0x2f8260u: goto label_2f8260;
        case 0x2f8264u: goto label_2f8264;
        case 0x2f8268u: goto label_2f8268;
        case 0x2f826cu: goto label_2f826c;
        case 0x2f8270u: goto label_2f8270;
        case 0x2f8274u: goto label_2f8274;
        case 0x2f8278u: goto label_2f8278;
        case 0x2f827cu: goto label_2f827c;
        case 0x2f8280u: goto label_2f8280;
        case 0x2f8284u: goto label_2f8284;
        case 0x2f8288u: goto label_2f8288;
        case 0x2f828cu: goto label_2f828c;
        case 0x2f8290u: goto label_2f8290;
        case 0x2f8294u: goto label_2f8294;
        case 0x2f8298u: goto label_2f8298;
        case 0x2f829cu: goto label_2f829c;
        case 0x2f82a0u: goto label_2f82a0;
        case 0x2f82a4u: goto label_2f82a4;
        case 0x2f82a8u: goto label_2f82a8;
        case 0x2f82acu: goto label_2f82ac;
        case 0x2f82b0u: goto label_2f82b0;
        case 0x2f82b4u: goto label_2f82b4;
        case 0x2f82b8u: goto label_2f82b8;
        case 0x2f82bcu: goto label_2f82bc;
        case 0x2f82c0u: goto label_2f82c0;
        case 0x2f82c4u: goto label_2f82c4;
        case 0x2f82c8u: goto label_2f82c8;
        case 0x2f82ccu: goto label_2f82cc;
        case 0x2f82d0u: goto label_2f82d0;
        case 0x2f82d4u: goto label_2f82d4;
        case 0x2f82d8u: goto label_2f82d8;
        case 0x2f82dcu: goto label_2f82dc;
        case 0x2f82e0u: goto label_2f82e0;
        case 0x2f82e4u: goto label_2f82e4;
        case 0x2f82e8u: goto label_2f82e8;
        case 0x2f82ecu: goto label_2f82ec;
        case 0x2f82f0u: goto label_2f82f0;
        case 0x2f82f4u: goto label_2f82f4;
        case 0x2f82f8u: goto label_2f82f8;
        case 0x2f82fcu: goto label_2f82fc;
        case 0x2f8300u: goto label_2f8300;
        case 0x2f8304u: goto label_2f8304;
        case 0x2f8308u: goto label_2f8308;
        case 0x2f830cu: goto label_2f830c;
        case 0x2f8310u: goto label_2f8310;
        case 0x2f8314u: goto label_2f8314;
        case 0x2f8318u: goto label_2f8318;
        case 0x2f831cu: goto label_2f831c;
        case 0x2f8320u: goto label_2f8320;
        case 0x2f8324u: goto label_2f8324;
        case 0x2f8328u: goto label_2f8328;
        case 0x2f832cu: goto label_2f832c;
        case 0x2f8330u: goto label_2f8330;
        case 0x2f8334u: goto label_2f8334;
        case 0x2f8338u: goto label_2f8338;
        case 0x2f833cu: goto label_2f833c;
        case 0x2f8340u: goto label_2f8340;
        case 0x2f8344u: goto label_2f8344;
        case 0x2f8348u: goto label_2f8348;
        case 0x2f834cu: goto label_2f834c;
        case 0x2f8350u: goto label_2f8350;
        case 0x2f8354u: goto label_2f8354;
        case 0x2f8358u: goto label_2f8358;
        case 0x2f835cu: goto label_2f835c;
        case 0x2f8360u: goto label_2f8360;
        case 0x2f8364u: goto label_2f8364;
        case 0x2f8368u: goto label_2f8368;
        case 0x2f836cu: goto label_2f836c;
        case 0x2f8370u: goto label_2f8370;
        case 0x2f8374u: goto label_2f8374;
        case 0x2f8378u: goto label_2f8378;
        case 0x2f837cu: goto label_2f837c;
        case 0x2f8380u: goto label_2f8380;
        case 0x2f8384u: goto label_2f8384;
        case 0x2f8388u: goto label_2f8388;
        case 0x2f838cu: goto label_2f838c;
        case 0x2f8390u: goto label_2f8390;
        case 0x2f8394u: goto label_2f8394;
        case 0x2f8398u: goto label_2f8398;
        case 0x2f839cu: goto label_2f839c;
        case 0x2f83a0u: goto label_2f83a0;
        case 0x2f83a4u: goto label_2f83a4;
        case 0x2f83a8u: goto label_2f83a8;
        case 0x2f83acu: goto label_2f83ac;
        case 0x2f83b0u: goto label_2f83b0;
        case 0x2f83b4u: goto label_2f83b4;
        case 0x2f83b8u: goto label_2f83b8;
        case 0x2f83bcu: goto label_2f83bc;
        case 0x2f83c0u: goto label_2f83c0;
        case 0x2f83c4u: goto label_2f83c4;
        case 0x2f83c8u: goto label_2f83c8;
        case 0x2f83ccu: goto label_2f83cc;
        case 0x2f83d0u: goto label_2f83d0;
        case 0x2f83d4u: goto label_2f83d4;
        case 0x2f83d8u: goto label_2f83d8;
        case 0x2f83dcu: goto label_2f83dc;
        case 0x2f83e0u: goto label_2f83e0;
        case 0x2f83e4u: goto label_2f83e4;
        case 0x2f83e8u: goto label_2f83e8;
        case 0x2f83ecu: goto label_2f83ec;
        case 0x2f83f0u: goto label_2f83f0;
        case 0x2f83f4u: goto label_2f83f4;
        case 0x2f83f8u: goto label_2f83f8;
        case 0x2f83fcu: goto label_2f83fc;
        default: break;
    }

    ctx->pc = 0x2f8240u;

label_2f8240:
    // 0x2f8240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f8244:
    // 0x2f8244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8248:
    // 0x2f8248: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f824c:
    // 0x2f824c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2f824cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2f8250:
    // 0x2f8250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f8250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f8254:
    // 0x2f8254: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f8254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2f8258:
    // 0x2f8258: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2f8258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2f825c:
    // 0x2f825c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2f825cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2f8260:
    // 0x2f8260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f8260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f8264:
    // 0x2f8264: 0x9243002a  lbu         $v1, 0x2A($s2)
    ctx->pc = 0x2f8264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
label_2f8268:
    // 0x2f8268: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_2f826c:
    if (ctx->pc == 0x2F826Cu) {
        ctx->pc = 0x2F826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8268u;
        // 0x2f826c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8270u;
        goto label_2f8270;
    }
    ctx->pc = 0x2F8268u;
    {
        const bool branch_taken_0x2f8268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8268u;
        // 0x2f826c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8268) {
            ctx->pc = 0x2F83ACu;
            goto label_2f83ac;
        }
    }
    ctx->pc = 0x2F8270u;
label_2f8270:
    // 0x2f8270: 0x9242002f  lbu         $v0, 0x2F($s2)
    ctx->pc = 0x2f8270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
label_2f8274:
    // 0x2f8274: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
label_2f8278:
    if (ctx->pc == 0x2F8278u) {
        ctx->pc = 0x2F8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8274u;
        // 0x2f8278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F827Cu;
        goto label_2f827c;
    }
    ctx->pc = 0x2F8274u;
    {
        const bool branch_taken_0x2f8274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8274u;
        // 0x2f8278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8274) {
            ctx->pc = 0x2F83DCu;
            goto label_2f83dc;
        }
    }
    ctx->pc = 0x2F827Cu;
label_2f827c:
    // 0x2f827c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f8280:
    // 0x2f8280: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2f8280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2f8284:
    // 0x2f8284: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2f8284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f8288:
    // 0x2f8288: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_2f828c:
    if (ctx->pc == 0x2F828Cu) {
        ctx->pc = 0x2F828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8288u;
        // 0x2f828c: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8290u;
        goto label_2f8290;
    }
    ctx->pc = 0x2F8288u;
    {
        const bool branch_taken_0x2f8288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8288) {
            ctx->pc = 0x2F828Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8288u;
            // 0x2f828c: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F82C8u;
            goto label_2f82c8;
        }
    }
    ctx->pc = 0x2F8290u;
label_2f8290:
    // 0x2f8290: 0xc0a36c2  jal         func_28DB08
label_2f8294:
    if (ctx->pc == 0x2F8294u) {
        ctx->pc = 0x2F8298u;
        goto label_2f8298;
    }
    ctx->pc = 0x2F8290u;
    SET_GPR_U32(ctx, 31, 0x2F8298u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2F8290u, 0x2F8298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8298u;
label_2f8298:
    // 0x2f8298: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f8298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f829c:
    // 0x2f829c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2f829cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2f82a0:
    // 0x2f82a0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2f82a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2f82a4:
    // 0x2f82a4: 0xa0f809  jalr        $a1
label_2f82a8:
    if (ctx->pc == 0x2F82A8u) {
        ctx->pc = 0x2F82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82A4u;
        // 0x2f82a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82ACu;
        goto label_2f82ac;
    }
    ctx->pc = 0x2F82A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F82ACu);
        ctx->pc = 0x2F82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82A4u;
        // 0x2f82a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F82A4u, 0x2F82ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F82ACu;
label_2f82ac:
    // 0x2f82ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f82b0:
    // 0x2f82b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f82b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f82b4:
    // 0x2f82b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f82b8:
    if (ctx->pc == 0x2F82B8u) {
        ctx->pc = 0x2F82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82B4u;
        // 0x2f82b8: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82BCu;
        goto label_2f82bc;
    }
    ctx->pc = 0x2F82B4u;
    {
        const bool branch_taken_0x2f82b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f82b4) {
            ctx->pc = 0x2F82B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F82B4u;
            // 0x2f82b8: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F82C8u;
            goto label_2f82c8;
        }
    }
    ctx->pc = 0x2F82BCu;
label_2f82bc:
    // 0x2f82bc: 0xc0a36c8  jal         func_28DB20
label_2f82c0:
    if (ctx->pc == 0x2F82C0u) {
        ctx->pc = 0x2F82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82BCu;
        // 0x2f82c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82C4u;
        goto label_2f82c4;
    }
    ctx->pc = 0x2F82BCu;
    SET_GPR_U32(ctx, 31, 0x2F82C4u);
    ctx->pc = 0x2F82C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F82BCu;
    // 0x2f82c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2F82BCu, 0x2F82C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F82C4u;
label_2f82c4:
    // 0x2f82c4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2f82c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f82c8:
    // 0x2f82c8: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2f82c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2f82cc:
    // 0x2f82cc: 0xc0e409a  jal         func_390268
label_2f82d0:
    if (ctx->pc == 0x2F82D0u) {
        ctx->pc = 0x2F82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82CCu;
        // 0x2f82d0: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82D4u;
        goto label_2f82d4;
    }
    ctx->pc = 0x2F82CCu;
    SET_GPR_U32(ctx, 31, 0x2F82D4u);
    ctx->pc = 0x2F82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F82CCu;
    // 0x2f82d0: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F82CCu, 0x2F82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F82D4u;
label_2f82d4:
    // 0x2f82d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f82d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f82d8:
    // 0x2f82d8: 0xc0a34d6  jal         func_28D358
label_2f82dc:
    if (ctx->pc == 0x2F82DCu) {
        ctx->pc = 0x2F82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82D8u;
        // 0x2f82dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82E0u;
        goto label_2f82e0;
    }
    ctx->pc = 0x2F82D8u;
    SET_GPR_U32(ctx, 31, 0x2F82E0u);
    ctx->pc = 0x2F82DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F82D8u;
    // 0x2f82dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F82D8u, 0x2F82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F82E0u;
label_2f82e0:
    // 0x2f82e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f82e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f82e4:
    // 0x2f82e4: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
label_2f82e8:
    if (ctx->pc == 0x2F82E8u) {
        ctx->pc = 0x2F82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82E4u;
        // 0x2f82e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82ECu;
        goto label_2f82ec;
    }
    ctx->pc = 0x2F82E4u;
    {
        const bool branch_taken_0x2f82e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82E4u;
        // 0x2f82e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82e4) {
            ctx->pc = 0x2F8340u;
            goto label_2f8340;
        }
    }
    ctx->pc = 0x2F82ECu;
label_2f82ec:
    // 0x2f82ec: 0xc09643e  jal         func_2590F8
label_2f82f0:
    if (ctx->pc == 0x2F82F0u) {
        ctx->pc = 0x2F82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82ECu;
        // 0x2f82f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F82F4u;
        goto label_2f82f4;
    }
    ctx->pc = 0x2F82ECu;
    SET_GPR_U32(ctx, 31, 0x2F82F4u);
    ctx->pc = 0x2F82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F82ECu;
    // 0x2f82f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x2F82ECu, 0x2F82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F82F4u;
label_2f82f4:
    // 0x2f82f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f82f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f82f8:
    // 0x2f82f8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2f82fc:
    if (ctx->pc == 0x2F82FCu) {
        ctx->pc = 0x2F82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82F8u;
        // 0x2f82fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8300u;
        goto label_2f8300;
    }
    ctx->pc = 0x2F82F8u;
    {
        const bool branch_taken_0x2f82f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82F8u;
        // 0x2f82fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82f8) {
            ctx->pc = 0x2F8310u;
            goto label_2f8310;
        }
    }
    ctx->pc = 0x2F8300u;
label_2f8300:
    // 0x2f8300: 0xc0963a2  jal         func_258E88
label_2f8304:
    if (ctx->pc == 0x2F8304u) {
        ctx->pc = 0x2F8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8300u;
        // 0x2f8304: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8308u;
        goto label_2f8308;
    }
    ctx->pc = 0x2F8300u;
    SET_GPR_U32(ctx, 31, 0x2F8308u);
    ctx->pc = 0x2F8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8300u;
    // 0x2f8304: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x2F8300u, 0x2F8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8308u;
label_2f8308:
    // 0x2f8308: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
label_2f830c:
    if (ctx->pc == 0x2F830Cu) {
        ctx->pc = 0x2F8310u;
        goto label_2f8310;
    }
    ctx->pc = 0x2F8308u;
    {
        const bool branch_taken_0x2f8308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f8308) {
            ctx->pc = 0x2F8340u;
            goto label_2f8340;
        }
    }
    ctx->pc = 0x2F8310u;
label_2f8310:
    // 0x2f8310: 0x9242002b  lbu         $v0, 0x2B($s2)
    ctx->pc = 0x2f8310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 43)));
label_2f8314:
    // 0x2f8314: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2f8318:
    if (ctx->pc == 0x2F8318u) {
        ctx->pc = 0x2F831Cu;
        goto label_2f831c;
    }
    ctx->pc = 0x2F8314u;
    {
        const bool branch_taken_0x2f8314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8314) {
            ctx->pc = 0x2F8340u;
            goto label_2f8340;
        }
    }
    ctx->pc = 0x2F831Cu;
label_2f831c:
    // 0x2f831c: 0xc0a36c8  jal         func_28DB20
label_2f8320:
    if (ctx->pc == 0x2F8320u) {
        ctx->pc = 0x2F8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F831Cu;
        // 0x2f8320: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8324u;
        goto label_2f8324;
    }
    ctx->pc = 0x2F831Cu;
    SET_GPR_U32(ctx, 31, 0x2F8324u);
    ctx->pc = 0x2F8320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F831Cu;
    // 0x2f8320: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2F831Cu, 0x2F8324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8324u;
label_2f8324:
    // 0x2f8324: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_2f8328:
    if (ctx->pc == 0x2F8328u) {
        ctx->pc = 0x2F832Cu;
        goto label_2f832c;
    }
    ctx->pc = 0x2F8324u;
    {
        const bool branch_taken_0x2f8324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f8324) {
            ctx->pc = 0x2F8340u;
            goto label_2f8340;
        }
    }
    ctx->pc = 0x2F832Cu;
label_2f832c:
    // 0x2f832c: 0xc0874fa  jal         func_21D3E8
label_2f8330:
    if (ctx->pc == 0x2F8330u) {
        ctx->pc = 0x2F8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F832Cu;
        // 0x2f8330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8334u;
        goto label_2f8334;
    }
    ctx->pc = 0x2F832Cu;
    SET_GPR_U32(ctx, 31, 0x2F8334u);
    ctx->pc = 0x2F8330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F832Cu;
    // 0x2f8330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2F832Cu, 0x2F8334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8334u;
label_2f8334:
    // 0x2f8334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8338:
    // 0x2f8338: 0xc051fbc  jal         func_147EF0
label_2f833c:
    if (ctx->pc == 0x2F833Cu) {
        ctx->pc = 0x2F833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8338u;
        // 0x2f833c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8340u;
        goto label_2f8340;
    }
    ctx->pc = 0x2F8338u;
    SET_GPR_U32(ctx, 31, 0x2F8340u);
    ctx->pc = 0x2F833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8338u;
    // 0x2f833c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2F8338u, 0x2F8340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8340u;
label_2f8340:
    // 0x2f8340: 0xc08a10a  jal         func_228428
label_2f8344:
    if (ctx->pc == 0x2F8344u) {
        ctx->pc = 0x2F8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8340u;
        // 0x2f8344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8348u;
        goto label_2f8348;
    }
    ctx->pc = 0x2F8340u;
    SET_GPR_U32(ctx, 31, 0x2F8348u);
    ctx->pc = 0x2F8344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8340u;
    // 0x2f8344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2F8340u, 0x2F8348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8348u;
label_2f8348:
    // 0x2f8348: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_2f834c:
    if (ctx->pc == 0x2F834Cu) {
        ctx->pc = 0x2F834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8348u;
        // 0x2f834c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8350u;
        goto label_2f8350;
    }
    ctx->pc = 0x2F8348u;
    {
        const bool branch_taken_0x2f8348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8348) {
            ctx->pc = 0x2F834Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8348u;
            // 0x2f834c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F83DCu;
            goto label_2f83dc;
        }
    }
    ctx->pc = 0x2F8350u;
label_2f8350:
    // 0x2f8350: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2f8350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f8354:
    // 0x2f8354: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_2f8358:
    if (ctx->pc == 0x2F8358u) {
        ctx->pc = 0x2F8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8354u;
        // 0x2f8358: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F835Cu;
        goto label_2f835c;
    }
    ctx->pc = 0x2F8354u;
    {
        const bool branch_taken_0x2f8354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8354) {
            ctx->pc = 0x2F8358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8354u;
            // 0x2f8358: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8374u;
            goto label_2f8374;
        }
    }
    ctx->pc = 0x2F835Cu;
label_2f835c:
    // 0x2f835c: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
label_2f8360:
    if (ctx->pc == 0x2F8360u) {
        ctx->pc = 0x2F8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F835Cu;
        // 0x2f8360: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8364u;
        goto label_2f8364;
    }
    ctx->pc = 0x2F835Cu;
    {
        const bool branch_taken_0x2f835c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x2f835c) {
            ctx->pc = 0x2F8360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F835Cu;
            // 0x2f8360: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8374u;
            goto label_2f8374;
        }
    }
    ctx->pc = 0x2F8364u;
label_2f8364:
    // 0x2f8364: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f8364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f8368:
    // 0x2f8368: 0xc0a33f8  jal         func_28CFE0
label_2f836c:
    if (ctx->pc == 0x2F836Cu) {
        ctx->pc = 0x2F836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8368u;
        // 0x2f836c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8370u;
        goto label_2f8370;
    }
    ctx->pc = 0x2F8368u;
    SET_GPR_U32(ctx, 31, 0x2F8370u);
    ctx->pc = 0x2F836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8368u;
    // 0x2f836c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2F8368u, 0x2F8370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8370u;
label_2f8370:
    // 0x2f8370: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2f8370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2f8374:
    // 0x2f8374: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2f8378:
    if (ctx->pc == 0x2F8378u) {
        ctx->pc = 0x2F8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8374u;
        // 0x2f8378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F837Cu;
        goto label_2f837c;
    }
    ctx->pc = 0x2F8374u;
    {
        const bool branch_taken_0x2f8374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8374u;
        // 0x2f8378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8374) {
            ctx->pc = 0x2F83DCu;
            goto label_2f83dc;
        }
    }
    ctx->pc = 0x2F837Cu;
label_2f837c:
    // 0x2f837c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2f837cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2f8380:
    // 0x2f8380: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2f8380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2f8384:
    // 0x2f8384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f8384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f8388:
    // 0x2f8388: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f8388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f838c:
    // 0x2f838c: 0xc0874fa  jal         func_21D3E8
label_2f8390:
    if (ctx->pc == 0x2F8390u) {
        ctx->pc = 0x2F8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F838Cu;
        // 0x2f8390: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8394u;
        goto label_2f8394;
    }
    ctx->pc = 0x2F838Cu;
    SET_GPR_U32(ctx, 31, 0x2F8394u);
    ctx->pc = 0x2F8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F838Cu;
    // 0x2f8390: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2F838Cu, 0x2F8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8394u;
label_2f8394:
    // 0x2f8394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8398:
    // 0x2f8398: 0xc051fbc  jal         func_147EF0
label_2f839c:
    if (ctx->pc == 0x2F839Cu) {
        ctx->pc = 0x2F839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8398u;
        // 0x2f839c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F83A0u;
        goto label_2f83a0;
    }
    ctx->pc = 0x2F8398u;
    SET_GPR_U32(ctx, 31, 0x2F83A0u);
    ctx->pc = 0x2F839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8398u;
    // 0x2f839c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2F8398u, 0x2F83A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83A0u;
label_2f83a0:
    // 0x2f83a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f83a4:
    // 0x2f83a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2f83a8:
    if (ctx->pc == 0x2F83A8u) {
        ctx->pc = 0x2F83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83A4u;
        // 0x2f83a8: 0xa242002f  sb          $v0, 0x2F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F83ACu;
        goto label_2f83ac;
    }
    ctx->pc = 0x2F83A4u;
    {
        const bool branch_taken_0x2f83a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83A4u;
        // 0x2f83a8: 0xa242002f  sb          $v0, 0x2F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83a4) {
            ctx->pc = 0x2F83D8u;
            goto label_2f83d8;
        }
    }
    ctx->pc = 0x2F83ACu;
label_2f83ac:
    // 0x2f83ac: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2f83acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f83b0:
    // 0x2f83b0: 0xc087502  jal         func_21D408
label_2f83b4:
    if (ctx->pc == 0x2F83B4u) {
        ctx->pc = 0x2F83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83B0u;
        // 0x2f83b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F83B8u;
        goto label_2f83b8;
    }
    ctx->pc = 0x2F83B0u;
    SET_GPR_U32(ctx, 31, 0x2F83B8u);
    ctx->pc = 0x2F83B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F83B0u;
    // 0x2f83b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F83B0u, 0x2F83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83B8u;
label_2f83b8:
    // 0x2f83b8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f83b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f83bc:
    // 0x2f83bc: 0xc0a408c  jal         func_290230
label_2f83c0:
    if (ctx->pc == 0x2F83C0u) {
        ctx->pc = 0x2F83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83BCu;
        // 0x2f83c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F83C4u;
        goto label_2f83c4;
    }
    ctx->pc = 0x2F83BCu;
    SET_GPR_U32(ctx, 31, 0x2F83C4u);
    ctx->pc = 0x2F83C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F83BCu;
    // 0x2f83c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2F83BCu, 0x2F83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83C4u;
label_2f83c4:
    // 0x2f83c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f83c8:
    if (ctx->pc == 0x2F83C8u) {
        ctx->pc = 0x2F83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83C4u;
        // 0x2f83c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F83CCu;
        goto label_2f83cc;
    }
    ctx->pc = 0x2F83C4u;
    {
        const bool branch_taken_0x2f83c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83C4u;
        // 0x2f83c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83c4) {
            ctx->pc = 0x2F83DCu;
            goto label_2f83dc;
        }
    }
    ctx->pc = 0x2F83CCu;
label_2f83cc:
    // 0x2f83cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f83ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f83d0:
    // 0x2f83d0: 0xc0be02c  jal         func_2F80B0
label_2f83d4:
    if (ctx->pc == 0x2F83D4u) {
        ctx->pc = 0x2F83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83D0u;
        // 0x2f83d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F83D8u;
        goto label_2f83d8;
    }
    ctx->pc = 0x2F83D0u;
    SET_GPR_U32(ctx, 31, 0x2F83D8u);
    ctx->pc = 0x2F83D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F83D0u;
    // 0x2f83d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F80B0u, 0x2F83D0u, 0x2F83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83D8u;
label_2f83d8:
    // 0x2f83d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f83dc:
    // 0x2f83dc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f83dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f83e0:
    // 0x2f83e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2f83e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f83e4:
    // 0x2f83e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f83e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f83e8:
    // 0x2f83e8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2f83e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f83ec:
    // 0x2f83ec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2f83ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f83f0:
    // 0x2f83f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f83f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f83f4:
    // 0x2f83f4: 0x3e00008  jr          $ra
label_2f83f8:
    if (ctx->pc == 0x2F83F8u) {
        ctx->pc = 0x2F83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83F4u;
        // 0x2f83f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F83FCu;
        goto label_2f83fc;
    }
    ctx->pc = 0x2F83F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83F4u;
        // 0x2f83f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F83F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F83FCu;
label_2f83fc:
    // 0x2f83fc: 0x0  nop
    ctx->pc = 0x2f83fcu;
    // NOP
    ctx->pc = 0x2f8400u;
}
