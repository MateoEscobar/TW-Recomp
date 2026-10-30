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

// Function: sub_00435FD8
// Address: 0x435fd8 - 0x436078
void sub_00435FD8_0x435fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435FD8_0x435fd8");
#endif

    switch (ctx->pc) {
        case 0x436010u: goto label_436010;
        case 0x436068u: goto label_436068;
        default: break;
    }

    ctx->pc = 0x435fd8u;

    // 0x435fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x435fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x435fdc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x435fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435fe0: 0x457c2  srl         $t2, $a0, 31
    ctx->pc = 0x435fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x435fe4: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x435FE4u;
    {
        const bool branch_taken_0x435fe4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x435FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435FE4u;
        // 0x435fe8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435fe4) {
            ctx->pc = 0x435FF8u;
            goto label_435ff8;
        }
    }
    ctx->pc = 0x435FECu;
    // 0x435fec: 0x41823  negu        $v1, $a0
    ctx->pc = 0x435fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x435ff0: 0x38c2000a  xori        $v0, $a2, 0xA
    ctx->pc = 0x435ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)10);
    // 0x435ff4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x435ff4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_435ff8:
    // 0x435ff8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x435ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x435ffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x435ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436000: 0x244b6d58  addiu       $t3, $v0, 0x6D58
    ctx->pc = 0x436000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 27992));
    // 0x436004: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x436004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436008: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x436008u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x43600c: 0x0  nop
    ctx->pc = 0x43600cu;
    // NOP
label_436010:
    // 0x436010: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x436010u;
    {
        const bool branch_taken_0x436010 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x436010) {
            ctx->pc = 0x436014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436010u;
            // 0x436014: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x436018u;
            goto label_436018;
        }
    }
    ctx->pc = 0x436018u;
label_436018:
    // 0x436018: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x436018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x43601c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x43601cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x436020: 0x1810  mfhi        $v1
    ctx->pc = 0x436020u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x436024: 0x2012  mflo        $a0
    ctx->pc = 0x436024u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x436028: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x436028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x43602c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x43602cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x436030: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x436030u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x436034: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x436034u;
    {
        const bool branch_taken_0x436034 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x436034) {
            ctx->pc = 0x436038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x436034u;
            // 0x436038: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43603Cu;
            goto label_43603c;
        }
    }
    ctx->pc = 0x43603Cu;
label_43603c:
    // 0x43603c: 0x5480fff4  bnel        $a0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x43603Cu;
    {
        const bool branch_taken_0x43603c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x43603c) {
            ctx->pc = 0x436040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43603Cu;
            // 0x436040: 0x86001b  divu        $zero, $a0, $a2 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x436010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436010;
        }
    }
    ctx->pc = 0x436044u;
    // 0x436044: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x436044u;
    {
        const bool branch_taken_0x436044 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x436048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436044u;
        // 0x436048: 0x1271821  addu        $v1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436044) {
            ctx->pc = 0x436058u;
            goto label_436058;
        }
    }
    ctx->pc = 0x43604Cu;
    // 0x43604c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x43604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x436050: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x436050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x436054: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x436054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_436058:
    // 0x436058: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x436058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x43605c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x43605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436060: 0xc10d7d8  jal         func_435F60
    ctx->pc = 0x436060u;
    SET_GPR_U32(ctx, 31, 0x436068u);
    ctx->pc = 0x436064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436060u;
    // 0x436064: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435F60u, 0x436060u, 0x436068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436068u;
label_436068:
    // 0x436068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x436068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43606c: 0x3e00008  jr          $ra
    ctx->pc = 0x43606Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43606Cu;
        // 0x436070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43606Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x436074u;
    // 0x436074: 0x0  nop
    ctx->pc = 0x436074u;
    // NOP
    ctx->pc = 0x436078u;
}
