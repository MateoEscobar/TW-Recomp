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

// Function: sub_00229570
// Address: 0x229570 - 0x2295f8
void sub_00229570_0x229570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229570_0x229570");
#endif

    ctx->pc = 0x229570u;

    // 0x229570: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x229570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229574: 0x8ca200cc  lw          $v0, 0xCC($a1)
    ctx->pc = 0x229574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x229578: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x229578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22957c: 0x2c8300bf  sltiu       $v1, $a0, 0xBF
    ctx->pc = 0x22957cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
    // 0x229580: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x229580u;
    {
        const bool branch_taken_0x229580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229580u;
        // 0x229584: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229580) {
            ctx->pc = 0x229600u;
            return;
        }
    }
    ctx->pc = 0x229588u;
    // 0x229588: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x22958c: 0x2442bbc0  addiu       $v0, $v0, -0x4440
    ctx->pc = 0x22958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949824));
    // 0x229590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229598: 0x800008  jr          $a0
    ctx->pc = 0x229598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2295A0u: goto label_2295a0;
            case 0x2295A8u: goto label_2295a8;
            case 0x2295B0u: goto label_2295b0;
            case 0x2295B8u: goto label_2295b8;
            case 0x2295C0u: goto label_2295c0;
            case 0x2295C8u: goto label_2295c8;
            case 0x2295D0u: goto label_2295d0;
            case 0x2295D8u: goto label_2295d8;
            case 0x2295E0u: goto label_2295e0;
            case 0x2295E8u: goto label_2295e8;
            case 0x2295F0u: goto label_2295f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2295A0u;
label_2295a0:
    // 0x2295a0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2295A0u;
    {
        const bool branch_taken_0x2295a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295A0u;
        // 0x2295a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295a0) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295A8u;
label_2295a8:
    // 0x2295a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2295A8u;
    {
        const bool branch_taken_0x2295a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295A8u;
        // 0x2295ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295a8) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295B0u;
label_2295b0:
    // 0x2295b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2295B0u;
    {
        const bool branch_taken_0x2295b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295B0u;
        // 0x2295b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295b0) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295B8u;
label_2295b8:
    // 0x2295b8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2295B8u;
    {
        const bool branch_taken_0x2295b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295B8u;
        // 0x2295bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295b8) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295C0u;
label_2295c0:
    // 0x2295c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2295C0u;
    {
        const bool branch_taken_0x2295c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295C0u;
        // 0x2295c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295c0) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295C8u;
label_2295c8:
    // 0x2295c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2295C8u;
    {
        const bool branch_taken_0x2295c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295C8u;
        // 0x2295cc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295c8) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295D0u;
label_2295d0:
    // 0x2295d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2295D0u;
    {
        const bool branch_taken_0x2295d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295D0u;
        // 0x2295d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295d0) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295D8u;
label_2295d8:
    // 0x2295d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2295D8u;
    {
        const bool branch_taken_0x2295d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295D8u;
        // 0x2295dc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295d8) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295E0u;
label_2295e0:
    // 0x2295e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2295E0u;
    {
        const bool branch_taken_0x2295e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295E0u;
        // 0x2295e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295e0) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295E8u;
label_2295e8:
    // 0x2295e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2295E8u;
    {
        const bool branch_taken_0x2295e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295E8u;
        // 0x2295ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295e8) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295F0u;
label_2295f0:
    // 0x2295f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2295F0u;
    {
        const bool branch_taken_0x2295f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295F0u;
        // 0x2295f4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295f0) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x2295F8u;
}
