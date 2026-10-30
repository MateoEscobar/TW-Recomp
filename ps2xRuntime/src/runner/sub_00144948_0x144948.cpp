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

// Function: sub_00144948
// Address: 0x144948 - 0x1449b0
void sub_00144948_0x144948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144948_0x144948");
#endif

    switch (ctx->pc) {
        case 0x144948u: goto label_144948;
        case 0x14494cu: goto label_14494c;
        case 0x144950u: goto label_144950;
        case 0x144954u: goto label_144954;
        case 0x144958u: goto label_144958;
        case 0x14495cu: goto label_14495c;
        case 0x144960u: goto label_144960;
        case 0x144964u: goto label_144964;
        case 0x144968u: goto label_144968;
        case 0x14496cu: goto label_14496c;
        case 0x144970u: goto label_144970;
        case 0x144974u: goto label_144974;
        case 0x144978u: goto label_144978;
        case 0x14497cu: goto label_14497c;
        case 0x144980u: goto label_144980;
        case 0x144984u: goto label_144984;
        case 0x144988u: goto label_144988;
        case 0x14498cu: goto label_14498c;
        case 0x144990u: goto label_144990;
        case 0x144994u: goto label_144994;
        case 0x144998u: goto label_144998;
        case 0x14499cu: goto label_14499c;
        case 0x1449a0u: goto label_1449a0;
        case 0x1449a4u: goto label_1449a4;
        case 0x1449a8u: goto label_1449a8;
        case 0x1449acu: goto label_1449ac;
        default: break;
    }

    ctx->pc = 0x144948u;

label_144948:
    // 0x144948: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x144948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_14494c:
    // 0x14494c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14494cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144950:
    // 0x144950: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x144950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_144954:
    // 0x144954: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x144954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_144958:
    // 0x144958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14495c:
    // 0x14495c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x14495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_144960:
    // 0x144960: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144964:
    // 0x144964: 0xc10ca28  jal         func_4328A0
label_144968:
    if (ctx->pc == 0x144968u) {
        ctx->pc = 0x144968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144964u;
        // 0x144968: 0x24a59ca0  addiu       $a1, $a1, -0x6360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14496Cu;
        goto label_14496c;
    }
    ctx->pc = 0x144964u;
    SET_GPR_U32(ctx, 31, 0x14496Cu);
    ctx->pc = 0x144968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144964u;
    // 0x144968: 0x24a59ca0  addiu       $a1, $a1, -0x6360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x144964u, 0x14496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14496Cu;
label_14496c:
    // 0x14496c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_144970:
    // 0x144970: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x144970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144974:
    // 0x144974: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x144974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_144978:
    // 0x144978: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x144978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_14497c:
    // 0x14497c: 0x40f809  jalr        $v0
label_144980:
    if (ctx->pc == 0x144980u) {
        ctx->pc = 0x144980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14497Cu;
        // 0x144980: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144984u;
        goto label_144984;
    }
    ctx->pc = 0x14497Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144984u);
        ctx->pc = 0x144980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14497Cu;
        // 0x144980: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14497Cu, 0x144984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144984u;
label_144984:
    // 0x144984: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x144984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144988:
    // 0x144988: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x144988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_14498c:
    // 0x14498c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x14498cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_144990:
    // 0x144990: 0x3e00008  jr          $ra
label_144994:
    if (ctx->pc == 0x144994u) {
        ctx->pc = 0x144994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144990u;
        // 0x144994: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144998u;
        goto label_144998;
    }
    ctx->pc = 0x144990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144990u;
        // 0x144994: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144998u;
label_144998:
    // 0x144998: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x144998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14499c:
    // 0x14499c: 0x0  nop
    ctx->pc = 0x14499cu;
    // NOP
label_1449a0:
    // 0x1449a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1449a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1449a4:
    // 0x1449a4: 0x0  nop
    ctx->pc = 0x1449a4u;
    // NOP
label_1449a8:
    // 0x1449a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1449a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1449ac:
    // 0x1449ac: 0x0  nop
    ctx->pc = 0x1449acu;
    // NOP
    ctx->pc = 0x1449b0u;
}
