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

// Function: sub_0043D910
// Address: 0x43d910 - 0x43d998
void sub_0043D910_0x43d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D910_0x43d910");
#endif

    switch (ctx->pc) {
        case 0x43d948u: goto label_43d948;
        case 0x43d95cu: goto label_43d95c;
        default: break;
    }

    ctx->pc = 0x43d910u;

    // 0x43d910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43d914: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x43d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x43d918: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43d91c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x43d91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d920: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43d920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43d924: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43d924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43d928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43d92c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x43d92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x43d930: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43d930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43d934: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x43d934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x43d938: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43D938u;
    {
        const bool branch_taken_0x43d938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d938) {
            ctx->pc = 0x43D948u;
            goto label_43d948;
        }
    }
    ctx->pc = 0x43D940u;
    // 0x43d940: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43D940u;
    SET_GPR_U32(ctx, 31, 0x43D948u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43D940u, 0x43D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D948u;
label_43d948:
    // 0x43d948: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x43d948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x43d94c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x43d94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x43d950: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x43d950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x43d954: 0xc10f61a  jal         func_43D868
    ctx->pc = 0x43D954u;
    SET_GPR_U32(ctx, 31, 0x43D95Cu);
    ctx->pc = 0x43D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D954u;
    // 0x43d958: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D868u, 0x43D954u, 0x43D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D95Cu;
label_43d95c:
    // 0x43d95c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43D95Cu;
    {
        const bool branch_taken_0x43d95c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D95Cu;
        // 0x43d960: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d95c) {
            ctx->pc = 0x43D978u;
            goto label_43d978;
        }
    }
    ctx->pc = 0x43D964u;
    // 0x43d964: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43d964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43d968: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43d968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43d96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43d96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43d970: 0x8110cc4  j           func_443310
    ctx->pc = 0x43D970u;
    ctx->pc = 0x43D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D970u;
    // 0x43d974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    sub_00443310_0x443310(rdram, ctx, runtime); return;
    ctx->pc = 0x43D978u;
label_43d978:
    // 0x43d978: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43d978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43d97c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43d97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43d980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43d980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43d984: 0x3e00008  jr          $ra
    ctx->pc = 0x43D984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D984u;
        // 0x43d988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D98Cu;
    // 0x43d98c: 0x0  nop
    ctx->pc = 0x43d98cu;
    // NOP
    // 0x43d990: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x43d990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43d994: 0x0  nop
    ctx->pc = 0x43d994u;
    // NOP
    ctx->pc = 0x43d998u;
}
