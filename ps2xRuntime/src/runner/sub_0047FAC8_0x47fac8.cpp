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

// Function: sub_0047FAC8
// Address: 0x47fac8 - 0x47fda0
void sub_0047FAC8_0x47fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FAC8_0x47fac8");
#endif

    switch (ctx->pc) {
        case 0x47fac8u: goto label_47fac8;
        case 0x47faccu: goto label_47facc;
        case 0x47fad0u: goto label_47fad0;
        case 0x47fad4u: goto label_47fad4;
        case 0x47fad8u: goto label_47fad8;
        case 0x47fadcu: goto label_47fadc;
        case 0x47fae0u: goto label_47fae0;
        case 0x47fae4u: goto label_47fae4;
        case 0x47fae8u: goto label_47fae8;
        case 0x47faecu: goto label_47faec;
        case 0x47faf0u: goto label_47faf0;
        case 0x47faf4u: goto label_47faf4;
        case 0x47faf8u: goto label_47faf8;
        case 0x47fafcu: goto label_47fafc;
        case 0x47fb00u: goto label_47fb00;
        case 0x47fb04u: goto label_47fb04;
        case 0x47fb08u: goto label_47fb08;
        case 0x47fb0cu: goto label_47fb0c;
        case 0x47fb10u: goto label_47fb10;
        case 0x47fb14u: goto label_47fb14;
        case 0x47fb18u: goto label_47fb18;
        case 0x47fb1cu: goto label_47fb1c;
        case 0x47fb20u: goto label_47fb20;
        case 0x47fb24u: goto label_47fb24;
        case 0x47fb28u: goto label_47fb28;
        case 0x47fb2cu: goto label_47fb2c;
        case 0x47fb30u: goto label_47fb30;
        case 0x47fb34u: goto label_47fb34;
        case 0x47fb38u: goto label_47fb38;
        case 0x47fb3cu: goto label_47fb3c;
        case 0x47fb40u: goto label_47fb40;
        case 0x47fb44u: goto label_47fb44;
        case 0x47fb48u: goto label_47fb48;
        case 0x47fb4cu: goto label_47fb4c;
        case 0x47fb50u: goto label_47fb50;
        case 0x47fb54u: goto label_47fb54;
        case 0x47fb58u: goto label_47fb58;
        case 0x47fb5cu: goto label_47fb5c;
        case 0x47fb60u: goto label_47fb60;
        case 0x47fb64u: goto label_47fb64;
        case 0x47fb68u: goto label_47fb68;
        case 0x47fb6cu: goto label_47fb6c;
        case 0x47fb70u: goto label_47fb70;
        case 0x47fb74u: goto label_47fb74;
        case 0x47fb78u: goto label_47fb78;
        case 0x47fb7cu: goto label_47fb7c;
        case 0x47fb80u: goto label_47fb80;
        case 0x47fb84u: goto label_47fb84;
        case 0x47fb88u: goto label_47fb88;
        case 0x47fb8cu: goto label_47fb8c;
        case 0x47fb90u: goto label_47fb90;
        case 0x47fb94u: goto label_47fb94;
        case 0x47fb98u: goto label_47fb98;
        case 0x47fb9cu: goto label_47fb9c;
        case 0x47fba0u: goto label_47fba0;
        case 0x47fba4u: goto label_47fba4;
        case 0x47fba8u: goto label_47fba8;
        case 0x47fbacu: goto label_47fbac;
        case 0x47fbb0u: goto label_47fbb0;
        case 0x47fbb4u: goto label_47fbb4;
        case 0x47fbb8u: goto label_47fbb8;
        case 0x47fbbcu: goto label_47fbbc;
        case 0x47fbc0u: goto label_47fbc0;
        case 0x47fbc4u: goto label_47fbc4;
        case 0x47fbc8u: goto label_47fbc8;
        case 0x47fbccu: goto label_47fbcc;
        case 0x47fbd0u: goto label_47fbd0;
        case 0x47fbd4u: goto label_47fbd4;
        case 0x47fbd8u: goto label_47fbd8;
        case 0x47fbdcu: goto label_47fbdc;
        case 0x47fbe0u: goto label_47fbe0;
        case 0x47fbe4u: goto label_47fbe4;
        case 0x47fbe8u: goto label_47fbe8;
        case 0x47fbecu: goto label_47fbec;
        case 0x47fbf0u: goto label_47fbf0;
        case 0x47fbf4u: goto label_47fbf4;
        case 0x47fbf8u: goto label_47fbf8;
        case 0x47fbfcu: goto label_47fbfc;
        case 0x47fc00u: goto label_47fc00;
        case 0x47fc04u: goto label_47fc04;
        case 0x47fc08u: goto label_47fc08;
        case 0x47fc0cu: goto label_47fc0c;
        case 0x47fc10u: goto label_47fc10;
        case 0x47fc14u: goto label_47fc14;
        case 0x47fc18u: goto label_47fc18;
        case 0x47fc1cu: goto label_47fc1c;
        case 0x47fc20u: goto label_47fc20;
        case 0x47fc24u: goto label_47fc24;
        case 0x47fc28u: goto label_47fc28;
        case 0x47fc2cu: goto label_47fc2c;
        case 0x47fc30u: goto label_47fc30;
        case 0x47fc34u: goto label_47fc34;
        case 0x47fc38u: goto label_47fc38;
        case 0x47fc3cu: goto label_47fc3c;
        case 0x47fc40u: goto label_47fc40;
        case 0x47fc44u: goto label_47fc44;
        case 0x47fc48u: goto label_47fc48;
        case 0x47fc4cu: goto label_47fc4c;
        case 0x47fc50u: goto label_47fc50;
        case 0x47fc54u: goto label_47fc54;
        case 0x47fc58u: goto label_47fc58;
        case 0x47fc5cu: goto label_47fc5c;
        case 0x47fc60u: goto label_47fc60;
        case 0x47fc64u: goto label_47fc64;
        case 0x47fc68u: goto label_47fc68;
        case 0x47fc6cu: goto label_47fc6c;
        case 0x47fc70u: goto label_47fc70;
        case 0x47fc74u: goto label_47fc74;
        case 0x47fc78u: goto label_47fc78;
        case 0x47fc7cu: goto label_47fc7c;
        case 0x47fc80u: goto label_47fc80;
        case 0x47fc84u: goto label_47fc84;
        case 0x47fc88u: goto label_47fc88;
        case 0x47fc8cu: goto label_47fc8c;
        case 0x47fc90u: goto label_47fc90;
        case 0x47fc94u: goto label_47fc94;
        case 0x47fc98u: goto label_47fc98;
        case 0x47fc9cu: goto label_47fc9c;
        case 0x47fca0u: goto label_47fca0;
        case 0x47fca4u: goto label_47fca4;
        case 0x47fca8u: goto label_47fca8;
        case 0x47fcacu: goto label_47fcac;
        case 0x47fcb0u: goto label_47fcb0;
        case 0x47fcb4u: goto label_47fcb4;
        case 0x47fcb8u: goto label_47fcb8;
        case 0x47fcbcu: goto label_47fcbc;
        case 0x47fcc0u: goto label_47fcc0;
        case 0x47fcc4u: goto label_47fcc4;
        case 0x47fcc8u: goto label_47fcc8;
        case 0x47fcccu: goto label_47fccc;
        case 0x47fcd0u: goto label_47fcd0;
        case 0x47fcd4u: goto label_47fcd4;
        case 0x47fcd8u: goto label_47fcd8;
        case 0x47fcdcu: goto label_47fcdc;
        case 0x47fce0u: goto label_47fce0;
        case 0x47fce4u: goto label_47fce4;
        case 0x47fce8u: goto label_47fce8;
        case 0x47fcecu: goto label_47fcec;
        case 0x47fcf0u: goto label_47fcf0;
        case 0x47fcf4u: goto label_47fcf4;
        case 0x47fcf8u: goto label_47fcf8;
        case 0x47fcfcu: goto label_47fcfc;
        case 0x47fd00u: goto label_47fd00;
        case 0x47fd04u: goto label_47fd04;
        case 0x47fd08u: goto label_47fd08;
        case 0x47fd0cu: goto label_47fd0c;
        case 0x47fd10u: goto label_47fd10;
        case 0x47fd14u: goto label_47fd14;
        case 0x47fd18u: goto label_47fd18;
        case 0x47fd1cu: goto label_47fd1c;
        case 0x47fd20u: goto label_47fd20;
        case 0x47fd24u: goto label_47fd24;
        case 0x47fd28u: goto label_47fd28;
        case 0x47fd2cu: goto label_47fd2c;
        case 0x47fd30u: goto label_47fd30;
        case 0x47fd34u: goto label_47fd34;
        case 0x47fd38u: goto label_47fd38;
        case 0x47fd3cu: goto label_47fd3c;
        case 0x47fd40u: goto label_47fd40;
        case 0x47fd44u: goto label_47fd44;
        case 0x47fd48u: goto label_47fd48;
        case 0x47fd4cu: goto label_47fd4c;
        case 0x47fd50u: goto label_47fd50;
        case 0x47fd54u: goto label_47fd54;
        case 0x47fd58u: goto label_47fd58;
        case 0x47fd5cu: goto label_47fd5c;
        case 0x47fd60u: goto label_47fd60;
        case 0x47fd64u: goto label_47fd64;
        case 0x47fd68u: goto label_47fd68;
        case 0x47fd6cu: goto label_47fd6c;
        case 0x47fd70u: goto label_47fd70;
        case 0x47fd74u: goto label_47fd74;
        case 0x47fd78u: goto label_47fd78;
        case 0x47fd7cu: goto label_47fd7c;
        case 0x47fd80u: goto label_47fd80;
        case 0x47fd84u: goto label_47fd84;
        case 0x47fd88u: goto label_47fd88;
        case 0x47fd8cu: goto label_47fd8c;
        case 0x47fd90u: goto label_47fd90;
        case 0x47fd94u: goto label_47fd94;
        case 0x47fd98u: goto label_47fd98;
        case 0x47fd9cu: goto label_47fd9c;
        default: break;
    }

    ctx->pc = 0x47fac8u;

