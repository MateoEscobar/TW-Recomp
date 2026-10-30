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

// Function: sub_00444160
// Address: 0x444160 - 0x444210
void sub_00444160_0x444160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444160_0x444160");
#endif

    switch (ctx->pc) {
        case 0x4441c8u: goto label_4441c8;
        case 0x4441ecu: goto label_4441ec;
        case 0x4441f4u: goto label_4441f4;
        default: break;
    }

    ctx->pc = 0x444160u;

    // 0x444160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x444160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x444164: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x444164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x444168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x444168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44416c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x444170: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x444170u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x444174: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x444174u;
    {
        const bool branch_taken_0x444174 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x444178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444174u;
        // 0x444178: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444174) {
            ctx->pc = 0x44418Cu;
            goto label_44418c;
        }
    }
    ctx->pc = 0x44417Cu;
    // 0x44417c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x44417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x444180: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x444180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x444184: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x444184u;
    {
        const bool branch_taken_0x444184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x444184) {
            ctx->pc = 0x444188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444184u;
            // 0x444188: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444198u;
            goto label_444198;
        }
    }
    ctx->pc = 0x44418Cu;
label_44418c:
    // 0x44418c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x44418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x444190: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x444190u;
    {
        const bool branch_taken_0x444190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444190u;
        // 0x444194: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x444190) {
            ctx->pc = 0x4441F8u;
            goto label_4441f8;
        }
    }
    ctx->pc = 0x444198u;
label_444198:
    // 0x444198: 0x24429ea0  addiu       $v0, $v0, -0x6160
    ctx->pc = 0x444198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x44419c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x44419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4441a0: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4441A0u;
    {
        const bool branch_taken_0x4441a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4441a0) {
            ctx->pc = 0x4441A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4441A0u;
            // 0x4441a4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4441B4u;
            goto label_4441b4;
        }
    }
    ctx->pc = 0x4441A8u;
    // 0x4441a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4441a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4441ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4441ACu;
    {
        const bool branch_taken_0x4441ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4441B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4441ACu;
        // 0x4441b0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4441ac) {
            ctx->pc = 0x4441F8u;
            goto label_4441f8;
        }
    }
    ctx->pc = 0x4441B4u;
label_4441b4:
    // 0x4441b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4441b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4441b8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4441B8u;
    {
        const bool branch_taken_0x4441b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4441BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4441B8u;
        // 0x4441bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4441b8) {
            ctx->pc = 0x4441F8u;
            goto label_4441f8;
        }
    }
    ctx->pc = 0x4441C0u;
    // 0x4441c0: 0xc111010  jal         func_444040
    ctx->pc = 0x4441C0u;
    SET_GPR_U32(ctx, 31, 0x4441C8u);
    ctx->pc = 0x444040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444040u, 0x4441C0u, 0x4441C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4441C8u;
label_4441c8:
    // 0x4441c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4441c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4441cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4441ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4441d0: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x4441d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x4441d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4441d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4441d8: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x4441d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4441dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4441DCu;
    {
        const bool branch_taken_0x4441dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4441E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4441DCu;
        // 0x4441e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4441dc) {
            ctx->pc = 0x4441F4u;
            goto label_4441f4;
        }
    }
    ctx->pc = 0x4441E4u;
    // 0x4441e4: 0xc110f36  jal         func_443CD8
    ctx->pc = 0x4441E4u;
    SET_GPR_U32(ctx, 31, 0x4441ECu);
    ctx->pc = 0x4441E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4441E4u;
    // 0x4441e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443CD8u, 0x4441E4u, 0x4441ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4441ECu;
label_4441ec:
    // 0x4441ec: 0xc110ed2  jal         func_443B48
    ctx->pc = 0x4441ECu;
    SET_GPR_U32(ctx, 31, 0x4441F4u);
    ctx->pc = 0x4441F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4441ECu;
    // 0x4441f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443B48u, 0x4441ECu, 0x4441F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4441F4u;
label_4441f4:
    // 0x4441f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4441f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4441f8:
    // 0x4441f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4441f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4441fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4441fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444204: 0x3e00008  jr          $ra
    ctx->pc = 0x444204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444204u;
        // 0x444208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44420Cu;
    // 0x44420c: 0x0  nop
    ctx->pc = 0x44420cu;
    // NOP
    ctx->pc = 0x444210u;
}
