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

// Function: sub_004A47B8
// Address: 0x4a47b8 - 0x4a4840
void sub_004A47B8_0x4a47b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A47B8_0x4a47b8");
#endif

    ctx->pc = 0x4a47b8u;

    // 0x4a47b8: 0x8f878a20  lw          $a3, -0x75E0($gp)
    ctx->pc = 0x4a47b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a47bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a47bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a47c0: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x4a47c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a47c4: 0x94e40014  lhu         $a0, 0x14($a3)
    ctx->pc = 0x4a47c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4a47c8: 0x90e30016  lbu         $v1, 0x16($a3)
    ctx->pc = 0x4a47c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x4a47cc: 0x44302  srl         $t0, $a0, 12
    ctx->pc = 0x4a47ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x4a47d0: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x4a47d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x4a47d4: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x4a47d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x4a47d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a47d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4a47dc: 0x844f8  dsll        $t0, $t0, 19
    ctx->pc = 0x4a47dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 19);
    // 0x4a47e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4a47e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a47e4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4a47e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4a47e8: 0x20c1fffe  addi        $at, $a2, -0x2
    ctx->pc = 0x4a47e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x4a47ec: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4A47ECu;
    {
        const bool branch_taken_0x4a47ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a47ec) {
            ctx->pc = 0x4A47F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A47ECu;
            // 0x4a47f0: 0x34630060  ori         $v1, $v1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4820u;
            goto label_4a4820;
        }
    }
    ctx->pc = 0x4A47F4u;
    // 0x4a47f4: 0x422000a  bltzl       $at, . + 4 + (0xA << 2)
    ctx->pc = 0x4A47F4u;
    {
        const bool branch_taken_0x4a47f4 = (GPR_S32(ctx, 1) < 0);
        if (branch_taken_0x4a47f4) {
            ctx->pc = 0x4A47F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A47F4u;
            // 0x4a47f8: 0x34630000  ori         $v1, $v1, 0x0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4820u;
            goto label_4a4820;
        }
    }
    ctx->pc = 0x4A47FCu;
    // 0x4a47fc: 0x2021fffe  addi        $at, $at, -0x2
    ctx->pc = 0x4a47fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x4a4800: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A4800u;
    {
        const bool branch_taken_0x4a4800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4800) {
            ctx->pc = 0x4A4804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4800u;
            // 0x4a4804: 0x34630120  ori         $v1, $v1, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4820u;
            goto label_4a4820;
        }
    }
    ctx->pc = 0x4A4808u;
    // 0x4a4808: 0x4220005  bltzl       $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A4808u;
    {
        const bool branch_taken_0x4a4808 = (GPR_S32(ctx, 1) < 0);
        if (branch_taken_0x4a4808) {
            ctx->pc = 0x4A480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4808u;
            // 0x4a480c: 0x34630080  ori         $v1, $v1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4820u;
            goto label_4a4820;
        }
    }
    ctx->pc = 0x4A4810u;
    // 0x4a4810: 0x2021fffe  addi        $at, $at, -0x2
    ctx->pc = 0x4a4810u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)4294967294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x4a4814: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4814u;
    {
        const bool branch_taken_0x4a4814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4814) {
            ctx->pc = 0x4A4818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4814u;
            // 0x4a4818: 0x34630160  ori         $v1, $v1, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4820u;
            goto label_4a4820;
        }
    }
    ctx->pc = 0x4A481Cu;
    // 0x4a481c: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x4a481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
label_4a4820:
    // 0x4a4820: 0x0  nop
    ctx->pc = 0x4a4820u;
    // NOP
    // 0x4a4824: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4824u;
        // 0x4a4828: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A482Cu;
    // 0x4a482c: 0x0  nop
    ctx->pc = 0x4a482cu;
    // NOP
    // 0x4a4830: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4a4830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4a4834: 0x0  nop
    ctx->pc = 0x4a4834u;
    // NOP
    // 0x4a4838: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4a4838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4a483c: 0x0  nop
    ctx->pc = 0x4a483cu;
    // NOP
    ctx->pc = 0x4a4840u;
}