label_47fac8:
    // 0x47fac8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x47fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_47facc:
    // 0x47facc: 0x8f828948  lw          $v0, -0x76B8($gp)
    ctx->pc = 0x47faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
label_47fad0:
    // 0x47fad0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x47fad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_47fad4:
    // 0x47fad4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x47fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_47fad8:
    // 0x47fad8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47fad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47fadc:
    // 0x47fadc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47fae0:
    // 0x47fae0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x47fae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47fae4:
    // 0x47fae4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x47fae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_47fae8:
    // 0x47fae8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x47fae8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47faec:
    // 0x47faec: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x47faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_47faf0:
    // 0x47faf0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x47faf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_47faf4:
    // 0x47faf4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x47faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_47faf8:
    // 0x47faf8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x47faf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_47fafc:
    // 0x47fafc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x47fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_47fb00:
    // 0x47fb00: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x47fb00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_47fb04:
    // 0x47fb04: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x47fb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_47fb08:
    // 0x47fb08: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x47fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_47fb0c:
    // 0x47fb0c: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
label_47fb10:
    if (ctx->pc == 0x47FB10u) {
        ctx->pc = 0x47FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB0Cu;
        // 0x47fb10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FB14u;
        goto label_47fb14;
    }
    ctx->pc = 0x47FB0Cu;
    {
        const bool branch_taken_0x47fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB0Cu;
        // 0x47fb10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fb0c) {
            ctx->pc = 0x47FD6Cu;
            goto label_47fd6c;
        }
    }
    ctx->pc = 0x47FB14u;
