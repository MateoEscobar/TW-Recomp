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

// Function: sub_00418588
// Address: 0x418588 - 0x418a88
void sub_00418588_0x418588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418588_0x418588");
#endif

    switch (ctx->pc) {
        case 0x418630u: goto label_418630;
        case 0x418648u: goto label_418648;
        case 0x418678u: goto label_418678;
        case 0x418698u: goto label_418698;
        case 0x4186c0u: goto label_4186c0;
        case 0x418714u: goto label_418714;
        case 0x41871cu: goto label_41871c;
        case 0x418740u: goto label_418740;
        case 0x41874cu: goto label_41874c;
        case 0x418784u: goto label_418784;
        case 0x4187c8u: goto label_4187c8;
        case 0x418848u: goto label_418848;
        case 0x418890u: goto label_418890;
        case 0x4188e8u: goto label_4188e8;
        case 0x418928u: goto label_418928;
        case 0x418934u: goto label_418934;
        case 0x418968u: goto label_418968;
        case 0x418974u: goto label_418974;
        case 0x418980u: goto label_418980;
        case 0x418990u: goto label_418990;
        case 0x4189a0u: goto label_4189a0;
        case 0x4189b0u: goto label_4189b0;
        case 0x4189c0u: goto label_4189c0;
        case 0x4189d0u: goto label_4189d0;
        case 0x4189e0u: goto label_4189e0;
        case 0x418a08u: goto label_418a08;
        case 0x418a54u: goto label_418a54;
        default: break;
    }

    ctx->pc = 0x418588u;

    // 0x418588: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x418588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x41858c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41858cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418590: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x418590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x418594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x418594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418598: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x418598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x41859c: 0x26230480  addiu       $v1, $s1, 0x480
    ctx->pc = 0x41859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    // 0x4185a0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4185a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4185a4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4185a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4185a8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4185a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4185ac: 0x26230220  addiu       $v1, $s1, 0x220
    ctx->pc = 0x4185acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x4185b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4185b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4185b4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4185b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4185b8: 0x263557a0  addiu       $s5, $s1, 0x57A0
    ctx->pc = 0x4185b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 22432));
    // 0x4185bc: 0x2623041a  addiu       $v1, $s1, 0x41A
    ctx->pc = 0x4185bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1050));
    // 0x4185c0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4185c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4185c4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4185c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4185c8: 0x26360228  addiu       $s6, $s1, 0x228
    ctx->pc = 0x4185c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x4185cc: 0x262356de  addiu       $v1, $s1, 0x56DE
    ctx->pc = 0x4185ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 22238));
    // 0x4185d0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4185d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4185d4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4185d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4185d8: 0x26375740  addiu       $s7, $s1, 0x5740
    ctx->pc = 0x4185d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 22336));
    // 0x4185dc: 0x26230440  addiu       $v1, $s1, 0x440
    ctx->pc = 0x4185dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x4185e0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4185e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4185e4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4185e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x4185e8: 0x263e14d4  addiu       $fp, $s1, 0x14D4
    ctx->pc = 0x4185e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 5332));
    // 0x4185ec: 0x26230448  addiu       $v1, $s1, 0x448
    ctx->pc = 0x4185ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    // 0x4185f0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4185f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4185f4: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4185f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x4185f8: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x4185f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4185fc: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x4185fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x418600: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x418600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x418604: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x418604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x418608: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x418608u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41860c: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x41860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x418610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x418610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x418614: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x418614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x418618: 0xa2220155  sb          $v0, 0x155($s1)
    ctx->pc = 0x418618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 341), (uint8_t)GPR_U32(ctx, 2));
    // 0x41861c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418620: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x418620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x418624: 0x26220168  addiu       $v0, $s1, 0x168
    ctx->pc = 0x418624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
    // 0x418628: 0xa6200150  sh          $zero, 0x150($s1)
    ctx->pc = 0x418628u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 336), (uint16_t)GPR_U32(ctx, 0));
    // 0x41862c: 0x0  nop
    ctx->pc = 0x41862cu;
    // NOP
label_418630:
    // 0x418630: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x418630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x418634: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x418634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x418638: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x418638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x41863c: 0x2450005c  addiu       $s0, $v0, 0x5C
    ctx->pc = 0x41863cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x418640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x418640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418644: 0x0  nop
    ctx->pc = 0x418644u;
    // NOP
