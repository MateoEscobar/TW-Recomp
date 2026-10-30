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

// Function: sub_003ABD10
// Address: 0x3abd10 - 0x3abe10
void sub_003ABD10_0x3abd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABD10_0x3abd10");
#endif

    switch (ctx->pc) {
        case 0x3abd10u: goto label_3abd10;
        case 0x3abd14u: goto label_3abd14;
        case 0x3abd18u: goto label_3abd18;
        case 0x3abd1cu: goto label_3abd1c;
        case 0x3abd20u: goto label_3abd20;
        case 0x3abd24u: goto label_3abd24;
        case 0x3abd28u: goto label_3abd28;
        case 0x3abd2cu: goto label_3abd2c;
        case 0x3abd30u: goto label_3abd30;
        case 0x3abd34u: goto label_3abd34;
        case 0x3abd38u: goto label_3abd38;
        case 0x3abd3cu: goto label_3abd3c;
        case 0x3abd40u: goto label_3abd40;
        case 0x3abd44u: goto label_3abd44;
        case 0x3abd48u: goto label_3abd48;
        case 0x3abd4cu: goto label_3abd4c;
        case 0x3abd50u: goto label_3abd50;
        case 0x3abd54u: goto label_3abd54;
        case 0x3abd58u: goto label_3abd58;
        case 0x3abd5cu: goto label_3abd5c;
        case 0x3abd60u: goto label_3abd60;
        case 0x3abd64u: goto label_3abd64;
        case 0x3abd68u: goto label_3abd68;
        case 0x3abd6cu: goto label_3abd6c;
        case 0x3abd70u: goto label_3abd70;
        case 0x3abd74u: goto label_3abd74;
        case 0x3abd78u: goto label_3abd78;
        case 0x3abd7cu: goto label_3abd7c;
        case 0x3abd80u: goto label_3abd80;
        case 0x3abd84u: goto label_3abd84;
        case 0x3abd88u: goto label_3abd88;
        case 0x3abd8cu: goto label_3abd8c;
        case 0x3abd90u: goto label_3abd90;
        case 0x3abd94u: goto label_3abd94;
        case 0x3abd98u: goto label_3abd98;
        case 0x3abd9cu: goto label_3abd9c;
        case 0x3abda0u: goto label_3abda0;
        case 0x3abda4u: goto label_3abda4;
        case 0x3abda8u: goto label_3abda8;
        case 0x3abdacu: goto label_3abdac;
        case 0x3abdb0u: goto label_3abdb0;
        case 0x3abdb4u: goto label_3abdb4;
        case 0x3abdb8u: goto label_3abdb8;
        case 0x3abdbcu: goto label_3abdbc;
        case 0x3abdc0u: goto label_3abdc0;
        case 0x3abdc4u: goto label_3abdc4;
        case 0x3abdc8u: goto label_3abdc8;
        case 0x3abdccu: goto label_3abdcc;
        case 0x3abdd0u: goto label_3abdd0;
        case 0x3abdd4u: goto label_3abdd4;
        case 0x3abdd8u: goto label_3abdd8;
        case 0x3abddcu: goto label_3abddc;
        case 0x3abde0u: goto label_3abde0;
        case 0x3abde4u: goto label_3abde4;
        case 0x3abde8u: goto label_3abde8;
        case 0x3abdecu: goto label_3abdec;
        case 0x3abdf0u: goto label_3abdf0;
        case 0x3abdf4u: goto label_3abdf4;
        case 0x3abdf8u: goto label_3abdf8;
        case 0x3abdfcu: goto label_3abdfc;
        case 0x3abe00u: goto label_3abe00;
        case 0x3abe04u: goto label_3abe04;
        case 0x3abe08u: goto label_3abe08;
        case 0x3abe0cu: goto label_3abe0c;
        default: break;
    }

    ctx->pc = 0x3abd10u;