label_47fb14:
    // 0x47fb14: 0xc120e2a  jal         func_4838A8
label_47fb18:
    if (ctx->pc == 0x47FB18u) {
        ctx->pc = 0x47FB1Cu;
        goto label_47fb1c;
    }
    ctx->pc = 0x47FB14u;
    SET_GPR_U32(ctx, 31, 0x47FB1Cu);
    ctx->pc = 0x4838A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4838A8u, 0x47FB14u, 0x47FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FB1Cu;
label_47fb1c:
    // 0x47fb1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_47fb20:
    if (ctx->pc == 0x47FB20u) {
        ctx->pc = 0x47FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB1Cu;
        // 0x47fb20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FB24u;
        goto label_47fb24;
    }
    ctx->pc = 0x47FB1Cu;
    {
        const bool branch_taken_0x47fb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB1Cu;
        // 0x47fb20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fb1c) {
            ctx->pc = 0x47FB48u;
            goto label_47fb48;
        }
    }
    ctx->pc = 0x47FB24u;
label_47fb24:
    // 0x47fb24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47fb28:
    // 0x47fb28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47fb2c:
    // 0x47fb2c: 0xc11eff2  jal         func_47BFC8
label_47fb30:
    if (ctx->pc == 0x47FB30u) {
        ctx->pc = 0x47FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB2Cu;
        // 0x47fb30: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FB34u;
        goto label_47fb34;
    }
    ctx->pc = 0x47FB2Cu;
    SET_GPR_U32(ctx, 31, 0x47FB34u);
    ctx->pc = 0x47FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47FB2Cu;
    // 0x47fb30: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47FB2Cu, 0x47FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FB34u;
label_47fb34:
    // 0x47fb34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47fb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47fb38:
    // 0x47fb38: 0xc11f024  jal         func_47C090
label_47fb3c:
    if (ctx->pc == 0x47FB3Cu) {
        ctx->pc = 0x47FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB38u;
        // 0x47fb3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FB40u;
        goto label_47fb40;
    }
    ctx->pc = 0x47FB38u;
    SET_GPR_U32(ctx, 31, 0x47FB40u);
    ctx->pc = 0x47FB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47FB38u;
    // 0x47fb3c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47FB38u, 0x47FB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FB40u;