label_418648:
    // 0x418648: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x418648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x41864c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x41864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x418650: 0x0  nop
    ctx->pc = 0x418650u;
    // NOP
    // 0x418654: 0x0  nop
    ctx->pc = 0x418654u;
    // NOP
    // 0x418658: 0x1474fffb  bne         $v1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x418658u;
    {
        const bool branch_taken_0x418658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x41865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418658u;
        // 0x41865c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418658) {
            ctx->pc = 0x418648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418648;
        }
    }
    ctx->pc = 0x418660u;
    // 0x418660: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x418660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x418664: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x418664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x418668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41866c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x41866cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x418670: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x418670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x418674: 0x0  nop
    ctx->pc = 0x418674u;
    // NOP
label_418678:
    // 0x418678: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x418678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x41867c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x41867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x418680: 0x0  nop
    ctx->pc = 0x418680u;
    // NOP
    // 0x418684: 0x0  nop
    ctx->pc = 0x418684u;
    // NOP
    // 0x418688: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x418688u;
    {
        const bool branch_taken_0x418688 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x41868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418688u;
        // 0x41868c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418688) {
            ctx->pc = 0x418678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418678;
        }
    }
    ctx->pc = 0x418690u;
    // 0x418690: 0xc1060f6  jal         func_4183D8
    ctx->pc = 0x418690u;
    SET_GPR_U32(ctx, 31, 0x418698u);
    ctx->pc = 0x4183D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4183D8u, 0x418690u, 0x418698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418698u;
label_418698:
    // 0x418698: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x418698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41869c: 0x1474ffe4  bne         $v1, $s4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x41869Cu;
    {
        const bool branch_taken_0x41869c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x4186A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41869Cu;
        // 0x4186a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41869c) {
            ctx->pc = 0x418630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418630;
        }
    }
    ctx->pc = 0x4186A4u;
    // 0x4186a4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4186a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4186a8: 0xa6200222  sh          $zero, 0x222($s1)
    ctx->pc = 0x4186a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x4186ac: 0xa6200224  sh          $zero, 0x224($s1)
    ctx->pc = 0x4186acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 0));
    // 0x4186b0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x4186b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4186b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4186b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4186b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4186b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4186bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4186bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4186c0:
    // 0x4186c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4186c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4186c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4186c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4186c8: 0x0  nop
    ctx->pc = 0x4186c8u;
    // NOP
    // 0x4186cc: 0x0  nop
    ctx->pc = 0x4186ccu;
    // NOP
    // 0x4186d0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4186D0u;
    {
        const bool branch_taken_0x4186d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4186D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4186D0u;
        // 0x4186d4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4186d0) {
            ctx->pc = 0x4186C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4186c0;
        }
    }
    ctx->pc = 0x4186D8u;
    // 0x4186d8: 0xa6200456  sh          $zero, 0x456($s1)
    ctx->pc = 0x4186d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1110), (uint16_t)GPR_U32(ctx, 0));
    // 0x4186dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4186dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4186e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4186e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4186e4: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x4186e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4186e8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4186e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4186ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4186ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4186f0: 0xae2202b8  sw          $v0, 0x2B8($s1)
    ctx->pc = 0x4186f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
    // 0x4186f4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x4186f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4186f8: 0xae220234  sw          $v0, 0x234($s1)
    ctx->pc = 0x4186f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 2));
    // 0x4186fc: 0xae22025c  sw          $v0, 0x25C($s1)
    ctx->pc = 0x4186fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 2));
    // 0x418700: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x418700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    // 0x418704: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x418704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x418708: 0xae220280  sw          $v0, 0x280($s1)
    ctx->pc = 0x418708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
    // 0x41870c: 0xc1077d0  jal         func_41DF40
    ctx->pc = 0x41870Cu;
    SET_GPR_U32(ctx, 31, 0x418714u);
    ctx->pc = 0x418710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41870Cu;
    // 0x418710: 0xae220284  sw          $v0, 0x284($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DF40u, 0x41870Cu, 0x418714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418714u;
label_418714:
    // 0x418714: 0xc107c1c  jal         func_41F070
    ctx->pc = 0x418714u;
    SET_GPR_U32(ctx, 31, 0x41871Cu);
    ctx->pc = 0x418718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418714u;
    // 0x418718: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F070u, 0x418714u, 0x41871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41871Cu;
