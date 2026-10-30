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

// Function: sub_0045E658
// Address: 0x45e658 - 0x45e6f0
void sub_0045E658_0x45e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E658_0x45e658");
#endif

    switch (ctx->pc) {
        case 0x45e688u: goto label_45e688;
        case 0x45e6a0u: goto label_45e6a0;
        default: break;
    }

    ctx->pc = 0x45e658u;

    // 0x45e658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45e658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45e65c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x45e65cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45e664: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x45e664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45e668: 0x8cc90030  lw          $t1, 0x30($a2)
    ctx->pc = 0x45e668u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x45e66c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45e670: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x45e670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x45e674: 0x15220006  bne         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x45E674u;
    {
        const bool branch_taken_0x45e674 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x45E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E674u;
        // 0x45e678: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e674) {
            ctx->pc = 0x45E690u;
            goto label_45e690;
        }
    }
    ctx->pc = 0x45E67Cu;
    // 0x45e67c: 0x1073018  mult        $a2, $t0, $a3
    ctx->pc = 0x45e67cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x45e680: 0xc1142b0  jal         func_450AC0
    ctx->pc = 0x45E680u;
    SET_GPR_U32(ctx, 31, 0x45E688u);
    ctx->pc = 0x45E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45E680u;
    // 0x45e684: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x450AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450AC0u, 0x45E680u, 0x45E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E688u;
label_45e688:
    // 0x45e688: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x45E688u;
    {
        const bool branch_taken_0x45e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E688u;
        // 0x45e68c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e688) {
            ctx->pc = 0x45E6E4u;
            goto label_45e6e4;
        }
    }
    ctx->pc = 0x45E690u;
label_45e690:
    // 0x45e690: 0x19000014  blez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x45E690u;
    {
        const bool branch_taken_0x45e690 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x45E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E690u;
        // 0x45e694: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e690) {
            ctx->pc = 0x45E6E4u;
            goto label_45e6e4;
        }
    }
    ctx->pc = 0x45E698u;
    // 0x45e698: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x45e698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e69c: 0x0  nop
    ctx->pc = 0x45e69cu;
    // NOP
label_45e6a0:
    // 0x45e6a0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x45e6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e6a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x45e6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x45e6a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45e6ac: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x45e6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x45e6b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e6b4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45e6b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x45e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x45e6bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e6c0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45e6c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x45e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x45e6c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e6cc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45e6d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x45e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x45e6d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x45e6d8: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x45E6D8u;
    {
        const bool branch_taken_0x45e6d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x45E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E6D8u;
        // 0x45e6dc: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e6d8) {
            ctx->pc = 0x45E6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e6a0;
        }
    }
    ctx->pc = 0x45E6E0u;
    // 0x45e6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45e6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_45e6e4:
    // 0x45e6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x45E6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E6E4u;
        // 0x45e6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E6ECu;
    // 0x45e6ec: 0x0  nop
    ctx->pc = 0x45e6ecu;
    // NOP
    ctx->pc = 0x45e6f0u;
}