label_3abd10:
    // 0x3abd10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3abd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3abd14:
    // 0x3abd14: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3abd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3abd18:
    // 0x3abd18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3abd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3abd1c:
    // 0x3abd1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3abd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3abd20:
    // 0x3abd20: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3abd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3abd24:
    // 0x3abd24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3abd24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3abd28:
    // 0x3abd28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3abd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3abd2c:
    // 0x3abd2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3abd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3abd30:
    // 0x3abd30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3abd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3abd34:
    // 0x3abd34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3abd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3abd38:
    // 0x3abd38: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3abd38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3abd3c:
    // 0x3abd3c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3abd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3abd40:
    // 0x3abd40: 0x40f809  jalr        $v0
label_3abd44:
    if (ctx->pc == 0x3ABD44u) {
        ctx->pc = 0x3ABD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD40u;
        // 0x3abd44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD48u;
        goto label_3abd48;
    }
    ctx->pc = 0x3ABD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ABD48u);
        ctx->pc = 0x3ABD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD40u;
        // 0x3abd44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABD40u, 0x3ABD48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ABD48u;
label_3abd48:
    // 0x3abd48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3abd48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abd4c:
    // 0x3abd4c: 0xc0ea146  jal         func_3A8518
label_3abd50:
    if (ctx->pc == 0x3ABD50u) {
        ctx->pc = 0x3ABD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD4Cu;
        // 0x3abd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD54u;
        goto label_3abd54;
    }
    ctx->pc = 0x3ABD4Cu;
    SET_GPR_U32(ctx, 31, 0x3ABD54u);
    ctx->pc = 0x3ABD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD4Cu;
    // 0x3abd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ABD4Cu, 0x3ABD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD54u;
label_3abd54:
    // 0x3abd54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3abd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3abd58:
    // 0x3abd58: 0xc0ea12a  jal         func_3A84A8
label_3abd5c:
    if (ctx->pc == 0x3ABD5Cu) {
        ctx->pc = 0x3ABD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD58u;
        // 0x3abd5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD60u;
        goto label_3abd60;
    }
    ctx->pc = 0x3ABD58u;
    SET_GPR_U32(ctx, 31, 0x3ABD60u);
    ctx->pc = 0x3ABD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD58u;
    // 0x3abd5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ABD58u, 0x3ABD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD60u;
label_3abd60:
    // 0x3abd60: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3abd60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3abd64:
    // 0x3abd64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3abd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3abd68:
    // 0x3abd68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3abd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3abd6c:
    // 0x3abd6c: 0xc0ea12a  jal         func_3A84A8
label_3abd70:
    if (ctx->pc == 0x3ABD70u) {
        ctx->pc = 0x3ABD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD6Cu;
        // 0x3abd70: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD74u;
        goto label_3abd74;
    }
    ctx->pc = 0x3ABD6Cu;
    SET_GPR_U32(ctx, 31, 0x3ABD74u);
    ctx->pc = 0x3ABD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD6Cu;
    // 0x3abd70: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ABD6Cu, 0x3ABD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD74u;
label_3abd74:
    // 0x3abd74: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3abd74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3abd78:
    // 0x3abd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3abd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3abd7c:
    // 0x3abd7c: 0xc0ea146  jal         func_3A8518
label_3abd80:
    if (ctx->pc == 0x3ABD80u) {
        ctx->pc = 0x3ABD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD7Cu;
        // 0x3abd80: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD84u;
        goto label_3abd84;
    }
    ctx->pc = 0x3ABD7Cu;
    SET_GPR_U32(ctx, 31, 0x3ABD84u);
    ctx->pc = 0x3ABD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD7Cu;
    // 0x3abd80: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ABD7Cu, 0x3ABD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD84u;
label_3abd84:
    // 0x3abd84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3abd84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abd88:
    // 0x3abd88: 0xc0ea14c  jal         func_3A8530
label_3abd8c:
    if (ctx->pc == 0x3ABD8Cu) {
        ctx->pc = 0x3ABD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD88u;
        // 0x3abd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD90u;
        goto label_3abd90;
    }
    ctx->pc = 0x3ABD88u;
    SET_GPR_U32(ctx, 31, 0x3ABD90u);
    ctx->pc = 0x3ABD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD88u;
    // 0x3abd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3ABD88u, 0x3ABD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD90u;
label_3abd90:
    // 0x3abd90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3abd90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abd94:
    // 0x3abd94: 0xc0ea146  jal         func_3A8518
