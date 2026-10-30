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

// Function: sub_001C8658
// Address: 0x1c8658 - 0x1c8710
void sub_001C8658_0x1c8658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8658_0x1c8658");
#endif

    switch (ctx->pc) {
        case 0x1c868cu: goto label_1c868c;
        case 0x1c86e8u: goto label_1c86e8;
        default: break;
    }

    ctx->pc = 0x1c8658u;

    // 0x1c8658: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c8658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c865c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c8660: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c8660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c8664: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x1c8664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8668: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c8668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c866c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c866cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8670: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c8670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c8674: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c8674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8678: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1c8678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c867c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c867cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1c8680: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8684: 0xc139d26  jal         func_4E7498
    ctx->pc = 0x1C8684u;
    SET_GPR_U32(ctx, 31, 0x1C868Cu);
    ctx->pc = 0x1C8688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8684u;
    // 0x1c8688: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7498u, 0x1C8684u, 0x1C868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C868Cu;
label_1c868c:
    // 0x1c868c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c8690: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c8690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8694: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c8694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8698: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8698u;
    {
        const bool branch_taken_0x1c8698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8698u;
        // 0x1c869c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8698) {
            ctx->pc = 0x1C86B4u;
            goto label_1c86b4;
        }
    }
    ctx->pc = 0x1C86A0u;
    // 0x1c86a0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1c86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c86a4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c86a8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1c86a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c86ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C86ACu;
    {
        const bool branch_taken_0x1c86ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c86ac) {
            ctx->pc = 0x1C86B8u;
            goto label_1c86b8;
        }
    }
    ctx->pc = 0x1C86B4u;
label_1c86b4:
    // 0x1c86b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c86b8:
    // 0x1c86b8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C86B8u;
    {
        const bool branch_taken_0x1c86b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86B8u;
        // 0x1c86bc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86b8) {
            ctx->pc = 0x1C86F0u;
            goto label_1c86f0;
        }
    }
    ctx->pc = 0x1C86C0u;
    // 0x1c86c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c86c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c86c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c86c8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c86c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c86cc: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1c86ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1c86d0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c86d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c86d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c86d8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1c86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1c86dc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1c86dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1c86e0: 0xc139e80  jal         func_4E7A00
    ctx->pc = 0x1C86E0u;
    SET_GPR_U32(ctx, 31, 0x1C86E8u);
    ctx->pc = 0x1C86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86E0u;
    // 0x1c86e4: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7A00u, 0x1C86E0u, 0x1C86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86E8u;
label_1c86e8:
    // 0x1c86e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c86ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1c86f0:
    // 0x1c86f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c86f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c86f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c86f8: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x1c86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x1c86fc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c86fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8700: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c8700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8704: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c8704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c8708: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8708u;
        // 0x1c870c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8710u;
}
