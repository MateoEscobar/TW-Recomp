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

// Function: sub_003C1250
// Address: 0x3c1250 - 0x3c1318
void sub_003C1250_0x3c1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1250_0x3c1250");
#endif

    switch (ctx->pc) {
        case 0x3c1250u: goto label_3c1250;
        case 0x3c1254u: goto label_3c1254;
        case 0x3c1258u: goto label_3c1258;
        case 0x3c125cu: goto label_3c125c;
        case 0x3c1260u: goto label_3c1260;
        case 0x3c1264u: goto label_3c1264;
        case 0x3c1268u: goto label_3c1268;
        case 0x3c126cu: goto label_3c126c;
        case 0x3c1270u: goto label_3c1270;
        case 0x3c1274u: goto label_3c1274;
        case 0x3c1278u: goto label_3c1278;
        case 0x3c127cu: goto label_3c127c;
        case 0x3c1280u: goto label_3c1280;
        case 0x3c1284u: goto label_3c1284;
        case 0x3c1288u: goto label_3c1288;
        case 0x3c128cu: goto label_3c128c;
        case 0x3c1290u: goto label_3c1290;
        case 0x3c1294u: goto label_3c1294;
        case 0x3c1298u: goto label_3c1298;
        case 0x3c129cu: goto label_3c129c;
        case 0x3c12a0u: goto label_3c12a0;
        case 0x3c12a4u: goto label_3c12a4;
        case 0x3c12a8u: goto label_3c12a8;
        case 0x3c12acu: goto label_3c12ac;
        case 0x3c12b0u: goto label_3c12b0;
        case 0x3c12b4u: goto label_3c12b4;
        case 0x3c12b8u: goto label_3c12b8;
        case 0x3c12bcu: goto label_3c12bc;
        case 0x3c12c0u: goto label_3c12c0;
        case 0x3c12c4u: goto label_3c12c4;
        case 0x3c12c8u: goto label_3c12c8;
        case 0x3c12ccu: goto label_3c12cc;
        case 0x3c12d0u: goto label_3c12d0;
        case 0x3c12d4u: goto label_3c12d4;
        case 0x3c12d8u: goto label_3c12d8;
        case 0x3c12dcu: goto label_3c12dc;
        case 0x3c12e0u: goto label_3c12e0;
        case 0x3c12e4u: goto label_3c12e4;
        case 0x3c12e8u: goto label_3c12e8;
        case 0x3c12ecu: goto label_3c12ec;
        case 0x3c12f0u: goto label_3c12f0;
        case 0x3c12f4u: goto label_3c12f4;
        case 0x3c12f8u: goto label_3c12f8;
        case 0x3c12fcu: goto label_3c12fc;
        case 0x3c1300u: goto label_3c1300;
        case 0x3c1304u: goto label_3c1304;
        case 0x3c1308u: goto label_3c1308;
        case 0x3c130cu: goto label_3c130c;
        case 0x3c1310u: goto label_3c1310;
        case 0x3c1314u: goto label_3c1314;
        default: break;
    }

    ctx->pc = 0x3c1250u;

label_3c1250:
    // 0x3c1250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c1250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3c1254:
    // 0x3c1254: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c1254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3c1258:
    // 0x3c1258: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c1258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3c125c:
    // 0x3c125c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c125cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1260:
    // 0x3c1260: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c1260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3c1264:
    // 0x3c1264: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c1264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1268:
    // 0x3c1268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c1268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c126c:
    // 0x3c126c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1270:
    // 0x3c1270: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c1270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c1274:
    // 0x3c1274: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c1274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c1278:
    // 0x3c1278: 0x40f809  jalr        $v0
label_3c127c:
    if (ctx->pc == 0x3C127Cu) {
        ctx->pc = 0x3C127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1278u;
        // 0x3c127c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1280u;
        goto label_3c1280;
    }
    ctx->pc = 0x3C1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1280u);
        ctx->pc = 0x3C127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1278u;
        // 0x3c127c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1278u, 0x3C1280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1280u;
label_3c1280:
    // 0x3c1280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c1280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1284:
    // 0x3c1284: 0xc0ea14c  jal         func_3A8530
label_3c1288:
    if (ctx->pc == 0x3C1288u) {
        ctx->pc = 0x3C1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1284u;
        // 0x3c1288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C128Cu;
        goto label_3c128c;
    }
    ctx->pc = 0x3C1284u;
    SET_GPR_U32(ctx, 31, 0x3C128Cu);
    ctx->pc = 0x3C1288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1284u;
    // 0x3c1288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C1284u, 0x3C128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C128Cu;
