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

// Function: sub_001D8258
// Address: 0x1d8258 - 0x1d83e0
void sub_001D8258_0x1d8258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8258_0x1d8258");
#endif

    switch (ctx->pc) {
        case 0x1d8258u: goto label_1d8258;
        case 0x1d825cu: goto label_1d825c;
        case 0x1d8260u: goto label_1d8260;
        case 0x1d8264u: goto label_1d8264;
        case 0x1d8268u: goto label_1d8268;
        case 0x1d826cu: goto label_1d826c;
        case 0x1d8270u: goto label_1d8270;
        case 0x1d8274u: goto label_1d8274;
        case 0x1d8278u: goto label_1d8278;
        case 0x1d827cu: goto label_1d827c;
        case 0x1d8280u: goto label_1d8280;
        case 0x1d8284u: goto label_1d8284;
        case 0x1d8288u: goto label_1d8288;
        case 0x1d828cu: goto label_1d828c;
        case 0x1d8290u: goto label_1d8290;
        case 0x1d8294u: goto label_1d8294;
        case 0x1d8298u: goto label_1d8298;
        case 0x1d829cu: goto label_1d829c;
        case 0x1d82a0u: goto label_1d82a0;
        case 0x1d82a4u: goto label_1d82a4;
        case 0x1d82a8u: goto label_1d82a8;
        case 0x1d82acu: goto label_1d82ac;
        case 0x1d82b0u: goto label_1d82b0;
        case 0x1d82b4u: goto label_1d82b4;
        case 0x1d82b8u: goto label_1d82b8;
        case 0x1d82bcu: goto label_1d82bc;
        case 0x1d82c0u: goto label_1d82c0;
        case 0x1d82c4u: goto label_1d82c4;
        case 0x1d82c8u: goto label_1d82c8;
        case 0x1d82ccu: goto label_1d82cc;
        case 0x1d82d0u: goto label_1d82d0;
        case 0x1d82d4u: goto label_1d82d4;
        case 0x1d82d8u: goto label_1d82d8;
        case 0x1d82dcu: goto label_1d82dc;
        case 0x1d82e0u: goto label_1d82e0;
        case 0x1d82e4u: goto label_1d82e4;
        case 0x1d82e8u: goto label_1d82e8;
        case 0x1d82ecu: goto label_1d82ec;
        case 0x1d82f0u: goto label_1d82f0;
        case 0x1d82f4u: goto label_1d82f4;
        case 0x1d82f8u: goto label_1d82f8;
        case 0x1d82fcu: goto label_1d82fc;
        case 0x1d8300u: goto label_1d8300;
        case 0x1d8304u: goto label_1d8304;
        case 0x1d8308u: goto label_1d8308;
        case 0x1d830cu: goto label_1d830c;
        case 0x1d8310u: goto label_1d8310;
        case 0x1d8314u: goto label_1d8314;
        case 0x1d8318u: goto label_1d8318;
        case 0x1d831cu: goto label_1d831c;
        case 0x1d8320u: goto label_1d8320;
        case 0x1d8324u: goto label_1d8324;
        case 0x1d8328u: goto label_1d8328;
        case 0x1d832cu: goto label_1d832c;
        case 0x1d8330u: goto label_1d8330;
        case 0x1d8334u: goto label_1d8334;
        case 0x1d8338u: goto label_1d8338;
        case 0x1d833cu: goto label_1d833c;
        case 0x1d8340u: goto label_1d8340;
        case 0x1d8344u: goto label_1d8344;
        case 0x1d8348u: goto label_1d8348;
        case 0x1d834cu: goto label_1d834c;
        case 0x1d8350u: goto label_1d8350;
        case 0x1d8354u: goto label_1d8354;
        case 0x1d8358u: goto label_1d8358;
        case 0x1d835cu: goto label_1d835c;
        case 0x1d8360u: goto label_1d8360;
        case 0x1d8364u: goto label_1d8364;
        case 0x1d8368u: goto label_1d8368;
        case 0x1d836cu: goto label_1d836c;
        case 0x1d8370u: goto label_1d8370;
        case 0x1d8374u: goto label_1d8374;
        case 0x1d8378u: goto label_1d8378;
        case 0x1d837cu: goto label_1d837c;
        case 0x1d8380u: goto label_1d8380;
        case 0x1d8384u: goto label_1d8384;
        case 0x1d8388u: goto label_1d8388;
        case 0x1d838cu: goto label_1d838c;
        case 0x1d8390u: goto label_1d8390;
        case 0x1d8394u: goto label_1d8394;
        case 0x1d8398u: goto label_1d8398;
        case 0x1d839cu: goto label_1d839c;
        case 0x1d83a0u: goto label_1d83a0;
        case 0x1d83a4u: goto label_1d83a4;
        case 0x1d83a8u: goto label_1d83a8;
        case 0x1d83acu: goto label_1d83ac;
        case 0x1d83b0u: goto label_1d83b0;
        case 0x1d83b4u: goto label_1d83b4;
        case 0x1d83b8u: goto label_1d83b8;
        case 0x1d83bcu: goto label_1d83bc;
        case 0x1d83c0u: goto label_1d83c0;
        case 0x1d83c4u: goto label_1d83c4;
        case 0x1d83c8u: goto label_1d83c8;
        case 0x1d83ccu: goto label_1d83cc;
        case 0x1d83d0u: goto label_1d83d0;
        case 0x1d83d4u: goto label_1d83d4;
        case 0x1d83d8u: goto label_1d83d8;
        case 0x1d83dcu: goto label_1d83dc;
        default: break;
    }

    ctx->pc = 0x1d8258u;