label_47fb40:
    // 0x47fb40: 0x1000008b  b           . + 4 + (0x8B << 2)
label_47fb44:
    if (ctx->pc == 0x47FB44u) {
        ctx->pc = 0x47FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB40u;
        // 0x47fb44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FB48u;
        goto label_47fb48;
    }
    ctx->pc = 0x47FB40u;
    {
        const bool branch_taken_0x47fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB40u;
        // 0x47fb44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fb40) {
            ctx->pc = 0x47FD70u;
            goto label_47fd70;
        }
    }
    ctx->pc = 0x47FB48u;
label_47fb48:
    // 0x47fb48: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_47fb4c:
    // 0x47fb4c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x47fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_47fb50:
    // 0x47fb50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x47fb50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47fb54:
    // 0x47fb54: 0x2463db70  addiu       $v1, $v1, -0x2490
    ctx->pc = 0x47fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957936));
label_47fb58:
    // 0x47fb58: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47fb5c:
    // 0x47fb5c: 0x8c440118  lw          $a0, 0x118($v0)
    ctx->pc = 0x47fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_47fb60:
    // 0x47fb60: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
label_47fb64:
    if (ctx->pc == 0x47FB64u) {
        ctx->pc = 0x47FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB60u;
        // 0x47fb64: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FB68u;
        goto label_47fb68;
    }
    ctx->pc = 0x47FB60u;
    {
        const bool branch_taken_0x47fb60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x47FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB60u;
        // 0x47fb64: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fb60) {
            ctx->pc = 0x47FC40u;
            goto label_47fc40;
        }
    }
    ctx->pc = 0x47FB68u;
label_47fb68:
    // 0x47fb68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47fb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47fb6c:
    // 0x47fb6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_47fb70:
    if (ctx->pc == 0x47FB70u) {
        ctx->pc = 0x47FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB6Cu;
        // 0x47fb70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FB74u;
        goto label_47fb74;
    }
    ctx->pc = 0x47FB6Cu;
    {
        const bool branch_taken_0x47fb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB6Cu;
        // 0x47fb70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fb6c) {
            ctx->pc = 0x47FBA8u;
            goto label_47fba8;
        }
    }
    ctx->pc = 0x47FB74u;
label_47fb74:
    // 0x47fb74: 0x8f8385fc  lw          $v1, -0x7A04($gp)
    ctx->pc = 0x47fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_47fb78:
    // 0x47fb78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47fb7c:
    // 0x47fb7c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_47fb80:
    if (ctx->pc == 0x47FB80u) {
        ctx->pc = 0x47FB84u;
        goto label_47fb84;
    }
    ctx->pc = 0x47FB7Cu;
    {
        const bool branch_taken_0x47fb7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x47fb7c) {
            ctx->pc = 0x47FBA8u;
            goto label_47fba8;
        }
    }
    ctx->pc = 0x47FB84u;
label_47fb84:
    // 0x47fb84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x47fb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47fb88:
    // 0x47fb88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x47fb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_47fb8c:
    // 0x47fb8c: 0x0  nop
    ctx->pc = 0x47fb8cu;
    // NOP
label_47fb90:
    // 0x47fb90: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x47fb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_47fb94:
    // 0x47fb94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_47fb98:
    if (ctx->pc == 0x47FB98u) {
        ctx->pc = 0x47FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB94u;
        // 0x47fb98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FB9Cu;
        goto label_47fb9c;
    }
    ctx->pc = 0x47FB94u;
    {
        const bool branch_taken_0x47fb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FB94u;
        // 0x47fb98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fb94) {
            ctx->pc = 0x47FBA8u;
            goto label_47fba8;
        }
    }
    ctx->pc = 0x47FB9Cu;
label_47fb9c:
    // 0x47fb9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x47fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47fba0:
    // 0x47fba0: 0x5622fffb  bnel        $s1, $v0, . + 4 + (-0x5 << 2)
label_47fba4:
    if (ctx->pc == 0x47FBA4u) {
        ctx->pc = 0x47FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FBA0u;
        // 0x47fba4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FBA8u;
        goto label_47fba8;
    }
    ctx->pc = 0x47FBA0u;
    {
        const bool branch_taken_0x47fba0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x47fba0) {
            ctx->pc = 0x47FBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FBA0u;
            // 0x47fba4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fb90;
        }
    }
    ctx->pc = 0x47FBA8u;
label_47fba8:
    // 0x47fba8: 0x54850026  bnel        $a0, $a1, . + 4 + (0x26 << 2)
