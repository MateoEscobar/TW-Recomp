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

// Function: sub_0042E5D0
// Address: 0x42e5d0 - 0x42e6b8
void sub_0042E5D0_0x42e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042E5D0_0x42e5d0");
#endif

    switch (ctx->pc) {
        case 0x42e5f0u: goto label_42e5f0;
        case 0x42e60cu: goto label_42e60c;
        case 0x42e63cu: goto label_42e63c;
        case 0x42e658u: goto label_42e658;
        default: break;
    }

    ctx->pc = 0x42e5d0u;

    // 0x42e5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42e5d4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x42e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x42e5d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42e5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42e5dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42e5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42e5e0: 0x8c50f2d0  lw          $s0, -0xD30($v0)
    ctx->pc = 0x42e5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6FF2D0u));
    // 0x42e5e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42e5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42e5e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42e5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42e5ec: 0x0  nop
    ctx->pc = 0x42e5ecu;
    // NOP
label_42e5f0:
    // 0x42e5f0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x42E5F0u;
    {
        const bool branch_taken_0x42e5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E5F0u;
        // 0x42e5f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e5f0) {
            ctx->pc = 0x42E6A0u;
            goto label_42e6a0;
        }
    }
    ctx->pc = 0x42E5F8u;
    // 0x42e5f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e5fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42E5FCu;
    {
        const bool branch_taken_0x42e5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E5FCu;
        // 0x42e600: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e5fc) {
            ctx->pc = 0x42E614u;
            goto label_42e614;
        }
    }
    ctx->pc = 0x42E604u;
    // 0x42e604: 0xc10b924  jal         func_42E490
    ctx->pc = 0x42E604u;
    SET_GPR_U32(ctx, 31, 0x42E60Cu);
    ctx->pc = 0x42E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42E604u;
    // 0x42e608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E490u, 0x42E604u, 0x42E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42E60Cu;
label_42e60c:
    // 0x42e60c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42e610: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x42e610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42e614:
    // 0x42e614: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x42E614u;
    {
        const bool branch_taken_0x42e614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e614) {
            ctx->pc = 0x42E618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E614u;
            // 0x42e618: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e5f0;
        }
    }
    ctx->pc = 0x42E61Cu;
    // 0x42e61c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x42e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x42e620: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x42e620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42e624: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x42E624u;
    {
        const bool branch_taken_0x42e624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e624) {
            ctx->pc = 0x42E628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E624u;
            // 0x42e628: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e5f0;
        }
    }
    ctx->pc = 0x42E62Cu;
    // 0x42e62c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42E62Cu;
    {
        const bool branch_taken_0x42e62c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x42e62c) {
            ctx->pc = 0x42E630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E62Cu;
            // 0x42e630: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E644u;
            goto label_42e644;
        }
    }
    ctx->pc = 0x42E634u;
    // 0x42e634: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x42E634u;
    {
        const bool branch_taken_0x42e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E634u;
        // 0x42e638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e634) {
            ctx->pc = 0x42E6A0u;
            goto label_42e6a0;
        }
    }
    ctx->pc = 0x42E63Cu;
label_42e63c:
    // 0x42e63c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x42E63Cu;
    {
        const bool branch_taken_0x42e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E63Cu;
        // 0x42e640: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e63c) {
            ctx->pc = 0x42E6A0u;
            goto label_42e6a0;
        }
    }
    ctx->pc = 0x42E644u;
label_42e644:
    // 0x42e644: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x42E644u;
    {
        const bool branch_taken_0x42e644 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E644u;
        // 0x42e648: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e644) {
            ctx->pc = 0x42E69Cu;
            goto label_42e69c;
        }
    }
    ctx->pc = 0x42E64Cu;
    // 0x42e64c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x42e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x42e650: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x42e650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x42e654: 0x0  nop
    ctx->pc = 0x42e654u;
    // NOP
label_42e658:
    // 0x42e658: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x42e658u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x42e65c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x42e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x42e660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x42e660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x42e664: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x42e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42e668: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x42e668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42e66c: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x42e66cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x42e670: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x42E670u;
    {
        const bool branch_taken_0x42e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42e670) {
            ctx->pc = 0x42E674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42E670u;
            // 0x42e674: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42E680u;
            goto label_42e680;
        }
    }
    ctx->pc = 0x42E678u;
    // 0x42e678: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x42E678u;
    {
        const bool branch_taken_0x42e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E678u;
        // 0x42e67c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e678) {
            ctx->pc = 0x42E690u;
            goto label_42e690;
        }
    }
    ctx->pc = 0x42E680u;
label_42e680:
    // 0x42e680: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x42e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x42e684: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x42e684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42e688: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x42E688u;
    {
        const bool branch_taken_0x42e688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E688u;
        // 0x42e68c: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e688) {
            ctx->pc = 0x42E63Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e63c;
        }
    }
    ctx->pc = 0x42E690u;
label_42e690:
    // 0x42e690: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x42e690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x42e694: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x42E694u;
    {
        const bool branch_taken_0x42e694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E694u;
        // 0x42e698: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42e694) {
            ctx->pc = 0x42E658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42e658;
        }
    }
    ctx->pc = 0x42E69Cu;
label_42e69c:
    // 0x42e69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x42e69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e6a0:
    // 0x42e6a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42e6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42e6a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42e6a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42e6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42e6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42e6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x42E6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42E6ACu;
        // 0x42e6b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42E6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42E6B4u;
    // 0x42e6b4: 0x0  nop
    ctx->pc = 0x42e6b4u;
    // NOP
    ctx->pc = 0x42e6b8u;
}