label_1d8258:
    // 0x1d8258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d825c:
    // 0x1d825c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8260:
    // 0x1d8260: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d8260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d8264:
    // 0x1d8264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d8268:
    // 0x1d8268: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
label_1d826c:
    if (ctx->pc == 0x1D826Cu) {
        ctx->pc = 0x1D826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8268u;
        // 0x1d826c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8270u;
        goto label_1d8270;
    }
    ctx->pc = 0x1D8268u;
    {
        const bool branch_taken_0x1d8268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8268u;
        // 0x1d826c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8268) {
            ctx->pc = 0x1D82F8u;
            goto label_1d82f8;
        }
    }
    ctx->pc = 0x1D8270u;
label_1d8270:
    // 0x1d8270: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8274:
    // 0x1d8274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8278:
    // 0x1d8278: 0x8c44cdb8  lw          $a0, -0x3248($v0)
    ctx->pc = 0x1d8278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
label_1d827c:
    // 0x1d827c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d827cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1d8280:
    // 0x1d8280: 0xc06538a  jal         func_194E28
label_1d8284:
    if (ctx->pc == 0x1D8284u) {
        ctx->pc = 0x1D8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8280u;
        // 0x1d8284: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8288u;
        goto label_1d8288;
    }
    ctx->pc = 0x1D8280u;
    SET_GPR_U32(ctx, 31, 0x1D8288u);
    ctx->pc = 0x1D8284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8280u;
    // 0x1d8284: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E28u, 0x1D8280u, 0x1D8288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8288u;
label_1d8288:
    // 0x1d8288: 0x8e05eddc  lw          $a1, -0x1224($s0)
    ctx->pc = 0x1d8288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
label_1d828c:
    // 0x1d828c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d8290:
    // 0x1d8290: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d8290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d8294:
    // 0x1d8294: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d8298:
    // 0x1d8298: 0x60f809  jalr        $v1
label_1d829c:
    if (ctx->pc == 0x1D829Cu) {
        ctx->pc = 0x1D829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8298u;
        // 0x1d829c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82A0u;
        goto label_1d82a0;
    }
    ctx->pc = 0x1D8298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D82A0u);
        ctx->pc = 0x1D829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8298u;
        // 0x1d829c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8298u, 0x1D82A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D82A0u;
label_1d82a0:
    // 0x1d82a0: 0x8e05eddc  lw          $a1, -0x1224($s0)
    ctx->pc = 0x1d82a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
