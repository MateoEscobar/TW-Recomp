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

// Function: sub_0014E900
// Address: 0x14e900 - 0x14e998
void sub_0014E900_0x14e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E900_0x14e900");
#endif

    switch (ctx->pc) {
        case 0x14e924u: goto label_14e924;
        case 0x14e92cu: goto label_14e92c;
        case 0x14e938u: goto label_14e938;
        case 0x14e944u: goto label_14e944;
        case 0x14e950u: goto label_14e950;
        case 0x14e95cu: goto label_14e95c;
        case 0x14e964u: goto label_14e964;
        case 0x14e974u: goto label_14e974;
        default: break;
    }

    ctx->pc = 0x14e900u;

    // 0x14e900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14e900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14e904: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14e908: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e910: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14e914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e91c: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E91Cu;
    SET_GPR_U32(ctx, 31, 0x14E924u);
    ctx->pc = 0x14E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E91Cu;
    // 0x14e920: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E91Cu, 0x14E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E924u;
label_14e924:
    // 0x14e924: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E924u;
    SET_GPR_U32(ctx, 31, 0x14E92Cu);
    ctx->pc = 0x14E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E924u;
    // 0x14e928: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E924u, 0x14E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E92Cu;
label_14e92c:
    // 0x14e92c: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x14e92cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14e930: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E930u;
    SET_GPR_U32(ctx, 31, 0x14E938u);
    ctx->pc = 0x14E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E930u;
    // 0x14e934: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E930u, 0x14E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E938u;
label_14e938:
    // 0x14e938: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x14e938u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x14e93c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E93Cu;
    SET_GPR_U32(ctx, 31, 0x14E944u);
    ctx->pc = 0x14E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E93Cu;
    // 0x14e940: 0x112403  sra         $a0, $s1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E93Cu, 0x14E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E944u;
label_14e944:
    // 0x14e944: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x14e944u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x14e948: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E948u;
    SET_GPR_U32(ctx, 31, 0x14E950u);
    ctx->pc = 0x14E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E948u;
    // 0x14e94c: 0x122403  sra         $a0, $s2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E948u, 0x14E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E950u;
label_14e950:
    // 0x14e950: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14e954: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E954u;
    SET_GPR_U32(ctx, 31, 0x14E95Cu);
    ctx->pc = 0x14E958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E954u;
    // 0x14e958: 0x8444bd50  lh          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E954u, 0x14E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E95Cu;
label_14e95c:
    // 0x14e95c: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E95Cu;
    SET_GPR_U32(ctx, 31, 0x14E964u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E95Cu, 0x14E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E964u;
label_14e964:
    // 0x14e964: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14e964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14e968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e96c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E96Cu;
    SET_GPR_U32(ctx, 31, 0x14E974u);
    ctx->pc = 0x14E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E96Cu;
    // 0x14e970: 0xac623940  sw          $v0, 0x3940($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 14656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E96Cu, 0x14E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E974u;
label_14e974:
    // 0x14e974: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14e974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e978: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e97c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14e97cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e984: 0x3e00008  jr          $ra
    ctx->pc = 0x14E984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E984u;
        // 0x14e988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E98Cu;
    // 0x14e98c: 0x0  nop
    ctx->pc = 0x14e98cu;
    // NOP
    // 0x14e990: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14e994: 0x0  nop
    ctx->pc = 0x14e994u;
    // NOP
    ctx->pc = 0x14e998u;
}
