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

// Function: sub_0016A578
// Address: 0x16a578 - 0x16a5e8
void sub_0016A578_0x16a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A578_0x16a578");
#endif

    switch (ctx->pc) {
        case 0x16a578u: goto label_16a578;
        case 0x16a57cu: goto label_16a57c;
        case 0x16a580u: goto label_16a580;
        case 0x16a584u: goto label_16a584;
        case 0x16a588u: goto label_16a588;
        case 0x16a58cu: goto label_16a58c;
        case 0x16a590u: goto label_16a590;
        case 0x16a594u: goto label_16a594;
        case 0x16a598u: goto label_16a598;
        case 0x16a59cu: goto label_16a59c;
        case 0x16a5a0u: goto label_16a5a0;
        case 0x16a5a4u: goto label_16a5a4;
        case 0x16a5a8u: goto label_16a5a8;
        case 0x16a5acu: goto label_16a5ac;
        case 0x16a5b0u: goto label_16a5b0;
        case 0x16a5b4u: goto label_16a5b4;
        case 0x16a5b8u: goto label_16a5b8;
        case 0x16a5bcu: goto label_16a5bc;
        case 0x16a5c0u: goto label_16a5c0;
        case 0x16a5c4u: goto label_16a5c4;
        case 0x16a5c8u: goto label_16a5c8;
        case 0x16a5ccu: goto label_16a5cc;
        case 0x16a5d0u: goto label_16a5d0;
        case 0x16a5d4u: goto label_16a5d4;
        case 0x16a5d8u: goto label_16a5d8;
        case 0x16a5dcu: goto label_16a5dc;
        case 0x16a5e0u: goto label_16a5e0;
        case 0x16a5e4u: goto label_16a5e4;
        default: break;
    }

    ctx->pc = 0x16a578u;

label_16a578:
    // 0x16a578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16a57c:
    // 0x16a57c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_16a580:
    // 0x16a580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a584:
    // 0x16a584: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a584u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_16a588:
    // 0x16a588: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_16a58c:
    if (ctx->pc == 0x16A58Cu) {
        ctx->pc = 0x16A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A588u;
        // 0x16a58c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A590u;
        goto label_16a590;
    }
    ctx->pc = 0x16A588u;
    {
        const bool branch_taken_0x16a588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A588u;
        // 0x16a58c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a588) {
            ctx->pc = 0x16A5D0u;
            goto label_16a5d0;
        }
    }
    ctx->pc = 0x16A590u;
label_16a590:
    // 0x16a590: 0xc05b0e2  jal         func_16C388
label_16a594:
    if (ctx->pc == 0x16A594u) {
        ctx->pc = 0x16A598u;
        goto label_16a598;
    }
    ctx->pc = 0x16A590u;
    SET_GPR_U32(ctx, 31, 0x16A598u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A590u, 0x16A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A598u;
label_16a598:
    // 0x16a598: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_16a59c:
    if (ctx->pc == 0x16A59Cu) {
        ctx->pc = 0x16A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A598u;
        // 0x16a59c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5A0u;
        goto label_16a5a0;
    }
    ctx->pc = 0x16A598u;
    {
        const bool branch_taken_0x16a598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A598u;
        // 0x16a59c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a598) {
            ctx->pc = 0x16A5D4u;
            goto label_16a5d4;
        }
    }
    ctx->pc = 0x16A5A0u;
label_16a5a0:
    // 0x16a5a0: 0xc05959e  jal         func_165678
label_16a5a4:
    if (ctx->pc == 0x16A5A4u) {
        ctx->pc = 0x16A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5A0u;
        // 0x16a5a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5A8u;
        goto label_16a5a8;
    }
    ctx->pc = 0x16A5A0u;
    SET_GPR_U32(ctx, 31, 0x16A5A8u);
    ctx->pc = 0x16A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5A0u;
    // 0x16a5a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x16A5A0u, 0x16A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A5A8u;
label_16a5a8:
    // 0x16a5a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a5ac:
    // 0x16a5ac: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_16a5b0:
    if (ctx->pc == 0x16A5B0u) {
        ctx->pc = 0x16A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5ACu;
        // 0x16a5b0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5B4u;
        goto label_16a5b4;
    }
    ctx->pc = 0x16A5ACu;
    {
        const bool branch_taken_0x16a5ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5ACu;
        // 0x16a5b0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5ac) {
            ctx->pc = 0x16A5D4u;
            goto label_16a5d4;
        }
    }
    ctx->pc = 0x16A5B4u;
label_16a5b4:
    // 0x16a5b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16a5b8:
    // 0x16a5b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x16a5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_16a5bc:
    // 0x16a5bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16a5c0:
    // 0x16a5c0: 0x40f809  jalr        $v0
label_16a5c4:
    if (ctx->pc == 0x16A5C4u) {
        ctx->pc = 0x16A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C0u;
        // 0x16a5c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5C8u;
        goto label_16a5c8;
    }
    ctx->pc = 0x16A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A5C8u);
        ctx->pc = 0x16A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C0u;
        // 0x16a5c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A5C0u, 0x16A5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A5C8u;
label_16a5c8:
    // 0x16a5c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_16a5cc:
    if (ctx->pc == 0x16A5CCu) {
        ctx->pc = 0x16A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C8u;
        // 0x16a5cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5D0u;
        goto label_16a5d0;
    }
    ctx->pc = 0x16A5C8u;
    {
        const bool branch_taken_0x16a5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C8u;
        // 0x16a5cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5c8) {
            ctx->pc = 0x16A5DCu;
            goto label_16a5dc;
        }
    }
    ctx->pc = 0x16A5D0u;
label_16a5d0:
    // 0x16a5d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x16a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_16a5d4:
    // 0x16a5d4: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x16a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_16a5d8:
    // 0x16a5d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a5dc:
    // 0x16a5dc: 0x3e00008  jr          $ra
label_16a5e0:
    if (ctx->pc == 0x16A5E0u) {
        ctx->pc = 0x16A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5DCu;
        // 0x16a5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5E4u;
        goto label_16a5e4;
    }
    ctx->pc = 0x16A5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5DCu;
        // 0x16a5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A5E4u;
label_16a5e4:
    // 0x16a5e4: 0x0  nop
    ctx->pc = 0x16a5e4u;
    // NOP
    ctx->pc = 0x16a5e8u;
}