label_1d82a4:
    // 0x1d82a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d82a8:
    // 0x1d82a8: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1d82a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1d82ac:
    // 0x1d82ac: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1d82acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d82b0:
    // 0x1d82b0: 0x60f809  jalr        $v1
label_1d82b4:
    if (ctx->pc == 0x1D82B4u) {
        ctx->pc = 0x1D82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82B0u;
        // 0x1d82b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82B8u;
        goto label_1d82b8;
    }
    ctx->pc = 0x1D82B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D82B8u);
        ctx->pc = 0x1D82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82B0u;
        // 0x1d82b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D82B0u, 0x1D82B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D82B8u;
label_1d82b8:
    // 0x1d82b8: 0x8e25ecec  lw          $a1, -0x1314($s1)
    ctx->pc = 0x1d82b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962412)));
label_1d82bc:
    // 0x1d82bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d82c0:
    // 0x1d82c0: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d82c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d82c4:
    // 0x1d82c4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1d82c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d82c8:
    // 0x1d82c8: 0x60f809  jalr        $v1
label_1d82cc:
    if (ctx->pc == 0x1D82CCu) {
        ctx->pc = 0x1D82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82C8u;
        // 0x1d82cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82D0u;
        goto label_1d82d0;
    }
    ctx->pc = 0x1D82C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D82D0u);
        ctx->pc = 0x1D82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82C8u;
        // 0x1d82cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D82C8u, 0x1D82D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D82D0u;
label_1d82d0:
    // 0x1d82d0: 0x8e25ecec  lw          $a1, -0x1314($s1)
    ctx->pc = 0x1d82d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962412)));
label_1d82d4:
    // 0x1d82d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d82d8:
    // 0x1d82d8: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1d82dc:
    // 0x1d82dc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d82e0:
    // 0x1d82e0: 0x60f809  jalr        $v1
label_1d82e4:
    if (ctx->pc == 0x1D82E4u) {
        ctx->pc = 0x1D82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82E0u;
        // 0x1d82e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82E8u;
        goto label_1d82e8;
    }
    ctx->pc = 0x1D82E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D82E8u);
        ctx->pc = 0x1D82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82E0u;
        // 0x1d82e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D82E0u, 0x1D82E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D82E8u;
label_1d82e8:
    // 0x1d82e8: 0xc0772b0  jal         func_1DCAC0
label_1d82ec:
    if (ctx->pc == 0x1D82ECu) {
        ctx->pc = 0x1D82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82E8u;
        // 0x1d82ec: 0x8e04eddc  lw          $a0, -0x1224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82F0u;
        goto label_1d82f0;
    }
    ctx->pc = 0x1D82E8u;
    SET_GPR_U32(ctx, 31, 0x1D82F0u);
    ctx->pc = 0x1D82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82E8u;
    // 0x1d82ec: 0x8e04eddc  lw          $a0, -0x1224($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCAC0u, 0x1D82E8u, 0x1D82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82F0u;
label_1d82f0:
    // 0x1d82f0: 0x10000025  b           . + 4 + (0x25 << 2)
label_1d82f4:
    if (ctx->pc == 0x1D82F4u) {
        ctx->pc = 0x1D82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82F0u;
        // 0x1d82f4: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82F8u;
        goto label_1d82f8;
    }
    ctx->pc = 0x1D82F0u;
    {
        const bool branch_taken_0x1d82f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82F0u;
        // 0x1d82f4: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82f0) {
            ctx->pc = 0x1D8388u;
            goto label_1d8388;
        }
    }
    ctx->pc = 0x1D82F8u;
label_1d82f8:
    // 0x1d82f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d82fc:
    // 0x1d82fc: 0x14a20022  bne         $a1, $v0, . + 4 + (0x22 << 2)
label_1d8300:
    if (ctx->pc == 0x1D8300u) {
        ctx->pc = 0x1D8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82FCu;
        // 0x1d8300: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8304u;
        goto label_1d8304;
    }
    ctx->pc = 0x1D82FCu;
    {
        const bool branch_taken_0x1d82fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82FCu;
        // 0x1d8300: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82fc) {
            ctx->pc = 0x1D8388u;
            goto label_1d8388;
        }
    }
    ctx->pc = 0x1D8304u;
