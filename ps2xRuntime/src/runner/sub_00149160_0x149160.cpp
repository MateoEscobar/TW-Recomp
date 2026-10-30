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

// Function: sub_00149160
// Address: 0x149160 - 0x149248
void sub_00149160_0x149160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149160_0x149160");
#endif

    switch (ctx->pc) {
        case 0x149160u: goto label_149160;
        case 0x149164u: goto label_149164;
        case 0x149168u: goto label_149168;
        case 0x14916cu: goto label_14916c;
        case 0x149170u: goto label_149170;
        case 0x149174u: goto label_149174;
        case 0x149178u: goto label_149178;
        case 0x14917cu: goto label_14917c;
        case 0x149180u: goto label_149180;
        case 0x149184u: goto label_149184;
        case 0x149188u: goto label_149188;
        case 0x14918cu: goto label_14918c;
        case 0x149190u: goto label_149190;
        case 0x149194u: goto label_149194;
        case 0x149198u: goto label_149198;
        case 0x14919cu: goto label_14919c;
        case 0x1491a0u: goto label_1491a0;
        case 0x1491a4u: goto label_1491a4;
        case 0x1491a8u: goto label_1491a8;
        case 0x1491acu: goto label_1491ac;
        case 0x1491b0u: goto label_1491b0;
        case 0x1491b4u: goto label_1491b4;
        case 0x1491b8u: goto label_1491b8;
        case 0x1491bcu: goto label_1491bc;
        case 0x1491c0u: goto label_1491c0;
        case 0x1491c4u: goto label_1491c4;
        case 0x1491c8u: goto label_1491c8;
        case 0x1491ccu: goto label_1491cc;
        case 0x1491d0u: goto label_1491d0;
        case 0x1491d4u: goto label_1491d4;
        case 0x1491d8u: goto label_1491d8;
        case 0x1491dcu: goto label_1491dc;
        case 0x1491e0u: goto label_1491e0;
        case 0x1491e4u: goto label_1491e4;
        case 0x1491e8u: goto label_1491e8;
        case 0x1491ecu: goto label_1491ec;
        case 0x1491f0u: goto label_1491f0;
        case 0x1491f4u: goto label_1491f4;
        case 0x1491f8u: goto label_1491f8;
        case 0x1491fcu: goto label_1491fc;
        case 0x149200u: goto label_149200;
        case 0x149204u: goto label_149204;
        case 0x149208u: goto label_149208;
        case 0x14920cu: goto label_14920c;
        case 0x149210u: goto label_149210;
        case 0x149214u: goto label_149214;
        case 0x149218u: goto label_149218;
        case 0x14921cu: goto label_14921c;
        case 0x149220u: goto label_149220;
        case 0x149224u: goto label_149224;
        case 0x149228u: goto label_149228;
        case 0x14922cu: goto label_14922c;
        case 0x149230u: goto label_149230;
        case 0x149234u: goto label_149234;
        case 0x149238u: goto label_149238;
        case 0x14923cu: goto label_14923c;
        case 0x149240u: goto label_149240;
        case 0x149244u: goto label_149244;
        default: break;
    }

    ctx->pc = 0x149160u;

label_149160:
    // 0x149160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_149164:
    // 0x149164: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x149164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_149168:
    // 0x149168: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x149168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_14916c:
    // 0x14916c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14916cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_149170:
    // 0x149170: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x149170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_149174:
    // 0x149174: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x149174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_149178:
    // 0x149178: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x149178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14917c:
    // 0x14917c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_149180:
    // 0x149180: 0xc10c978  jal         func_4325E0
label_149184:
    if (ctx->pc == 0x149184u) {
        ctx->pc = 0x149184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149180u;
        // 0x149184: 0x2484a628  addiu       $a0, $a0, -0x59D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149188u;
        goto label_149188;
    }
    ctx->pc = 0x149180u;
    SET_GPR_U32(ctx, 31, 0x149188u);
    ctx->pc = 0x149184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149180u;
    // 0x149184: 0x2484a628  addiu       $a0, $a0, -0x59D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x149180u, 0x149188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149188u;
label_149188:
    // 0x149188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14918c:
    // 0x14918c: 0xc110644  jal         func_441910
label_149190:
    if (ctx->pc == 0x149190u) {
        ctx->pc = 0x149190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14918Cu;
        // 0x149190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149194u;
        goto label_149194;
    }
    ctx->pc = 0x14918Cu;
    SET_GPR_U32(ctx, 31, 0x149194u);
    ctx->pc = 0x149190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14918Cu;
    // 0x149190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441910u, 0x14918Cu, 0x149194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149194u;
label_149194:
    // 0x149194: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_149198:
    // 0x149198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x149198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14919c:
    // 0x14919c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1491a0:
    // 0x1491a0: 0xc1107d6  jal         func_441F58