label_47fbac:
    if (ctx->pc == 0x47FBACu) {
        ctx->pc = 0x47FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FBA8u;
        // 0x47fbac: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FBB0u;
        goto label_47fbb0;
    }
    ctx->pc = 0x47FBA8u;
    {
        const bool branch_taken_0x47fba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x47fba8) {
            ctx->pc = 0x47FBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FBA8u;
            // 0x47fbac: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FC44u;
            goto label_47fc44;
        }
    }
    ctx->pc = 0x47FBB0u;
label_47fbb0:
    // 0x47fbb0: 0x2683ad18  addiu       $v1, $s4, -0x52E8
    ctx->pc = 0x47fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_47fbb4:
    // 0x47fbb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x47fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_47fbb8:
    // 0x47fbb8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x47fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_47fbbc:
    // 0x47fbbc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x47fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_47fbc0:
    // 0x47fbc0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x47fbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_47fbc4:
    // 0x47fbc4: 0x40f809  jalr        $v0
label_47fbc8:
    if (ctx->pc == 0x47FBC8u) {
        ctx->pc = 0x47FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FBC4u;
        // 0x47fbc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FBCCu;
        goto label_47fbcc;
    }
    ctx->pc = 0x47FBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FBCCu);
        ctx->pc = 0x47FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FBC4u;
        // 0x47fbc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FBC4u, 0x47FBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FBCCu;
label_47fbcc:
    // 0x47fbcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47fbccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47fbd0:
    // 0x47fbd0: 0x8f8285fc  lw          $v0, -0x7A04($gp)
    ctx->pc = 0x47fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_47fbd4:
    // 0x47fbd4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_47fbd8:
    if (ctx->pc == 0x47FBD8u) {
        ctx->pc = 0x47FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FBD4u;
        // 0x47fbd8: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FBDCu;
        goto label_47fbdc;
    }
    ctx->pc = 0x47FBD4u;
    {
        const bool branch_taken_0x47fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FBD4u;
        // 0x47fbd8: 0x8f828600  lw          $v0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fbd4) {
            ctx->pc = 0x47FC24u;
            goto label_47fc24;
        }
    }
    ctx->pc = 0x47FBDCu;
label_47fbdc:
    // 0x47fbdc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_47fbe0:
    if (ctx->pc == 0x47FBE0u) {
        ctx->pc = 0x47FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FBDCu;
        // 0x47fbe0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FBE4u;
        goto label_47fbe4;
    }
    ctx->pc = 0x47FBDCu;
    {
        const bool branch_taken_0x47fbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FBDCu;
        // 0x47fbe0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fbdc) {
            ctx->pc = 0x47FC10u;
            goto label_47fc10;
        }
    }
    ctx->pc = 0x47FBE4u;
label_47fbe4:
    // 0x47fbe4: 0x0  nop
    ctx->pc = 0x47fbe4u;
    // NOP
label_47fbe8:
    // 0x47fbe8: 0x8f8485fc  lw          $a0, -0x7A04($gp)
    ctx->pc = 0x47fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_47fbec:
    // 0x47fbec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x47fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_47fbf0:
    // 0x47fbf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47fbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47fbf4:
    // 0x47fbf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x47fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_47fbf8:
    // 0x47fbf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x47fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47fbfc:
    // 0x47fbfc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x47fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_47fc00:
    // 0x47fc00: 0x8f828600  lw          $v0, -0x7A00($gp)
    ctx->pc = 0x47fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
label_47fc04:
    // 0x47fc04: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x47fc04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47fc08:
    // 0x47fc08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_47fc0c:
    if (ctx->pc == 0x47FC0Cu) {
        ctx->pc = 0x47FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC08u;
        // 0x47fc0c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FC10u;
        goto label_47fc10;
    }
    ctx->pc = 0x47FC08u;
    {
        const bool branch_taken_0x47fc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC08u;
        // 0x47fc0c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fc08) {
            ctx->pc = 0x47FBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fbe8;
        }
    }
    ctx->pc = 0x47FC10u;
label_47fc10:
    // 0x47fc10: 0x2683ad18  addiu       $v1, $s4, -0x52E8
    ctx->pc = 0x47fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_47fc14:
    // 0x47fc14: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x47fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_47fc18:
    // 0x47fc18: 0x40f809  jalr        $v0
label_47fc1c:
    if (ctx->pc == 0x47FC1Cu) {
        ctx->pc = 0x47FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC18u;
        // 0x47fc1c: 0x8f8485fc  lw          $a0, -0x7A04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FC20u;
        goto label_47fc20;
    }
    ctx->pc = 0x47FC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FC20u);
        ctx->pc = 0x47FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC18u;
        // 0x47fc1c: 0x8f8485fc  lw          $a0, -0x7A04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FC18u, 0x47FC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FC20u;
