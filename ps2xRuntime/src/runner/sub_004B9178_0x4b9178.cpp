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

// Function: sub_004B9178
// Address: 0x4b9178 - 0x4b92c0
void sub_004B9178_0x4b9178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9178_0x4b9178");
#endif

    switch (ctx->pc) {
        case 0x4b91a0u: goto label_4b91a0;
        case 0x4b91bcu: goto label_4b91bc;
        case 0x4b91d4u: goto label_4b91d4;
        case 0x4b9218u: goto label_4b9218;
        case 0x4b9228u: goto label_4b9228;
        case 0x4b9248u: goto label_4b9248;
        case 0x4b9268u: goto label_4b9268;
        case 0x4b9278u: goto label_4b9278;
        case 0x4b9294u: goto label_4b9294;
        default: break;
    }

    ctx->pc = 0x4b9178u;

    // 0x4b9178: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4b9178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4b917c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b9180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b9180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9184: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x4b9184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x4b9188: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4b9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4b918c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b9190: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4b9190u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x4b9194: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4b9194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4b9198: 0xc12eb38  jal         func_4BACE0
    ctx->pc = 0x4B9198u;
    SET_GPR_U32(ctx, 31, 0x4B91A0u);
    ctx->pc = 0x4B919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9198u;
    // 0x4b919c: 0xffb40070  sd          $s4, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BACE0u, 0x4B9198u, 0x4B91A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B91A0u;
label_4b91a0:
    // 0x4b91a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b91a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b91a4: 0x8e721974  lw          $s2, 0x1974($s3)
    ctx->pc = 0x4b91a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b91a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b91ac: 0x1242003c  beq         $s2, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x4B91ACu;
    {
        const bool branch_taken_0x4b91ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B91ACu;
        // 0x4b91b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b91ac) {
            ctx->pc = 0x4B92A0u;
            goto label_4b92a0;
        }
    }
    ctx->pc = 0x4B91B4u;
    // 0x4b91b4: 0xc12f8d8  jal         func_4BE360
    ctx->pc = 0x4B91B4u;
    SET_GPR_U32(ctx, 31, 0x4B91BCu);
    ctx->pc = 0x4B91B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B91B4u;
    // 0x4b91b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE360u, 0x4B91B4u, 0x4B91BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B91BCu;
label_4b91bc:
    // 0x4b91bc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4B91BCu;
    {
        const bool branch_taken_0x4b91bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B91BCu;
        // 0x4b91c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b91bc) {
            ctx->pc = 0x4B92A0u;
            goto label_4b92a0;
        }
    }
    ctx->pc = 0x4B91C4u;
    // 0x4b91c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4b91c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b91c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b91c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b91cc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B91CCu;
    SET_GPR_U32(ctx, 31, 0x4B91D4u);
    ctx->pc = 0x4B91D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B91CCu;
    // 0x4b91d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B91CCu, 0x4B91D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B91D4u;
label_4b91d4:
    // 0x4b91d4: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4B91D4u;
    {
        const bool branch_taken_0x4b91d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4B91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B91D4u;
        // 0x4b91d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b91d4) {
            ctx->pc = 0x4B92A0u;
            goto label_4b92a0;
        }
    }
    ctx->pc = 0x4B91DCu;
    // 0x4b91dc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b91e0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4b91e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x4b91e4: 0x24420f60  addiu       $v0, $v0, 0xF60
    ctx->pc = 0x4b91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
    // 0x4b91e8: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x4b91e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x4b91ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b91f0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B91F0u;
    {
        const bool branch_taken_0x4b91f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B91F0u;
        // 0x4b91f4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b91f0) {
            ctx->pc = 0x4B9208u;
            goto label_4b9208;
        }
    }
    ctx->pc = 0x4B91F8u;
    // 0x4b91f8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b91f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b91fc: 0xdc220f68  ld          $v0, 0xF68($at)
    ctx->pc = 0x4b91fcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590F68u));
    // 0x4b9200: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9200u;
    {
        const bool branch_taken_0x4b9200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9200u;
        // 0x4b9204: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9200) {
            ctx->pc = 0x4B921Cu;
            goto label_4b921c;
        }
    }
    ctx->pc = 0x4B9208u;
