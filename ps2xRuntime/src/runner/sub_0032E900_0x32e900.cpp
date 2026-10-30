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

// Function: sub_0032E900
// Address: 0x32e900 - 0x32e9b0
void sub_0032E900_0x32e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E900_0x32e900");
#endif

    switch (ctx->pc) {
        case 0x32e930u: goto label_32e930;
        case 0x32e944u: goto label_32e944;
        case 0x32e94cu: goto label_32e94c;
        case 0x32e954u: goto label_32e954;
        case 0x32e968u: goto label_32e968;
        case 0x32e974u: goto label_32e974;
        case 0x32e984u: goto label_32e984;
        case 0x32e990u: goto label_32e990;
        default: break;
    }

    ctx->pc = 0x32e900u;

    // 0x32e900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x32e900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x32e904: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x32e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x32e908: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x32e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x32e90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e910: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x32e914: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32e914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e918: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x32e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x32e91c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32e920: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x32e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x32e924: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x32e924u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32e928: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x32E928u;
    SET_GPR_U32(ctx, 31, 0x32E930u);
    ctx->pc = 0x32E92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E928u;
    // 0x32e92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x32E928u, 0x32E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E930u;
label_32e930:
    // 0x32e930: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x32e930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32e934: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32e934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e938: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32e938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e93c: 0xc0cb542  jal         func_32D508
    ctx->pc = 0x32E93Cu;
    SET_GPR_U32(ctx, 31, 0x32E944u);
    ctx->pc = 0x32E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E93Cu;
    // 0x32e940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D508u, 0x32E93Cu, 0x32E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E944u;
label_32e944:
    // 0x32e944: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32E944u;
    SET_GPR_U32(ctx, 31, 0x32E94Cu);
    ctx->pc = 0x32E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E944u;
    // 0x32e948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32E944u, 0x32E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E94Cu;
label_32e94c:
    // 0x32e94c: 0xc0cb99c  jal         func_32E670
    ctx->pc = 0x32E94Cu;
    SET_GPR_U32(ctx, 31, 0x32E954u);
    ctx->pc = 0x32E950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E94Cu;
    // 0x32e950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E670u, 0x32E94Cu, 0x32E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E954u;
label_32e954:
    // 0x32e954: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x32e954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e958: 0x2406010e  addiu       $a2, $zero, 0x10E
    ctx->pc = 0x32e958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x32e95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e960: 0xc0cb358  jal         func_32CD60
    ctx->pc = 0x32E960u;
    SET_GPR_U32(ctx, 31, 0x32E968u);
    ctx->pc = 0x32E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E960u;
    // 0x32e964: 0x24050111  addiu       $a1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD60u, 0x32E960u, 0x32E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E968u;
label_32e968:
    // 0x32e968: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32e968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e96c: 0xc0cb9f8  jal         func_32E7E0
    ctx->pc = 0x32E96Cu;
    SET_GPR_U32(ctx, 31, 0x32E974u);
    ctx->pc = 0x32E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E96Cu;
    // 0x32e970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E7E0u, 0x32E96Cu, 0x32E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E974u;
label_32e974:
    // 0x32e974: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x32e974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e978: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32e978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e97c: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x32E97Cu;
    SET_GPR_U32(ctx, 31, 0x32E984u);
    ctx->pc = 0x32E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E97Cu;
    // 0x32e980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x32E97Cu, 0x32E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E984u;
label_32e984:
    // 0x32e984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32e984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e988: 0xc0cb54a  jal         func_32D528
    ctx->pc = 0x32E988u;
    SET_GPR_U32(ctx, 31, 0x32E990u);
    ctx->pc = 0x32E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E988u;
    // 0x32e98c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D528u, 0x32E988u, 0x32E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E990u;
label_32e990:
    // 0x32e990: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x32e990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32e994: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x32e994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32e998: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32e998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e99c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32e99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e9a0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x32e9a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e9a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32e9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E9A8u;
        // 0x32e9ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E9B0u;
}