label_41871c:
    // 0x41871c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418724: 0xa22356e2  sb          $v1, 0x56E2($s1)
    ctx->pc = 0x418724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22242), (uint8_t)GPR_U32(ctx, 3));
    // 0x418728: 0xae225708  sw          $v0, 0x5708($s1)
    ctx->pc = 0x418728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22280), GPR_U32(ctx, 2));
    // 0x41872c: 0xa22356e0  sb          $v1, 0x56E0($s1)
    ctx->pc = 0x41872cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22240), (uint8_t)GPR_U32(ctx, 3));
    // 0x418730: 0xae2256e8  sw          $v0, 0x56E8($s1)
    ctx->pc = 0x418730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22248), GPR_U32(ctx, 2));
    // 0x418734: 0xae2056ec  sw          $zero, 0x56EC($s1)
    ctx->pc = 0x418734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22252), GPR_U32(ctx, 0));
    // 0x418738: 0xae2056f0  sw          $zero, 0x56F0($s1)
    ctx->pc = 0x418738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22256), GPR_U32(ctx, 0));
    // 0x41873c: 0xae2056f4  sw          $zero, 0x56F4($s1)
    ctx->pc = 0x41873cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22260), GPR_U32(ctx, 0));
label_418740:
    // 0x418740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x418740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418744: 0xc063c8c  jal         func_18F230
    ctx->pc = 0x418744u;
    SET_GPR_U32(ctx, 31, 0x41874Cu);
    ctx->pc = 0x418748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418744u;
    // 0x418748: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F230u, 0x418744u, 0x41874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41874Cu;
label_41874c:
    // 0x41874c: 0x0  nop
    ctx->pc = 0x41874cu;
    // NOP
    // 0x418750: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x418750u;
    {
        const bool branch_taken_0x418750 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x418754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418750u;
        // 0x418754: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418750) {
            ctx->pc = 0x418740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418740;
        }
    }
    ctx->pc = 0x418758u;
    // 0x418758: 0xae2057a0  sw          $zero, 0x57A0($s1)
    ctx->pc = 0x418758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22432), GPR_U32(ctx, 0));
    // 0x41875c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x41875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x418760: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x418760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x418764: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x418764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x418768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x418768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41876c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418770: 0xa2a00010  sb          $zero, 0x10($s5)
    ctx->pc = 0x418770u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x418774: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x418774u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x418778: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x418778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x41877c: 0xc1062d2  jal         func_418B48
    ctx->pc = 0x41877Cu;
    SET_GPR_U32(ctx, 31, 0x418784u);
    ctx->pc = 0x418780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41877Cu;
    // 0x418780: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x418B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418B48u, 0x41877Cu, 0x418784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418784u;
label_418784:
    // 0x418784: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x418784u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x418788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41878c: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x41878cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x418790: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x418790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x418794: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x418794u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x418798: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x418798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x41879c: 0xa2220154  sb          $v0, 0x154($s1)
    ctx->pc = 0x41879cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 340), (uint8_t)GPR_U32(ctx, 2));
    // 0x4187a0: 0x3c0c006f  lui         $t4, 0x6F
    ctx->pc = 0x4187a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)111 << 16));
    // 0x4187a4: 0xae230160  sw          $v1, 0x160($s1)
    ctx->pc = 0x4187a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 3));
    // 0x4187a8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x4187a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4187ac: 0xae240164  sw          $a0, 0x164($s1)
    ctx->pc = 0x4187acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 4));
    // 0x4187b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4187b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4187b4: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x4187b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
    // 0x4187b8: 0x26270228  addiu       $a3, $s1, 0x228
    ctx->pc = 0x4187b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x4187bc: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x4187bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
    // 0x4187c0: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x4187c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    // 0x4187c4: 0xae20015c  sw          $zero, 0x15C($s1)
    ctx->pc = 0x4187c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 0));