label_4b9208:
    // 0x4b9208: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b920c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b920cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9210: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B9210u;
    SET_GPR_U32(ctx, 31, 0x4B9218u);
    ctx->pc = 0x4B9214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9210u;
    // 0x4b9214: 0xdc450ed8  ld          $a1, 0xED8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 3800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B9210u, 0x4B9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9218u;
label_4b9218:
    // 0x4b9218: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b9218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_4b921c:
    // 0x4b921c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b921cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9220: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9220u;
    SET_GPR_U32(ctx, 31, 0x4B9228u);
    ctx->pc = 0x4B9224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9220u;
    // 0x4b9224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9220u, 0x4B9228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9228u;
label_4b9228:
    // 0x4b9228: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B9228u;
    {
        const bool branch_taken_0x4b9228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9228u;
        // 0x4b922c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9228) {
            ctx->pc = 0x4B9250u;
            goto label_4b9250;
        }
    }
    ctx->pc = 0x4B9230u;
    // 0x4b9230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b9230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9234: 0x8e631974  lw          $v1, 0x1974($s3)
    ctx->pc = 0x4b9234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b9238: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B9238u;
    {
        const bool branch_taken_0x4b9238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9238u;
        // 0x4b923c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9238) {
            ctx->pc = 0x4B9260u;
            goto label_4b9260;
        }
    }
    ctx->pc = 0x4B9240u;
    // 0x4b9240: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9240u;
    SET_GPR_U32(ctx, 31, 0x4B9248u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9240u, 0x4B9248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9248u;
label_4b9248:
    // 0x4b9248: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4B9248u;
    {
        const bool branch_taken_0x4b9248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9248u;
        // 0x4b924c: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9248) {
            ctx->pc = 0x4B927Cu;
            goto label_4b927c;
        }
    }
    ctx->pc = 0x4B9250u;
label_4b9250:
    // 0x4b9250: 0x8e621974  lw          $v0, 0x1974($s3)
    ctx->pc = 0x4b9250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b9254: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4b9254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9258: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9258u;
    {
        const bool branch_taken_0x4b9258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4B925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9258u;
        // 0x4b925c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9258) {
            ctx->pc = 0x4B9270u;
            goto label_4b9270;
        }
    }
    ctx->pc = 0x4B9260u;
label_4b9260:
    // 0x4b9260: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9260u;
    SET_GPR_U32(ctx, 31, 0x4B9268u);
    ctx->pc = 0x4B9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9260u;
    // 0x4b9264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9260u, 0x4B9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9268u;
label_4b9268:
    // 0x4b9268: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9268u;
    {
        const bool branch_taken_0x4b9268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9268u;
        // 0x4b926c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9268) {
            ctx->pc = 0x4B9284u;
            goto label_4b9284;
        }
    }
    ctx->pc = 0x4B9270u;
label_4b9270:
    // 0x4b9270: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9270u;
    SET_GPR_U32(ctx, 31, 0x4B9278u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9270u, 0x4B9278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9278u;
label_4b9278:
    // 0x4b9278: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x4b9278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_4b927c:
    // 0x4b927c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b927cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b9280: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b9280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b9284:
    // 0x4b9284: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9284u;
    {
        const bool branch_taken_0x4b9284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9284) {
            ctx->pc = 0x4B9288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B9284u;
            // 0x4b9288: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B92A0u;
            goto label_4b92a0;
        }
    }
    ctx->pc = 0x4B928Cu;
    // 0x4b928c: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B928Cu;
    SET_GPR_U32(ctx, 31, 0x4B9294u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B928Cu, 0x4B9294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9294u;
label_4b9294:
    // 0x4b9294: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b9294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9298: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b929c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x4b929cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4b92a0:
    // 0x4b92a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4b92a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b92a4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4b92a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b92a8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x4b92a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b92ac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4b92acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b92b0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b92b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b92b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b92b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b92b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B92B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B92B8u;
        // 0x4b92bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B92B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B92C0u;
}