label_47fc20:
    // 0x47fc20: 0xaf8085fc  sw          $zero, -0x7A04($gp)
    ctx->pc = 0x47fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 0));
label_47fc24:
    // 0x47fc24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x47fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_47fc28:
    // 0x47fc28: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x47fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_47fc2c:
    // 0x47fc2c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x47fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_47fc30:
    // 0x47fc30: 0xaf9285fc  sw          $s2, -0x7A04($gp)
    ctx->pc = 0x47fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 18));
label_47fc34:
    // 0x47fc34: 0x8f828600  lw          $v0, -0x7A00($gp)
    ctx->pc = 0x47fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
label_47fc38:
    // 0x47fc38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_47fc3c:
    // 0x47fc3c: 0xaf828600  sw          $v0, -0x7A00($gp)
    ctx->pc = 0x47fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 2));
label_47fc40:
    // 0x47fc40: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x47fc40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_47fc44:
    // 0x47fc44: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_47fc48:
    if (ctx->pc == 0x47FC48u) {
        ctx->pc = 0x47FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC44u;
        // 0x47fc48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FC4Cu;
        goto label_47fc4c;
    }
    ctx->pc = 0x47FC44u;
    {
        const bool branch_taken_0x47fc44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC44u;
        // 0x47fc48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fc44) {
            ctx->pc = 0x47FC88u;
            goto label_47fc88;
        }
    }
    ctx->pc = 0x47FC4Cu;
label_47fc4c:
    // 0x47fc4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47fc50:
    // 0x47fc50: 0x5453000b  bnel        $v0, $s3, . + 4 + (0xB << 2)
label_47fc54:
    if (ctx->pc == 0x47FC54u) {
        ctx->pc = 0x47FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC50u;
        // 0x47fc54: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FC58u;
        goto label_47fc58;
    }
    ctx->pc = 0x47FC50u;
    {
        const bool branch_taken_0x47fc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x47fc50) {
            ctx->pc = 0x47FC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FC50u;
            // 0x47fc54: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FC80u;
            goto label_47fc80;
        }
    }
    ctx->pc = 0x47FC58u;
label_47fc58:
    // 0x47fc58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47fc5c:
    // 0x47fc5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x47fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_47fc60:
    // 0x47fc60: 0xc11eff2  jal         func_47BFC8
label_47fc64:
    if (ctx->pc == 0x47FC64u) {
        ctx->pc = 0x47FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC60u;
        // 0x47fc64: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FC68u;
        goto label_47fc68;
    }
    ctx->pc = 0x47FC60u;
    SET_GPR_U32(ctx, 31, 0x47FC68u);
    ctx->pc = 0x47FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47FC60u;
    // 0x47fc64: 0x34840017  ori         $a0, $a0, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47FC60u, 0x47FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FC68u;
label_47fc68:
    // 0x47fc68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47fc6c:
    // 0x47fc6c: 0xc11f024  jal         func_47C090
label_47fc70:
    if (ctx->pc == 0x47FC70u) {
        ctx->pc = 0x47FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC6Cu;
        // 0x47fc70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FC74u;
        goto label_47fc74;
    }
    ctx->pc = 0x47FC6Cu;
    SET_GPR_U32(ctx, 31, 0x47FC74u);
    ctx->pc = 0x47FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47FC6Cu;
    // 0x47fc70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47FC6Cu, 0x47FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FC74u;
label_47fc74:
    // 0x47fc74: 0x0  nop
    ctx->pc = 0x47fc74u;
    // NOP
label_47fc78:
    // 0x47fc78: 0x1000003d  b           . + 4 + (0x3D << 2)
label_47fc7c:
    if (ctx->pc == 0x47FC7Cu) {
        ctx->pc = 0x47FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC78u;
        // 0x47fc7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FC80u;
        goto label_47fc80;
    }
    ctx->pc = 0x47FC78u;
    {
        const bool branch_taken_0x47fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC78u;
        // 0x47fc7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fc78) {
            ctx->pc = 0x47FD70u;
            goto label_47fd70;
        }
    }
    ctx->pc = 0x47FC80u;
label_47fc80:
    // 0x47fc80: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
label_47fc84:
    if (ctx->pc == 0x47FC84u) {
        ctx->pc = 0x47FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC80u;
        // 0x47fc84: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FC88u;
        goto label_47fc88;
    }
    ctx->pc = 0x47FC80u;
    {
        const bool branch_taken_0x47fc80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47fc80) {
            ctx->pc = 0x47FC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FC80u;
            // 0x47fc84: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fc50;
        }
    }
    ctx->pc = 0x47FC88u;