label_1491a4:
    if (ctx->pc == 0x1491A4u) {
        ctx->pc = 0x1491A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491A0u;
        // 0x1491a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1491A8u;
        goto label_1491a8;
    }
    ctx->pc = 0x1491A0u;
    SET_GPR_U32(ctx, 31, 0x1491A8u);
    ctx->pc = 0x1491A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491A0u;
    // 0x1491a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441F58u, 0x1491A0u, 0x1491A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491A8u;
label_1491a8:
    // 0x1491a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1491a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1491ac:
    // 0x1491ac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1491acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1491b0:
    // 0x1491b0: 0xc110746  jal         func_441D18
label_1491b4:
    if (ctx->pc == 0x1491B4u) {
        ctx->pc = 0x1491B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491B0u;
        // 0x1491b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1491B8u;
        goto label_1491b8;
    }
    ctx->pc = 0x1491B0u;
    SET_GPR_U32(ctx, 31, 0x1491B8u);
    ctx->pc = 0x1491B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491B0u;
    // 0x1491b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441D18u, 0x1491B0u, 0x1491B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491B8u;
label_1491b8:
    // 0x1491b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1491b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1491bc:
    // 0x1491bc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1491bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1491c0:
    // 0x1491c0: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1491c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1491c4:
    // 0x1491c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1491c8:
    // 0x1491c8: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x1491c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1491cc:
    // 0x1491cc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1491ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1491d0:
    // 0x1491d0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1491d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1491d4:
    // 0x1491d4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1491d8:
    // 0x1491d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1491dc:
    // 0x1491dc: 0x24090098  addiu       $t1, $zero, 0x98
    ctx->pc = 0x1491dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1491e0:
    // 0x1491e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1491e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1491e4:
    // 0x1491e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1491e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1491e8:
    // 0x1491e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1491ec:
    // 0x1491ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1491ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1491f0:
    // 0x1491f0: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1491f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1491f4:
    // 0x1491f4: 0x2508a5f0  addiu       $t0, $t0, -0x5A10
    ctx->pc = 0x1491f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944240));
label_1491f8:
    // 0x1491f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1491f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1491fc:
    // 0x1491fc: 0x40f809  jalr        $v0
label_149200:
    if (ctx->pc == 0x149200u) {
        ctx->pc = 0x149200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491FCu;
        // 0x149200: 0x24a5a648  addiu       $a1, $a1, -0x59B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149204u;
        goto label_149204;
    }
    ctx->pc = 0x1491FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149204u);
        ctx->pc = 0x149200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491FCu;
        // 0x149200: 0x24a5a648  addiu       $a1, $a1, -0x59B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1491FCu, 0x149204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x149204u;
label_149204:
    // 0x149204: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x149204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_149208:
    // 0x149208: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14920c:
    // 0x14920c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14920cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_149210:
    // 0x149210: 0xc1107d6  jal         func_441F58
label_149214:
    if (ctx->pc == 0x149214u) {
        ctx->pc = 0x149214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149210u;
        // 0x149214: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149218u;
        goto label_149218;
    }
    ctx->pc = 0x149210u;
    SET_GPR_U32(ctx, 31, 0x149218u);
    ctx->pc = 0x149214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149210u;
    // 0x149214: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441F58u, 0x149210u, 0x149218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149218u;
label_149218:
    // 0x149218: 0xc1106e8  jal         func_441BA0
label_14921c:
    if (ctx->pc == 0x14921Cu) {
        ctx->pc = 0x14921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149218u;
        // 0x14921c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149220u;
        goto label_149220;
    }
    ctx->pc = 0x149218u;
    SET_GPR_U32(ctx, 31, 0x149220u);
    ctx->pc = 0x14921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149218u;
    // 0x14921c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441BA0u, 0x149218u, 0x149220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149220u;
label_149220:
    // 0x149220: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x149220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_149224:
    // 0x149224: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x149224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_149228:
    // 0x149228: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x149228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14922c:
    // 0x14922c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14922cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_149230:
    // 0x149230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_149234:
    // 0x149234: 0x3e00008  jr          $ra
label_149238:
    if (ctx->pc == 0x149238u) {
        ctx->pc = 0x149238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149234u;
        // 0x149238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14923Cu;
        goto label_14923c;
    }
    ctx->pc = 0x149234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149234u;
        // 0x149238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14923Cu;
label_14923c:
    // 0x14923c: 0x0  nop
    ctx->pc = 0x14923cu;
    // NOP
label_149240:
    // 0x149240: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_149244:
    // 0x149244: 0x0  nop
    ctx->pc = 0x149244u;
    // NOP
    ctx->pc = 0x149248u;
}