label_3abd98:
    if (ctx->pc == 0x3ABD98u) {
        ctx->pc = 0x3ABD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD94u;
        // 0x3abd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD9Cu;
        goto label_3abd9c;
    }
    ctx->pc = 0x3ABD94u;
    SET_GPR_U32(ctx, 31, 0x3ABD9Cu);
    ctx->pc = 0x3ABD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD94u;
    // 0x3abd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ABD94u, 0x3ABD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD9Cu;
label_3abd9c:
    // 0x3abd9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3abd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3abda0:
    // 0x3abda0: 0xc0e858c  jal         func_3A1630
label_3abda4:
    if (ctx->pc == 0x3ABDA4u) {
        ctx->pc = 0x3ABDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDA0u;
        // 0x3abda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDA8u;
        goto label_3abda8;
    }
    ctx->pc = 0x3ABDA0u;
    SET_GPR_U32(ctx, 31, 0x3ABDA8u);
    ctx->pc = 0x3ABDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDA0u;
    // 0x3abda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ABDA0u, 0x3ABDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDA8u;
label_3abda8:
    // 0x3abda8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3abda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3abdac:
    // 0x3abdac: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3abdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3abdb0:
    // 0x3abdb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3abdb4:
    // 0x3abdb4: 0xc0e896e  jal         func_3A25B8
label_3abdb8:
    if (ctx->pc == 0x3ABDB8u) {
        ctx->pc = 0x3ABDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDB4u;
        // 0x3abdb8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDBCu;
        goto label_3abdbc;
    }
    ctx->pc = 0x3ABDB4u;
    SET_GPR_U32(ctx, 31, 0x3ABDBCu);
    ctx->pc = 0x3ABDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDB4u;
    // 0x3abdb8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3ABDB4u, 0x3ABDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDBCu;
label_3abdbc:
    // 0x3abdbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3abdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3abdc0:
    // 0x3abdc0: 0xc0e862e  jal         func_3A18B8
label_3abdc4:
    if (ctx->pc == 0x3ABDC4u) {
        ctx->pc = 0x3ABDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDC0u;
        // 0x3abdc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDC8u;
        goto label_3abdc8;
    }
    ctx->pc = 0x3ABDC0u;
    SET_GPR_U32(ctx, 31, 0x3ABDC8u);
    ctx->pc = 0x3ABDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDC0u;
    // 0x3abdc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3ABDC0u, 0x3ABDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDC8u;
label_3abdc8:
    // 0x3abdc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3abdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3abdcc:
    // 0x3abdcc: 0xc0e896c  jal         func_3A25B0
label_3abdd0:
    if (ctx->pc == 0x3ABDD0u) {
        ctx->pc = 0x3ABDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDCCu;
        // 0x3abdd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDD4u;
        goto label_3abdd4;
    }
    ctx->pc = 0x3ABDCCu;
    SET_GPR_U32(ctx, 31, 0x3ABDD4u);
    ctx->pc = 0x3ABDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDCCu;
    // 0x3abdd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3ABDCCu, 0x3ABDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDD4u;
label_3abdd4:
    // 0x3abdd4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3abdd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3abdd8:
    // 0x3abdd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3abdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3abddc:
    // 0x3abddc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3abddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3abde0:
    // 0x3abde0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3abde0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3abde4:
    // 0x3abde4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3abde4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3abde8:
    // 0x3abde8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x3abde8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_3abdec:
    // 0x3abdec: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3abdecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3abdf0:
    // 0x3abdf0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3abdf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3abdf4:
    // 0x3abdf4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3abdf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3abdf8:
    // 0x3abdf8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3abdf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3abdfc:
    // 0x3abdfc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3abdfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3abe00:
    // 0x3abe00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3abe00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3abe04:
    // 0x3abe04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3abe04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3abe08:
    // 0x3abe08: 0x3e00008  jr          $ra
label_3abe0c:
    if (ctx->pc == 0x3ABE0Cu) {
        ctx->pc = 0x3ABE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE08u;
        // 0x3abe0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABE10u;
        goto label_fallthrough_0x3abe08;
    }
    ctx->pc = 0x3ABE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE08u;
        // 0x3abe0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3abe08:
    ctx->pc = 0x3ABE10u;
}