label_4187c8:
    // 0x4187c8: 0x8d82bd30  lw          $v0, -0x42D0($t4)
    ctx->pc = 0x4187c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294950192)));
    // 0x4187cc: 0x1461821  addu        $v1, $t2, $a2
    ctx->pc = 0x4187ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x4187d0: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x4187d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x4187d4: 0x1062821  addu        $a1, $t0, $a2
    ctx->pc = 0x4187d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4187d8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4187d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4187dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4187dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4187e0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4187e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4187e4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4187e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4187e8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x4187e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4187ec: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x4187ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4187f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4187F0u;
    {
        const bool branch_taken_0x4187f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4187F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4187F0u;
        // 0x4187f4: 0xa0ab0000  sb          $t3, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4187f0) {
            ctx->pc = 0x4187C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4187c8;
        }
    }
    ctx->pc = 0x4187F8u;
    // 0x4187f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4187f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4187fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4187fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x418800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x418800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418804: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x418804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x418808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x418808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41880c: 0xae2003f4  sw          $zero, 0x3F4($s1)
    ctx->pc = 0x41880cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 0));
    // 0x418810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x418810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418814: 0xae2003f8  sw          $zero, 0x3F8($s1)
    ctx->pc = 0x418814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 0));
    // 0x418818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41881c: 0xae2003fc  sw          $zero, 0x3FC($s1)
    ctx->pc = 0x41881cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1020), GPR_U32(ctx, 0));
    // 0x418820: 0xae200400  sw          $zero, 0x400($s1)
    ctx->pc = 0x418820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 0));
    // 0x418824: 0xae200404  sw          $zero, 0x404($s1)
    ctx->pc = 0x418824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 0));
    // 0x418828: 0xa22056e6  sb          $zero, 0x56E6($s1)
    ctx->pc = 0x418828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22246), (uint8_t)GPR_U32(ctx, 0));
    // 0x41882c: 0xa6200432  sh          $zero, 0x432($s1)
    ctx->pc = 0x41882cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1074), (uint16_t)GPR_U32(ctx, 0));
    // 0x418830: 0xa6200324  sh          $zero, 0x324($s1)
    ctx->pc = 0x418830u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 0));
    // 0x418834: 0xa2230431  sb          $v1, 0x431($s1)
    ctx->pc = 0x418834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1073), (uint8_t)GPR_U32(ctx, 3));
    // 0x418838: 0xa62603ec  sh          $a2, 0x3EC($s1)
    ctx->pc = 0x418838u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1004), (uint16_t)GPR_U32(ctx, 6));
    // 0x41883c: 0xae220408  sw          $v0, 0x408($s1)
    ctx->pc = 0x41883cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1032), GPR_U32(ctx, 2));
    // 0x418840: 0xc106b7e  jal         func_41ADF8
    ctx->pc = 0x418840u;
    SET_GPR_U32(ctx, 31, 0x418848u);
    ctx->pc = 0x418844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418840u;
    // 0x418844: 0xe6200380  swc1        $f0, 0x380($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 896), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ADF8u, 0x418840u, 0x418848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418848u;
label_418848:
    // 0x418848: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x418848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x41884c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x41884cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x418850: 0xa6240326  sh          $a0, 0x326($s1)
    ctx->pc = 0x418850u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 806), (uint16_t)GPR_U32(ctx, 4));
    // 0x418854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x418854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418858: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x418858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x41885c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41885cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418860: 0xae220438  sw          $v0, 0x438($s1)
    ctx->pc = 0x418860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1080), GPR_U32(ctx, 2));
    // 0x418864: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x418864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x418868: 0xa223043c  sb          $v1, 0x43C($s1)
    ctx->pc = 0x418868u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1084), (uint8_t)GPR_U32(ctx, 3));
    // 0x41886c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x41886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x418870: 0xa6240434  sh          $a0, 0x434($s1)
    ctx->pc = 0x418870u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 4));
    // 0x418874: 0xa62056dc  sh          $zero, 0x56DC($s1)
    ctx->pc = 0x418874u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22236), (uint16_t)GPR_U32(ctx, 0));
    // 0x418878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x418878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41887c: 0xae2003f0  sw          $zero, 0x3F0($s1)
    ctx->pc = 0x41887cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 0));
    // 0x418880: 0xa2200410  sb          $zero, 0x410($s1)
    ctx->pc = 0x418880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1040), (uint8_t)GPR_U32(ctx, 0));
    // 0x418884: 0xa2200411  sb          $zero, 0x411($s1)
    ctx->pc = 0x418884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1041), (uint8_t)GPR_U32(ctx, 0));
    // 0x418888: 0xa6200412  sh          $zero, 0x412($s1)
    ctx->pc = 0x418888u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1042), (uint16_t)GPR_U32(ctx, 0));
    // 0x41888c: 0x0  nop
    ctx->pc = 0x41888cu;
    // NOP