label_1d8304:
    // 0x1d8304: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8308:
    // 0x1d8308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d830c:
    // 0x1d830c: 0x8c44cdb8  lw          $a0, -0x3248($v0)
    ctx->pc = 0x1d830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
label_1d8310:
    // 0x1d8310: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d8310u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1d8314:
    // 0x1d8314: 0xc06538a  jal         func_194E28
label_1d8318:
    if (ctx->pc == 0x1D8318u) {
        ctx->pc = 0x1D8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8314u;
        // 0x1d8318: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D831Cu;
        goto label_1d831c;
    }
    ctx->pc = 0x1D8314u;
    SET_GPR_U32(ctx, 31, 0x1D831Cu);
    ctx->pc = 0x1D8318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8314u;
    // 0x1d8318: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E28u, 0x1D8314u, 0x1D831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D831Cu;
label_1d831c:
    // 0x1d831c: 0x8e05eddc  lw          $a1, -0x1224($s0)
    ctx->pc = 0x1d831cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
label_1d8320:
    // 0x1d8320: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d8324:
    // 0x1d8324: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d8324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d8328:
    // 0x1d8328: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1d8328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d832c:
    // 0x1d832c: 0x60f809  jalr        $v1
label_1d8330:
    if (ctx->pc == 0x1D8330u) {
        ctx->pc = 0x1D8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D832Cu;
        // 0x1d8330: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8334u;
        goto label_1d8334;
    }
    ctx->pc = 0x1D832Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8334u);
        ctx->pc = 0x1D8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D832Cu;
        // 0x1d8330: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D832Cu, 0x1D8334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8334u;
label_1d8334:
    // 0x1d8334: 0x8e05eddc  lw          $a1, -0x1224($s0)
    ctx->pc = 0x1d8334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
label_1d8338:
    // 0x1d8338: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d833c:
    // 0x1d833c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1d833cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1d8340:
    // 0x1d8340: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1d8340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d8344:
    // 0x1d8344: 0x60f809  jalr        $v1
label_1d8348:
    if (ctx->pc == 0x1D8348u) {
        ctx->pc = 0x1D8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8344u;
        // 0x1d8348: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D834Cu;
        goto label_1d834c;
    }
    ctx->pc = 0x1D8344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D834Cu);
        ctx->pc = 0x1D8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8344u;
        // 0x1d8348: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8344u, 0x1D834Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D834Cu;
label_1d834c:
    // 0x1d834c: 0x8e25ecec  lw          $a1, -0x1314($s1)
    ctx->pc = 0x1d834cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962412)));
label_1d8350:
    // 0x1d8350: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d8354:
    // 0x1d8354: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d8354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d8358:
    // 0x1d8358: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1d8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d835c:
    // 0x1d835c: 0x60f809  jalr        $v1
label_1d8360:
    if (ctx->pc == 0x1D8360u) {
        ctx->pc = 0x1D8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D835Cu;
        // 0x1d8360: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8364u;
        goto label_1d8364;
    }
    ctx->pc = 0x1D835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8364u);
        ctx->pc = 0x1D8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D835Cu;
        // 0x1d8360: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D835Cu, 0x1D8364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8364u;
label_1d8364:
    // 0x1d8364: 0x8e25ecec  lw          $a1, -0x1314($s1)
    ctx->pc = 0x1d8364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962412)));
label_1d8368:
    // 0x1d8368: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d836c:
    // 0x1d836c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1d836cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1d8370:
    // 0x1d8370: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1d8370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d8374:
    // 0x1d8374: 0x60f809  jalr        $v1
label_1d8378:
    if (ctx->pc == 0x1D8378u) {
        ctx->pc = 0x1D8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8374u;
        // 0x1d8378: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D837Cu;
        goto label_1d837c;
    }
    ctx->pc = 0x1D8374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D837Cu);
        ctx->pc = 0x1D8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8374u;
        // 0x1d8378: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8374u, 0x1D837Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D837Cu;
label_1d837c:
    // 0x1d837c: 0xc0772b0  jal         func_1DCAC0
