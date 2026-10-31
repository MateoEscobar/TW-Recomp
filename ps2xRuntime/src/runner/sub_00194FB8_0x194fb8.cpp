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

// Function: sub_00194FB8
// Address: 0x194fb8 - 0x195030
void sub_00194FB8_0x194fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194FB8_0x194fb8");
#endif

    switch (ctx->pc) {
        case 0x194fb8u: goto label_194fb8;
        case 0x194fbcu: goto label_194fbc;
        case 0x194fc0u: goto label_194fc0;
        case 0x194fc4u: goto label_194fc4;
        case 0x194fc8u: goto label_194fc8;
        case 0x194fccu: goto label_194fcc;
        case 0x194fd0u: goto label_194fd0;
        case 0x194fd4u: goto label_194fd4;
        case 0x194fd8u: goto label_194fd8;
        case 0x194fdcu: goto label_194fdc;
        case 0x194fe0u: goto label_194fe0;
        case 0x194fe4u: goto label_194fe4;
        case 0x194fe8u: goto label_194fe8;
        case 0x194fecu: goto label_194fec;
        case 0x194ff0u: goto label_194ff0;
        case 0x194ff4u: goto label_194ff4;
        case 0x194ff8u: goto label_194ff8;
        case 0x194ffcu: goto label_194ffc;
        case 0x195000u: goto label_195000;
        case 0x195004u: goto label_195004;
        case 0x195008u: goto label_195008;
        case 0x19500cu: goto label_19500c;
        case 0x195010u: goto label_195010;
        case 0x195014u: goto label_195014;
        case 0x195018u: goto label_195018;
        case 0x19501cu: goto label_19501c;
        case 0x195020u: goto label_195020;
        case 0x195024u: goto label_195024;
        case 0x195028u: goto label_195028;
        case 0x19502cu: goto label_19502c;
        default: break;
    }

    ctx->pc = 0x194fb8u;

label_194fb8:
    // 0x194fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_194fbc:
    // 0x194fbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x194fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_194fc0:
    // 0x194fc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x194fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_194fc4:
    // 0x194fc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x194fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_194fc8:
    // 0x194fc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x194fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_194fcc:
    // 0x194fcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x194fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_194fd0:
    // 0x194fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_194fd4:
    // 0x194fd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x194fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194fd8:
    // 0x194fd8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x194fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_194fdc:
    // 0x194fdc: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x194fdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
label_194fe0:
    // 0x194fe0: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x194fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_194fe4:
    // 0x194fe4: 0x40f809  jalr        $v0
label_194fe8:
    if (ctx->pc == 0x194FE8u) {
        ctx->pc = 0x194FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FE4u;
        // 0x194fe8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FECu;
        goto label_194fec;
    }
    ctx->pc = 0x194FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194FECu);
        ctx->pc = 0x194FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FE4u;
        // 0x194fe8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FE4u, 0x194FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194FECu;
label_194fec:
    // 0x194fec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x194fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_194ff0:
    // 0x194ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194ff4:
    // 0x194ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194ff8:
    // 0x194ff8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194ffc:
    // 0x194ffc: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x194ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_195000:
    // 0x195000: 0x90470023  lbu         $a3, 0x23($v0)
    ctx->pc = 0x195000u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_195004:
    // 0x195004: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x195004u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_195008:
    // 0x195008: 0x30e70f00  andi        $a3, $a3, 0xF00
    ctx->pc = 0x195008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
label_19500c:
    // 0x19500c: 0xc121848  jal         func_486120
label_195010:
    if (ctx->pc == 0x195010u) {
        ctx->pc = 0x195010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19500Cu;
        // 0x195010: 0x34e70085  ori         $a3, $a3, 0x85 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)133);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195014u;
        goto label_195014;
    }
    ctx->pc = 0x19500Cu;
    SET_GPR_U32(ctx, 31, 0x195014u);
    ctx->pc = 0x195010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19500Cu;
    // 0x195010: 0x34e70085  ori         $a3, $a3, 0x85 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)133);
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x19500Cu, 0x195014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195014u;
label_195014:
    // 0x195014: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x195014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_195018:
    // 0x195018: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x195018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19501c:
    // 0x19501c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19501cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195020:
    // 0x195020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195024:
    // 0x195024: 0x3e00008  jr          $ra
label_195028:
    if (ctx->pc == 0x195028u) {
        ctx->pc = 0x195028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195024u;
        // 0x195028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19502Cu;
        goto label_19502c;
    }
    ctx->pc = 0x195024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195024u;
        // 0x195028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19502Cu;
label_19502c:
    // 0x19502c: 0x0  nop
    ctx->pc = 0x19502cu;
    // NOP
    ctx->pc = 0x195030u;
}