label_418890:
    // 0x418890: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x418890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x418894: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x418894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x418898: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x418898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x41889c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x41889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4188a0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x4188a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4188a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4188A4u;
    {
        const bool branch_taken_0x4188a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4188A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188A4u;
        // 0x4188a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4188a4) {
            ctx->pc = 0x418890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418890;
        }
    }
    ctx->pc = 0x4188ACu;
    // 0x4188ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4188acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4188b0: 0xa6200454  sh          $zero, 0x454($s1)
    ctx->pc = 0x4188b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1108), (uint16_t)GPR_U32(ctx, 0));
    // 0x4188b4: 0xae300450  sw          $s0, 0x450($s1)
    ctx->pc = 0x4188b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 16));
    // 0x4188b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4188b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4188bc: 0xae300288  sw          $s0, 0x288($s1)
    ctx->pc = 0x4188bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 16));
    // 0x4188c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4188c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4188c4: 0xa2200291  sb          $zero, 0x291($s1)
    ctx->pc = 0x4188c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 657), (uint8_t)GPR_U32(ctx, 0));
    // 0x4188c8: 0x26325740  addiu       $s2, $s1, 0x5740
    ctx->pc = 0x4188c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 22336));
    // 0x4188cc: 0xa6200292  sh          $zero, 0x292($s1)
    ctx->pc = 0x4188ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 658), (uint16_t)GPR_U32(ctx, 0));
    // 0x4188d0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4188d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4188d4: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x4188d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
    // 0x4188d8: 0xae3003e4  sw          $s0, 0x3E4($s1)
    ctx->pc = 0x4188d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 996), GPR_U32(ctx, 16));
    // 0x4188dc: 0xae3056f8  sw          $s0, 0x56F8($s1)
    ctx->pc = 0x4188dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22264), GPR_U32(ctx, 16));
    // 0x4188e0: 0xc10742a  jal         func_41D0A8
    ctx->pc = 0x4188E0u;
    SET_GPR_U32(ctx, 31, 0x4188E8u);
    ctx->pc = 0x4188E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4188E0u;
    // 0x4188e4: 0xa230032a  sb          $s0, 0x32A($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 810), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D0A8u, 0x4188E0u, 0x4188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4188E8u;
label_4188e8:
    // 0x4188e8: 0xa630033a  sh          $s0, 0x33A($s1)
    ctx->pc = 0x4188e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 826), (uint16_t)GPR_U32(ctx, 16));
    // 0x4188ec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4188ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x4188f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4188f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x4188f4: 0xae20570c  sw          $zero, 0x570C($s1)
    ctx->pc = 0x4188f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22284), GPR_U32(ctx, 0));
    // 0x4188f8: 0xae205710  sw          $zero, 0x5710($s1)
    ctx->pc = 0x4188f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22288), GPR_U32(ctx, 0));
    // 0x4188fc: 0xae205714  sw          $zero, 0x5714($s1)
    ctx->pc = 0x4188fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22292), GPR_U32(ctx, 0));
    // 0x418900: 0xae205718  sw          $zero, 0x5718($s1)
    ctx->pc = 0x418900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22296), GPR_U32(ctx, 0));
    // 0x418904: 0xae20571c  sw          $zero, 0x571C($s1)
    ctx->pc = 0x418904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22300), GPR_U32(ctx, 0));
    // 0x418908: 0xae205720  sw          $zero, 0x5720($s1)
    ctx->pc = 0x418908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22304), GPR_U32(ctx, 0));
    // 0x41890c: 0xae205724  sw          $zero, 0x5724($s1)
    ctx->pc = 0x41890cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22308), GPR_U32(ctx, 0));
    // 0x418910: 0xae205728  sw          $zero, 0x5728($s1)
    ctx->pc = 0x418910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22312), GPR_U32(ctx, 0));
    // 0x418914: 0xae20572c  sw          $zero, 0x572C($s1)
    ctx->pc = 0x418914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22316), GPR_U32(ctx, 0));
    // 0x418918: 0xae205730  sw          $zero, 0x5730($s1)
    ctx->pc = 0x418918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22320), GPR_U32(ctx, 0));
    // 0x41891c: 0xae205734  sw          $zero, 0x5734($s1)
    ctx->pc = 0x41891cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22324), GPR_U32(ctx, 0));
    // 0x418920: 0xae205738  sw          $zero, 0x5738($s1)
    ctx->pc = 0x418920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22328), GPR_U32(ctx, 0));
    // 0x418924: 0x0  nop
    ctx->pc = 0x418924u;
    // NOP
