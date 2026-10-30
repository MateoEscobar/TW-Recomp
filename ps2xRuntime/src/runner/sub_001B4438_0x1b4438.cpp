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

// Function: sub_001B4438
// Address: 0x1b4438 - 0x1b44d8
void sub_001B4438_0x1b4438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4438_0x1b4438");
#endif

    switch (ctx->pc) {
        case 0x1b4438u: goto label_1b4438;
        case 0x1b443cu: goto label_1b443c;
        case 0x1b4440u: goto label_1b4440;
        case 0x1b4444u: goto label_1b4444;
        case 0x1b4448u: goto label_1b4448;
        case 0x1b444cu: goto label_1b444c;
        case 0x1b4450u: goto label_1b4450;
        case 0x1b4454u: goto label_1b4454;
        case 0x1b4458u: goto label_1b4458;
        case 0x1b445cu: goto label_1b445c;
        case 0x1b4460u: goto label_1b4460;
        case 0x1b4464u: goto label_1b4464;
        case 0x1b4468u: goto label_1b4468;
        case 0x1b446cu: goto label_1b446c;
        case 0x1b4470u: goto label_1b4470;
        case 0x1b4474u: goto label_1b4474;
        case 0x1b4478u: goto label_1b4478;
        case 0x1b447cu: goto label_1b447c;
        case 0x1b4480u: goto label_1b4480;
        case 0x1b4484u: goto label_1b4484;
        case 0x1b4488u: goto label_1b4488;
        case 0x1b448cu: goto label_1b448c;
        case 0x1b4490u: goto label_1b4490;
        case 0x1b4494u: goto label_1b4494;
        case 0x1b4498u: goto label_1b4498;
        case 0x1b449cu: goto label_1b449c;
        case 0x1b44a0u: goto label_1b44a0;
        case 0x1b44a4u: goto label_1b44a4;
        case 0x1b44a8u: goto label_1b44a8;
        case 0x1b44acu: goto label_1b44ac;
        case 0x1b44b0u: goto label_1b44b0;
        case 0x1b44b4u: goto label_1b44b4;
        case 0x1b44b8u: goto label_1b44b8;
        case 0x1b44bcu: goto label_1b44bc;
        case 0x1b44c0u: goto label_1b44c0;
        case 0x1b44c4u: goto label_1b44c4;
        case 0x1b44c8u: goto label_1b44c8;
        case 0x1b44ccu: goto label_1b44cc;
        case 0x1b44d0u: goto label_1b44d0;
        case 0x1b44d4u: goto label_1b44d4;
        default: break;
    }

    ctx->pc = 0x1b4438u;

label_1b4438:
    // 0x1b4438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b443c:
    // 0x1b443c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1b443cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_1b4440:
    // 0x1b4440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b4444:
    // 0x1b4444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4448:
    // 0x1b4448: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b4448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b444c:
    // 0x1b444c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b4450:
    // 0x1b4450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b4454:
    // 0x1b4454: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_1b4458:
    if (ctx->pc == 0x1B4458u) {
        ctx->pc = 0x1B4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4454u;
        // 0x1b4458: 0xa2880b  movn        $s1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B445Cu;
        goto label_1b445c;
    }
    ctx->pc = 0x1B4454u;
    {
        const bool branch_taken_0x1b4454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4454u;
        // 0x1b4458: 0xa2880b  movn        $s1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4454) {
            ctx->pc = 0x1B4474u;
            goto label_1b4474;
        }
    }
    ctx->pc = 0x1B445Cu;
label_1b445c:
    // 0x1b445c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b445cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_1b4460:
    // 0x1b4460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b4460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4464:
    // 0x1b4464: 0xc06d9dc  jal         func_1B6770
label_1b4468:
    if (ctx->pc == 0x1B4468u) {
        ctx->pc = 0x1B4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4464u;
        // 0x1b4468: 0x24847370  addiu       $a0, $a0, 0x7370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B446Cu;
        goto label_1b446c;
    }
    ctx->pc = 0x1B4464u;
    SET_GPR_U32(ctx, 31, 0x1B446Cu);
    ctx->pc = 0x1B4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4464u;
    // 0x1b4468: 0x24847370  addiu       $a0, $a0, 0x7370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6770u, 0x1B4464u, 0x1B446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B446Cu;
label_1b446c:
    // 0x1b446c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1b4470:
    if (ctx->pc == 0x1B4470u) {
        ctx->pc = 0x1B4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B446Cu;
        // 0x1b4470: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4474u;
        goto label_1b4474;
    }
    ctx->pc = 0x1B446Cu;
    {
        const bool branch_taken_0x1b446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B446Cu;
        // 0x1b4470: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b446c) {
            ctx->pc = 0x1B44C4u;
            goto label_1b44c4;
        }
    }
    ctx->pc = 0x1B4474u;
label_1b4474:
    // 0x1b4474: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b4474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1b4478:
    // 0x1b4478: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1b4478u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b447c:
    // 0x1b447c: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1b4480:
    // 0x1b4480: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b4480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b4484:
    // 0x1b4484: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1b4484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1b4488:
    // 0x1b4488: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b448c:
    // 0x1b448c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b4490:
    // 0x1b4490: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x1b4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_1b4494:
    // 0x1b4494: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1b4494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1b4498:
    // 0x1b4498: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1b449c:
    // 0x1b449c: 0x60f809  jalr        $v1
label_1b44a0:
    if (ctx->pc == 0x1B44A0u) {
        ctx->pc = 0x1B44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B449Cu;
        // 0x1b44a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B44A4u;
        goto label_1b44a4;
    }
    ctx->pc = 0x1B449Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B44A4u);
        ctx->pc = 0x1B44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B449Cu;
        // 0x1b44a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B449Cu, 0x1B44A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B44A4u;
label_1b44a4:
    // 0x1b44a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b44a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b44a8:
    // 0x1b44a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b44a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b44ac:
    // 0x1b44ac: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x1b44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_1b44b0:
    // 0x1b44b0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1b44b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1b44b4:
    // 0x1b44b4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1b44b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1b44b8:
    // 0x1b44b8: 0x60f809  jalr        $v1
label_1b44bc:
    if (ctx->pc == 0x1B44BCu) {
        ctx->pc = 0x1B44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44B8u;
        // 0x1b44bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B44C0u;
        goto label_1b44c0;
    }
    ctx->pc = 0x1B44B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B44C0u);
        ctx->pc = 0x1B44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44B8u;
        // 0x1b44bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B44B8u, 0x1B44C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B44C0u;
label_1b44c0:
    // 0x1b44c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b44c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b44c4:
    // 0x1b44c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b44c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b44c8:
    // 0x1b44c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b44c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b44cc:
    // 0x1b44cc: 0x3e00008  jr          $ra
label_1b44d0:
    if (ctx->pc == 0x1B44D0u) {
        ctx->pc = 0x1B44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44CCu;
        // 0x1b44d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B44D4u;
        goto label_1b44d4;
    }
    ctx->pc = 0x1B44CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44CCu;
        // 0x1b44d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B44CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B44D4u;
label_1b44d4:
    // 0x1b44d4: 0x0  nop
    ctx->pc = 0x1b44d4u;
    // NOP
    ctx->pc = 0x1b44d8u;
}