label_1d8380:
    if (ctx->pc == 0x1D8380u) {
        ctx->pc = 0x1D8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D837Cu;
        // 0x1d8380: 0x8e04eddc  lw          $a0, -0x1224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8384u;
        goto label_1d8384;
    }
    ctx->pc = 0x1D837Cu;
    SET_GPR_U32(ctx, 31, 0x1D8384u);
    ctx->pc = 0x1D8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D837Cu;
    // 0x1d8380: 0x8e04eddc  lw          $a0, -0x1224($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCAC0u, 0x1D837Cu, 0x1D8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8384u;
label_1d8384:
    // 0x1d8384: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1d8384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1d8388:
    // 0x1d8388: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x1d8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
label_1d838c:
    // 0x1d838c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d838cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8390:
    // 0x1d8390: 0x26110a80  addiu       $s1, $s0, 0xA80
    ctx->pc = 0x1d8390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2688));
label_1d8394:
    // 0x1d8394: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d8394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d8398:
    // 0x1d8398: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1d839c:
    if (ctx->pc == 0x1D839Cu) {
        ctx->pc = 0x1D839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8398u;
        // 0x1d839c: 0x26100540  addiu       $s0, $s0, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83A0u;
        goto label_1d83a0;
    }
    ctx->pc = 0x1D8398u;
    {
        const bool branch_taken_0x1d8398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8398) {
            ctx->pc = 0x1D839Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8398u;
            // 0x1d839c: 0x26100540  addiu       $s0, $s0, 0x540 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D83ACu;
            goto label_1d83ac;
        }
    }
    ctx->pc = 0x1D83A0u;
label_1d83a0:
    // 0x1d83a0: 0xc06df04  jal         func_1B7C10
label_1d83a4:
    if (ctx->pc == 0x1D83A4u) {
        ctx->pc = 0x1D83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83A0u;
        // 0x1d83a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83A8u;
        goto label_1d83a8;
    }
    ctx->pc = 0x1D83A0u;
    SET_GPR_U32(ctx, 31, 0x1D83A8u);
    ctx->pc = 0x1D83A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83A0u;
    // 0x1d83a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C10u, 0x1D83A0u, 0x1D83A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D83A8u;
label_1d83a8:
    // 0x1d83a8: 0x26100540  addiu       $s0, $s0, 0x540
    ctx->pc = 0x1d83a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
label_1d83ac:
    // 0x1d83ac: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1d83acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1d83b0:
    // 0x1d83b0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_1d83b4:
    if (ctx->pc == 0x1D83B4u) {
        ctx->pc = 0x1D83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83B0u;
        // 0x1d83b4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83B8u;
        goto label_1d83b8;
    }
    ctx->pc = 0x1D83B0u;
    {
        const bool branch_taken_0x1d83b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d83b0) {
            ctx->pc = 0x1D83B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D83B0u;
            // 0x1d83b4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8398;
        }
    }
    ctx->pc = 0x1D83B8u;
label_1d83b8:
    // 0x1d83b8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1d83bc:
    // 0x1d83bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d83c0:
    // 0x1d83c0: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x1d83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
label_1d83c4:
    // 0x1d83c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d83c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d83c8:
    // 0x1d83c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d83c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d83cc:
    // 0x1d83cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d83ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d83d0:
    // 0x1d83d0: 0xac4320b0  sw          $v1, 0x20B0($v0)
    ctx->pc = 0x1d83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8368), GPR_U32(ctx, 3));
label_1d83d4:
    // 0x1d83d4: 0x3e00008  jr          $ra
label_1d83d8:
    if (ctx->pc == 0x1D83D8u) {
        ctx->pc = 0x1D83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83D4u;
        // 0x1d83d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83DCu;
        goto label_1d83dc;
    }
    ctx->pc = 0x1D83D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83D4u;
        // 0x1d83d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D83DCu;
label_1d83dc:
    // 0x1d83dc: 0x0  nop
    ctx->pc = 0x1d83dcu;
    // NOP
    ctx->pc = 0x1d83e0u;
}