label_418928:
    // 0x418928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41892c: 0xc063c9a  jal         func_18F268
    ctx->pc = 0x41892Cu;
    SET_GPR_U32(ctx, 31, 0x418934u);
    ctx->pc = 0x418930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41892Cu;
    // 0x418930: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F268u, 0x41892Cu, 0x418934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418934u;
label_418934:
    // 0x418934: 0x0  nop
    ctx->pc = 0x418934u;
    // NOP
    // 0x418938: 0x661fffb  bgez        $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x418938u;
    {
        const bool branch_taken_0x418938 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x41893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418938u;
        // 0x41893c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418938) {
            ctx->pc = 0x418928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418928;
        }
    }
    ctx->pc = 0x418940u;
    // 0x418940: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x418940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418944: 0xa22002bc  sb          $zero, 0x2BC($s1)
    ctx->pc = 0x418944u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 700), (uint8_t)GPR_U32(ctx, 0));
    // 0x418948: 0xa220033c  sb          $zero, 0x33C($s1)
    ctx->pc = 0x418948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 828), (uint8_t)GPR_U32(ctx, 0));
    // 0x41894c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418950: 0xa2200360  sb          $zero, 0x360($s1)
    ctx->pc = 0x418950u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 864), (uint8_t)GPR_U32(ctx, 0));
    // 0x418954: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x418954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x418958: 0xae30035c  sw          $s0, 0x35C($s1)
    ctx->pc = 0x418958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 16));
    // 0x41895c: 0xa2200458  sb          $zero, 0x458($s1)
    ctx->pc = 0x41895cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1112), (uint8_t)GPR_U32(ctx, 0));
    // 0x418960: 0xc1067f2  jal         func_419FC8
    ctx->pc = 0x418960u;
    SET_GPR_U32(ctx, 31, 0x418968u);
    ctx->pc = 0x418964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418960u;
    // 0x418964: 0xa220046c  sb          $zero, 0x46C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1132), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FC8u, 0x418960u, 0x418968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418968u;
label_418968:
    // 0x418968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x418968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41896c: 0xc106d30  jal         func_41B4C0
    ctx->pc = 0x41896Cu;
    SET_GPR_U32(ctx, 31, 0x418974u);
    ctx->pc = 0x418970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41896Cu;
    // 0x418970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B4C0u, 0x41896Cu, 0x418974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418974u;
label_418974:
    // 0x418974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418978: 0xc106d3c  jal         func_41B4F0
    ctx->pc = 0x418978u;
    SET_GPR_U32(ctx, 31, 0x418980u);
    ctx->pc = 0x41897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418978u;
    // 0x41897c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B4F0u, 0x418978u, 0x418980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418980u;
label_418980:
    // 0x418980: 0xae305704  sw          $s0, 0x5704($s1)
    ctx->pc = 0x418980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22276), GPR_U32(ctx, 16));
    // 0x418984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x418984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418988: 0xc1065d6  jal         func_419758
    ctx->pc = 0x418988u;
    SET_GPR_U32(ctx, 31, 0x418990u);
    ctx->pc = 0x41898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418988u;
    // 0x41898c: 0xa2200430  sb          $zero, 0x430($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1072), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419758u, 0x418988u, 0x418990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418990u;
label_418990:
    // 0x418990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x418990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418998: 0xc1073c8  jal         func_41CF20
    ctx->pc = 0x418998u;
    SET_GPR_U32(ctx, 31, 0x4189A0u);
    ctx->pc = 0x41899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418998u;
    // 0x41899c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF20u, 0x418998u, 0x4189A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4189A0u;