label_3c128c:
    // 0x3c128c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1290:
    // 0x3c1290: 0xc0ea12a  jal         func_3A84A8
label_3c1294:
    if (ctx->pc == 0x3C1294u) {
        ctx->pc = 0x3C1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1290u;
        // 0x3c1294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1298u;
        goto label_3c1298;
    }
    ctx->pc = 0x3C1290u;
    SET_GPR_U32(ctx, 31, 0x3C1298u);
    ctx->pc = 0x3C1294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1290u;
    // 0x3c1294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C1290u, 0x3C1298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1298u;
label_3c1298:
    // 0x3c1298: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c1298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c129c:
    // 0x3c129c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c12a0:
    // 0x3c12a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c12a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c12a4:
    // 0x3c12a4: 0xc0ea12a  jal         func_3A84A8
label_3c12a8:
    if (ctx->pc == 0x3C12A8u) {
        ctx->pc = 0x3C12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12A4u;
        // 0x3c12a8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12ACu;
        goto label_3c12ac;
    }
    ctx->pc = 0x3C12A4u;
    SET_GPR_U32(ctx, 31, 0x3C12ACu);
    ctx->pc = 0x3C12A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C12A4u;
    // 0x3c12a8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C12A4u, 0x3C12ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C12ACu;
label_3c12ac:
    // 0x3c12ac: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c12acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c12b0:
    // 0x3c12b0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3c12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3c12b4:
    // 0x3c12b4: 0x34420081  ori         $v0, $v0, 0x81
    ctx->pc = 0x3c12b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)129);
label_3c12b8:
    // 0x3c12b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c12bc:
    // 0x3c12bc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c12bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c12c0:
    // 0x3c12c0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3c12c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3c12c4:
    // 0x3c12c4: 0xc0e858c  jal         func_3A1630
label_3c12c8:
    if (ctx->pc == 0x3C12C8u) {
        ctx->pc = 0x3C12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12C4u;
        // 0x3c12c8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12CCu;
        goto label_3c12cc;
    }
    ctx->pc = 0x3C12C4u;
    SET_GPR_U32(ctx, 31, 0x3C12CCu);
    ctx->pc = 0x3C12C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C12C4u;
    // 0x3c12c8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C12C4u, 0x3C12CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C12CCu;
label_3c12cc:
    // 0x3c12cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c12ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c12d0:
    // 0x3c12d0: 0xc0e9132  jal         func_3A44C8
label_3c12d4:
    if (ctx->pc == 0x3C12D4u) {
        ctx->pc = 0x3C12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12D0u;
        // 0x3c12d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12D8u;
        goto label_3c12d8;
    }
    ctx->pc = 0x3C12D0u;
    SET_GPR_U32(ctx, 31, 0x3C12D8u);
    ctx->pc = 0x3C12D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C12D0u;
    // 0x3c12d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C12D0u, 0x3C12D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C12D8u;
label_3c12d8:
    // 0x3c12d8: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3c12d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c12dc:
    // 0x3c12dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c12dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c12e0:
    // 0x3c12e0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c12e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c12e4:
    // 0x3c12e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c12e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c12e8:
    // 0x3c12e8: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x3c12e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
label_3c12ec:
    // 0x3c12ec: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3c12ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3c12f0:
    // 0x3c12f0: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3c12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3c12f4:
    // 0x3c12f4: 0xc0e8dee  jal         func_3A37B8
label_3c12f8:
    if (ctx->pc == 0x3C12F8u) {
        ctx->pc = 0x3C12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12F4u;
        // 0x3c12f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C12FCu;
        goto label_3c12fc;
    }
    ctx->pc = 0x3C12F4u;
    SET_GPR_U32(ctx, 31, 0x3C12FCu);
    ctx->pc = 0x3C12F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C12F4u;
    // 0x3c12f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3C12F4u, 0x3C12FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C12FCu;
label_3c12fc:
    // 0x3c12fc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3c12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3c1300:
    // 0x3c1300: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c1300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c1304:
    // 0x3c1304: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c1304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c1308:
    // 0x3c1308: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c1308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c130c:
    // 0x3c130c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1310:
    // 0x3c1310: 0x3e00008  jr          $ra
label_3c1314:
    if (ctx->pc == 0x3C1314u) {
        ctx->pc = 0x3C1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1310u;
        // 0x3c1314: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1318u;
        goto label_fallthrough_0x3c1310;
    }
    ctx->pc = 0x3C1310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1310u;
        // 0x3c1314: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c1310:
    ctx->pc = 0x3C1318u;
}