label_47fc88:
    // 0x47fc88: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x47fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47fc8c:
    // 0x47fc8c: 0x26a20003  addiu       $v0, $s5, 0x3
    ctx->pc = 0x47fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_47fc90:
    // 0x47fc90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_47fc94:
    // 0x47fc94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x47fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_47fc98:
    // 0x47fc98: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x47fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_47fc9c:
    // 0x47fc9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_47fca0:
    if (ctx->pc == 0x47FCA0u) {
        ctx->pc = 0x47FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC9Cu;
        // 0x47fca0: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FCA4u;
        goto label_47fca4;
    }
    ctx->pc = 0x47FC9Cu;
    {
        const bool branch_taken_0x47fc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FC9Cu;
        // 0x47fca0: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fc9c) {
            ctx->pc = 0x47FCB0u;
            goto label_47fcb0;
        }
    }
    ctx->pc = 0x47FCA4u;
label_47fca4:
    // 0x47fca4: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x47fca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_47fca8:
    // 0x47fca8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_47fcac:
    if (ctx->pc == 0x47FCACu) {
        ctx->pc = 0x47FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FCA8u;
        // 0x47fcac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FCB0u;
        goto label_47fcb0;
    }
    ctx->pc = 0x47FCA8u;
    {
        const bool branch_taken_0x47fca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FCA8u;
        // 0x47fcac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fca8) {
            ctx->pc = 0x47FD70u;
            goto label_47fd70;
        }
    }
    ctx->pc = 0x47FCB0u;
label_47fcb0:
    // 0x47fcb0: 0x2683ad18  addiu       $v1, $s4, -0x52E8
    ctx->pc = 0x47fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_47fcb4:
    // 0x47fcb4: 0x8f848948  lw          $a0, -0x76B8($gp)
    ctx->pc = 0x47fcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
label_47fcb8:
    // 0x47fcb8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x47fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_47fcbc:
    // 0x47fcbc: 0x40f809  jalr        $v0
label_47fcc0:
    if (ctx->pc == 0x47FCC0u) {
        ctx->pc = 0x47FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FCBCu;
        // 0x47fcc0: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FCC4u;
        goto label_47fcc4;
    }
    ctx->pc = 0x47FCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FCC4u);
        ctx->pc = 0x47FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FCBCu;
        // 0x47fcc0: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FCBCu, 0x47FCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FCC4u;
label_47fcc4:
    // 0x47fcc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47fcc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47fcc8:
    // 0x47fcc8: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_47fccc:
    if (ctx->pc == 0x47FCCCu) {
        ctx->pc = 0x47FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FCC8u;
        // 0x47fccc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FCD0u;
        goto label_47fcd0;
    }
    ctx->pc = 0x47FCC8u;
    {
        const bool branch_taken_0x47fcc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FCC8u;
        // 0x47fccc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fcc8) {
            ctx->pc = 0x47FD6Cu;
            goto label_47fd6c;
        }
    }
    ctx->pc = 0x47FCD0u;
label_47fcd0:
    // 0x47fcd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x47fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_47fcd4:
    // 0x47fcd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47fcd8:
    // 0x47fcd8: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x47fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_47fcdc:
    // 0x47fcdc: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x47fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_47fce0:
    // 0x47fce0: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x47fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_47fce4:
    // 0x47fce4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x47fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_47fce8:
    // 0x47fce8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x47fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_47fcec:
    // 0x47fcec: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x47fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_47fcf0:
    // 0x47fcf0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x47fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_47fcf4:
    // 0x47fcf4: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_47fcf8:
    if (ctx->pc == 0x47FCF8u) {
        ctx->pc = 0x47FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FCF4u;
        // 0x47fcf8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FCFCu;
        goto label_47fcfc;
    }
    ctx->pc = 0x47FCF4u;
    {
        const bool branch_taken_0x47fcf4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FCF4u;
        // 0x47fcf8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fcf4) {
            ctx->pc = 0x47FD04u;
            goto label_47fd04;
        }
    }
    ctx->pc = 0x47FCFCu;
label_47fcfc:
    // 0x47fcfc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x47fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_47fd00:
    // 0x47fd00: 0x2447fff0  addiu       $a3, $v0, -0x10
    ctx->pc = 0x47fd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_47fd04:
    // 0x47fd04: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x47fd04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_47fd08:
    // 0x47fd08: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_47fd0c:
    if (ctx->pc == 0x47FD0Cu) {
        ctx->pc = 0x47FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD08u;
        // 0x47fd0c: 0xae070020  sw          $a3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FD10u;
        goto label_47fd10;
    }
    ctx->pc = 0x47FD08u;
    {
        const bool branch_taken_0x47fd08 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD08u;
        // 0x47fd0c: 0xae070020  sw          $a3, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fd08) {
            ctx->pc = 0x47FD18u;
            goto label_47fd18;
        }
    }
    ctx->pc = 0x47FD10u;
