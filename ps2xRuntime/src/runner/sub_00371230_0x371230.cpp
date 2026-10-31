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

// Function: sub_00371230
// Address: 0x371230 - 0x3712d8
void sub_00371230_0x371230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371230_0x371230");
#endif

    switch (ctx->pc) {
        case 0x371254u: goto label_371254;
        case 0x37126cu: goto label_37126c;
        case 0x37127cu: goto label_37127c;
        case 0x371290u: goto label_371290;
        case 0x3712a4u: goto label_3712a4;
        case 0x3712b0u: goto label_3712b0;
        case 0x3712c0u: goto label_3712c0;
        default: break;
    }

    ctx->pc = 0x371230u;

    // 0x371230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x371230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x371234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37123c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37123cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x371240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371244: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x371244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x371248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37124c: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37124Cu;
    SET_GPR_U32(ctx, 31, 0x371254u);
    ctx->pc = 0x371250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37124Cu;
    // 0x371250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37124Cu, 0x371254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371254u;
label_371254:
    // 0x371254: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x371254u;
    {
        const bool branch_taken_0x371254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371254u;
        // 0x371258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371254) {
            ctx->pc = 0x3712B8u;
            goto label_3712b8;
        }
    }
    ctx->pc = 0x37125Cu;
    // 0x37125c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371260: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x371260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371264: 0xc10311e  jal         func_40C478
    ctx->pc = 0x371264u;
    SET_GPR_U32(ctx, 31, 0x37126Cu);
    ctx->pc = 0x371268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371264u;
    // 0x371268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x371264u, 0x37126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37126Cu;
label_37126c:
    // 0x37126c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x37126Cu;
    {
        const bool branch_taken_0x37126c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37126Cu;
        // 0x371270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37126c) {
            ctx->pc = 0x3712B8u;
            goto label_3712b8;
        }
    }
    ctx->pc = 0x371274u;
    // 0x371274: 0xc10314e  jal         func_40C538
    ctx->pc = 0x371274u;
    SET_GPR_U32(ctx, 31, 0x37127Cu);
    ctx->pc = 0x371278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371274u;
    // 0x371278: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x371274u, 0x37127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37127Cu;
label_37127c:
    // 0x37127c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x37127Cu;
    {
        const bool branch_taken_0x37127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37127Cu;
        // 0x371280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37127c) {
            ctx->pc = 0x3712B8u;
            goto label_3712b8;
        }
    }
    ctx->pc = 0x371284u;
    // 0x371284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371288: 0xc102488  jal         func_409220
    ctx->pc = 0x371288u;
    SET_GPR_U32(ctx, 31, 0x371290u);
    ctx->pc = 0x37128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371288u;
    // 0x37128c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371288u, 0x371290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371290u;
label_371290:
    // 0x371290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x371290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x371294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371298: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37129c: 0xc102488  jal         func_409220
    ctx->pc = 0x37129Cu;
    SET_GPR_U32(ctx, 31, 0x3712A4u);
    ctx->pc = 0x3712A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37129Cu;
    // 0x3712a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37129Cu, 0x3712A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712A4u;
label_3712a4:
    // 0x3712a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3712a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712a8: 0xc044d44  jal         func_113510
    ctx->pc = 0x3712A8u;
    SET_GPR_U32(ctx, 31, 0x3712B0u);
    ctx->pc = 0x3712ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3712A8u;
    // 0x3712ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113510u, 0x3712A8u, 0x3712B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712B0u;
label_3712b0:
    // 0x3712b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3712B0u;
    {
        const bool branch_taken_0x3712b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3712B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712B0u;
        // 0x3712b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3712b0) {
            ctx->pc = 0x3712C0u;
            goto label_3712c0;
        }
    }
    ctx->pc = 0x3712B8u;
label_3712b8:
    // 0x3712b8: 0xc0dc474  jal         func_3711D0
    ctx->pc = 0x3712B8u;
    SET_GPR_U32(ctx, 31, 0x3712C0u);
    ctx->pc = 0x3712BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3712B8u;
    // 0x3712bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3711D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3711D0u, 0x3712B8u, 0x3712C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712C0u;
label_3712c0:
    // 0x3712c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3712c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3712c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3712c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3712c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3712c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3712cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3712CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3712D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712CCu;
        // 0x3712d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3712CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3712D4u;
    // 0x3712d4: 0x0  nop
    ctx->pc = 0x3712d4u;
    // NOP
    ctx->pc = 0x3712d8u;
}
