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

// Function: sub_004E8270
// Address: 0x4e8270 - 0x4e82f0
void sub_004E8270_0x4e8270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8270_0x4e8270");
#endif

    switch (ctx->pc) {
        case 0x4e8270u: goto label_4e8270;
        case 0x4e8274u: goto label_4e8274;
        case 0x4e8278u: goto label_4e8278;
        case 0x4e827cu: goto label_4e827c;
        case 0x4e8280u: goto label_4e8280;
        case 0x4e8284u: goto label_4e8284;
        case 0x4e8288u: goto label_4e8288;
        case 0x4e828cu: goto label_4e828c;
        case 0x4e8290u: goto label_4e8290;
        case 0x4e8294u: goto label_4e8294;
        case 0x4e8298u: goto label_4e8298;
        case 0x4e829cu: goto label_4e829c;
        case 0x4e82a0u: goto label_4e82a0;
        case 0x4e82a4u: goto label_4e82a4;
        case 0x4e82a8u: goto label_4e82a8;
        case 0x4e82acu: goto label_4e82ac;
        case 0x4e82b0u: goto label_4e82b0;
        case 0x4e82b4u: goto label_4e82b4;
        case 0x4e82b8u: goto label_4e82b8;
        case 0x4e82bcu: goto label_4e82bc;
        case 0x4e82c0u: goto label_4e82c0;
        case 0x4e82c4u: goto label_4e82c4;
        case 0x4e82c8u: goto label_4e82c8;
        case 0x4e82ccu: goto label_4e82cc;
        case 0x4e82d0u: goto label_4e82d0;
        case 0x4e82d4u: goto label_4e82d4;
        case 0x4e82d8u: goto label_4e82d8;
        case 0x4e82dcu: goto label_4e82dc;
        case 0x4e82e0u: goto label_4e82e0;
        case 0x4e82e4u: goto label_4e82e4;
        case 0x4e82e8u: goto label_4e82e8;
        case 0x4e82ecu: goto label_4e82ec;
        default: break;
    }

    ctx->pc = 0x4e8270u;

label_4e8270:
    // 0x4e8270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e8270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e8274:
    // 0x4e8274: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e8274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e8278:
    // 0x4e8278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e8278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e827c:
    // 0x4e827c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e827cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8280:
    // 0x4e8280: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e8280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e8284:
    // 0x4e8284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e8284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e8288:
    // 0x4e8288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e828c:
    // 0x4e828c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e8290:
    if (ctx->pc == 0x4E8290u) {
        ctx->pc = 0x4E8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E828Cu;
        // 0x4e8290: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8294u;
        goto label_4e8294;
    }
    ctx->pc = 0x4E828Cu;
    {
        const bool branch_taken_0x4e828c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E828Cu;
        // 0x4e8290: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e828c) {
            ctx->pc = 0x4E82D4u;
            goto label_4e82d4;
        }
    }
    ctx->pc = 0x4E8294u;
label_4e8294:
    // 0x4e8294: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e8294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8298:
    // 0x4e8298: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e8298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e829c:
    // 0x4e829c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e829cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e82a0:
    // 0x4e82a0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e82a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e82a4:
    // 0x4e82a4: 0x60f809  jalr        $v1
label_4e82a8:
    if (ctx->pc == 0x4E82A8u) {
        ctx->pc = 0x4E82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E82A4u;
        // 0x4e82a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E82ACu;
        goto label_4e82ac;
    }
    ctx->pc = 0x4E82A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E82ACu);
        ctx->pc = 0x4E82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E82A4u;
        // 0x4e82a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E82A4u, 0x4E82ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E82ACu;
label_4e82ac:
    // 0x4e82ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e82acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e82b0:
    // 0x4e82b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e82b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e82b4:
    // 0x4e82b4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e82b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e82b8:
    // 0x4e82b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e82b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e82bc:
    // 0x4e82bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e82bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e82c0:
    // 0x4e82c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e82c4:
    // 0x4e82c4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e82c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e82c8:
    // 0x4e82c8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e82cc:
    // 0x4e82cc: 0x60f809  jalr        $v1
label_4e82d0:
    if (ctx->pc == 0x4E82D0u) {
        ctx->pc = 0x4E82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E82CCu;
        // 0x4e82d0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E82D4u;
        goto label_4e82d4;
    }
    ctx->pc = 0x4E82CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E82D4u);
        ctx->pc = 0x4E82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E82CCu;
        // 0x4e82d0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E82CCu, 0x4E82D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E82D4u;
label_4e82d4:
    // 0x4e82d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e82d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e82d8:
    // 0x4e82d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e82d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e82dc:
    // 0x4e82dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e82dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e82e0:
    // 0x4e82e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e82e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e82e4:
    // 0x4e82e4: 0x3e00008  jr          $ra
label_4e82e8:
    if (ctx->pc == 0x4E82E8u) {
        ctx->pc = 0x4E82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E82E4u;
        // 0x4e82e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E82ECu;
        goto label_4e82ec;
    }
    ctx->pc = 0x4E82E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E82E4u;
        // 0x4e82e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E82E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E82ECu;
label_4e82ec:
    // 0x4e82ec: 0x0  nop
    ctx->pc = 0x4e82ecu;
    // NOP
    ctx->pc = 0x4e82f0u;
}