label_47fd10:
    // 0x47fd10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x47fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_47fd14:
    // 0x47fd14: 0x2448fff8  addiu       $t0, $v0, -0x8
    ctx->pc = 0x47fd14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_47fd18:
    // 0x47fd18: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x47fd18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_47fd1c:
    // 0x47fd1c: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_47fd20:
    if (ctx->pc == 0x47FD20u) {
        ctx->pc = 0x47FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD1Cu;
        // 0x47fd20: 0xae080024  sw          $t0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FD24u;
        goto label_47fd24;
    }
    ctx->pc = 0x47FD1Cu;
    {
        const bool branch_taken_0x47fd1c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD1Cu;
        // 0x47fd20: 0xae080024  sw          $t0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fd1c) {
            ctx->pc = 0x47FD2Cu;
            goto label_47fd2c;
        }
    }
    ctx->pc = 0x47FD24u;
label_47fd24:
    // 0x47fd24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x47fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_47fd28:
    // 0x47fd28: 0x24490000  addiu       $t1, $v0, 0x0
    ctx->pc = 0x47fd28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_47fd2c:
    // 0x47fd2c: 0xae090028  sw          $t1, 0x28($s0)
    ctx->pc = 0x47fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 9));
label_47fd30:
    // 0x47fd30: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x47fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_47fd34:
    // 0x47fd34: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x47fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_47fd38:
    // 0x47fd38: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x47fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_47fd3c:
    // 0x47fd3c: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x47fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
label_47fd40:
    // 0x47fd40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x47fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_47fd44:
    // 0x47fd44: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_47fd48:
    if (ctx->pc == 0x47FD48u) {
        ctx->pc = 0x47FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD44u;
        // 0x47fd48: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FD4Cu;
        goto label_47fd4c;
    }
    ctx->pc = 0x47FD44u;
    {
        const bool branch_taken_0x47fd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47fd44) {
            ctx->pc = 0x47FD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FD44u;
            // 0x47fd48: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FD58u;
            goto label_47fd58;
        }
    }
    ctx->pc = 0x47FD4Cu;
label_47fd4c:
    // 0x47fd4c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x47fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_47fd50:
    // 0x47fd50: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_47fd54:
    if (ctx->pc == 0x47FD54u) {
        ctx->pc = 0x47FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD50u;
        // 0x47fd54: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FD58u;
        goto label_47fd58;
    }
    ctx->pc = 0x47FD50u;
    {
        const bool branch_taken_0x47fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD50u;
        // 0x47fd54: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fd50) {
            ctx->pc = 0x47FC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fc78;
        }
    }
    ctx->pc = 0x47FD58u;
label_47fd58:
    // 0x47fd58: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x47fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_47fd5c:
    // 0x47fd5c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x47fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_47fd60:
    // 0x47fd60: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x47fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_47fd64:
    // 0x47fd64: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_47fd68:
    if (ctx->pc == 0x47FD68u) {
        ctx->pc = 0x47FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD64u;
        // 0x47fd68: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FD6Cu;
        goto label_47fd6c;
    }
    ctx->pc = 0x47FD64u;
    {
        const bool branch_taken_0x47fd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD64u;
        // 0x47fd68: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fd64) {
            ctx->pc = 0x47FC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fc78;
        }
    }
    ctx->pc = 0x47FD6Cu;
label_47fd6c:
    // 0x47fd6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47fd70:
    // 0x47fd70: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x47fd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_47fd74:
    // 0x47fd74: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x47fd74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_47fd78:
    // 0x47fd78: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x47fd78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47fd7c:
    // 0x47fd7c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x47fd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47fd80:
    // 0x47fd80: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x47fd80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47fd84:
    // 0x47fd84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47fd84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47fd88:
    // 0x47fd88: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x47fd88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47fd8c:
    // 0x47fd8c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x47fd8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47fd90:
    // 0x47fd90: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x47fd90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47fd94:
    // 0x47fd94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47fd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47fd98:
    // 0x47fd98: 0x3e00008  jr          $ra
label_47fd9c:
    if (ctx->pc == 0x47FD9Cu) {
        ctx->pc = 0x47FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD98u;
        // 0x47fd9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FDA0u;
        goto label_fallthrough_0x47fd98;
    }
    ctx->pc = 0x47FD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FD98u;
        // 0x47fd9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47fd98:
    ctx->pc = 0x47FDA0u;
}