label_4189a0:
    // 0x4189a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4189a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4189a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4189a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4189a8: 0xc1073c8  jal         func_41CF20
    ctx->pc = 0x4189A8u;
    SET_GPR_U32(ctx, 31, 0x4189B0u);
    ctx->pc = 0x4189ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4189A8u;
    // 0x4189ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF20u, 0x4189A8u, 0x4189B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4189B0u;
label_4189b0:
    // 0x4189b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4189b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4189b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4189b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4189b8: 0xc1073c8  jal         func_41CF20
    ctx->pc = 0x4189B8u;
    SET_GPR_U32(ctx, 31, 0x4189C0u);
    ctx->pc = 0x4189BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4189B8u;
    // 0x4189bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF20u, 0x4189B8u, 0x4189C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4189C0u;
label_4189c0:
    // 0x4189c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4189c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4189c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4189c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4189c8: 0xc1073c8  jal         func_41CF20
    ctx->pc = 0x4189C8u;
    SET_GPR_U32(ctx, 31, 0x4189D0u);
    ctx->pc = 0x4189CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4189C8u;
    // 0x4189cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF20u, 0x4189C8u, 0x4189D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4189D0u;
label_4189d0:
    // 0x4189d0: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x4189d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
    // 0x4189d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4189d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4189d8: 0xc106b8c  jal         func_41AE30
    ctx->pc = 0x4189D8u;
    SET_GPR_U32(ctx, 31, 0x4189E0u);
    ctx->pc = 0x4189DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4189D8u;
    // 0x4189dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AE30u, 0x4189D8u, 0x4189E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4189E0u;
label_4189e0:
    // 0x4189e0: 0xa23056e5  sb          $s0, 0x56E5($s1)
    ctx->pc = 0x4189e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22245), (uint8_t)GPR_U32(ctx, 16));
    // 0x4189e4: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x4189e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x4189e8: 0xa22056e1  sb          $zero, 0x56E1($s1)
    ctx->pc = 0x4189e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22241), (uint8_t)GPR_U32(ctx, 0));
    // 0x4189ec: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x4189ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x4189f0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x4189f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4189f4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4189f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4189f8: 0xa23056e3  sb          $s0, 0x56E3($s1)
    ctx->pc = 0x4189f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22243), (uint8_t)GPR_U32(ctx, 16));
    // 0x4189fc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4189fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x418a00: 0xa22056e4  sb          $zero, 0x56E4($s1)
    ctx->pc = 0x418a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22244), (uint8_t)GPR_U32(ctx, 0));
    // 0x418a04: 0x0  nop
    ctx->pc = 0x418a04u;
    // NOP
label_418a08:
    // 0x418a08: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x418a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x418a0c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x418a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418a10: 0xa0600009  sb          $zero, 0x9($v1)
    ctx->pc = 0x418a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x418a14: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x418a14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x418a18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x418a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x418a1c: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x418a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x418a20: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x418a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x418a24: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x418a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x418a28: 0xa0600011  sb          $zero, 0x11($v1)
    ctx->pc = 0x418a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x418a2c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x418a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x418a30: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x418a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x418a34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x418a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x418a38: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x418A38u;
    {
        const bool branch_taken_0x418a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A38u;
        // 0x418a3c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418a38) {
            ctx->pc = 0x418A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418a08;
        }
    }
    ctx->pc = 0x418A40u;
    // 0x418a40: 0x24027530  addiu       $v0, $zero, 0x7530
    ctx->pc = 0x418a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x418a44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x418a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x418a48: 0xae22026c  sw          $v0, 0x26C($s1)
    ctx->pc = 0x418a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 2));
    // 0x418a4c: 0xc107810  jal         func_41E040
    ctx->pc = 0x418A4Cu;
    SET_GPR_U32(ctx, 31, 0x418A54u);
    ctx->pc = 0x418A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418A4Cu;
    // 0x418a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E040u, 0x418A4Cu, 0x418A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418A54u;
label_418a54:
    // 0x418a54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x418a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418a58: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x418a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x418a5c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x418a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x418a60: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x418a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x418a64: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x418a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x418a68: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x418a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x418a6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x418a6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x418a70: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x418a70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x418a74: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x418a74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x418a78: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x418a78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x418a7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x418a80: 0x3e00008  jr          $ra
    ctx->pc = 0x418A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418A80u;
        // 0x418a84: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418A88u;
}
