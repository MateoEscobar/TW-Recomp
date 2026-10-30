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

// Function: sub_0044FCC0
// Address: 0x44fcc0 - 0x450048
void sub_0044FCC0_0x44fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FCC0_0x44fcc0");
#endif

    switch (ctx->pc) {
        case 0x44fcc0u: goto label_44fcc0;
        case 0x44fcc4u: goto label_44fcc4;
        case 0x44fcc8u: goto label_44fcc8;
        case 0x44fcccu: goto label_44fccc;
        case 0x44fcd0u: goto label_44fcd0;
        case 0x44fcd4u: goto label_44fcd4;
        case 0x44fcd8u: goto label_44fcd8;
        case 0x44fcdcu: goto label_44fcdc;
        case 0x44fce0u: goto label_44fce0;
        case 0x44fce4u: goto label_44fce4;
        case 0x44fce8u: goto label_44fce8;
        case 0x44fcecu: goto label_44fcec;
        case 0x44fcf0u: goto label_44fcf0;
        case 0x44fcf4u: goto label_44fcf4;
        case 0x44fcf8u: goto label_44fcf8;
        case 0x44fcfcu: goto label_44fcfc;
        case 0x44fd00u: goto label_44fd00;
        case 0x44fd04u: goto label_44fd04;
        case 0x44fd08u: goto label_44fd08;
        case 0x44fd0cu: goto label_44fd0c;
        case 0x44fd10u: goto label_44fd10;
        case 0x44fd14u: goto label_44fd14;
        case 0x44fd18u: goto label_44fd18;
        case 0x44fd1cu: goto label_44fd1c;
        case 0x44fd20u: goto label_44fd20;
        case 0x44fd24u: goto label_44fd24;
        case 0x44fd28u: goto label_44fd28;
        case 0x44fd2cu: goto label_44fd2c;
        case 0x44fd30u: goto label_44fd30;
        case 0x44fd34u: goto label_44fd34;
        case 0x44fd38u: goto label_44fd38;
        case 0x44fd3cu: goto label_44fd3c;
        case 0x44fd40u: goto label_44fd40;
        case 0x44fd44u: goto label_44fd44;
        case 0x44fd48u: goto label_44fd48;
        case 0x44fd4cu: goto label_44fd4c;
        case 0x44fd50u: goto label_44fd50;
        case 0x44fd54u: goto label_44fd54;
        case 0x44fd58u: goto label_44fd58;
        case 0x44fd5cu: goto label_44fd5c;
        case 0x44fd60u: goto label_44fd60;
        case 0x44fd64u: goto label_44fd64;
        case 0x44fd68u: goto label_44fd68;
        case 0x44fd6cu: goto label_44fd6c;
        case 0x44fd70u: goto label_44fd70;
        case 0x44fd74u: goto label_44fd74;
        case 0x44fd78u: goto label_44fd78;
        case 0x44fd7cu: goto label_44fd7c;
        case 0x44fd80u: goto label_44fd80;
        case 0x44fd84u: goto label_44fd84;
        case 0x44fd88u: goto label_44fd88;
        case 0x44fd8cu: goto label_44fd8c;
        case 0x44fd90u: goto label_44fd90;
        case 0x44fd94u: goto label_44fd94;
        case 0x44fd98u: goto label_44fd98;
        case 0x44fd9cu: goto label_44fd9c;
        case 0x44fda0u: goto label_44fda0;
        case 0x44fda4u: goto label_44fda4;
        case 0x44fda8u: goto label_44fda8;
        case 0x44fdacu: goto label_44fdac;
        case 0x44fdb0u: goto label_44fdb0;
        case 0x44fdb4u: goto label_44fdb4;
        case 0x44fdb8u: goto label_44fdb8;
        case 0x44fdbcu: goto label_44fdbc;
        case 0x44fdc0u: goto label_44fdc0;
        case 0x44fdc4u: goto label_44fdc4;
        case 0x44fdc8u: goto label_44fdc8;
        case 0x44fdccu: goto label_44fdcc;
        case 0x44fdd0u: goto label_44fdd0;
        case 0x44fdd4u: goto label_44fdd4;
        case 0x44fdd8u: goto label_44fdd8;
        case 0x44fddcu: goto label_44fddc;
        case 0x44fde0u: goto label_44fde0;
        case 0x44fde4u: goto label_44fde4;
        case 0x44fde8u: goto label_44fde8;
        case 0x44fdecu: goto label_44fdec;
        case 0x44fdf0u: goto label_44fdf0;
        case 0x44fdf4u: goto label_44fdf4;
        case 0x44fdf8u: goto label_44fdf8;
        case 0x44fdfcu: goto label_44fdfc;
        case 0x44fe00u: goto label_44fe00;
        case 0x44fe04u: goto label_44fe04;
        case 0x44fe08u: goto label_44fe08;
        case 0x44fe0cu: goto label_44fe0c;
        case 0x44fe10u: goto label_44fe10;
        case 0x44fe14u: goto label_44fe14;
        case 0x44fe18u: goto label_44fe18;
        case 0x44fe1cu: goto label_44fe1c;
        case 0x44fe20u: goto label_44fe20;
        case 0x44fe24u: goto label_44fe24;
        case 0x44fe28u: goto label_44fe28;
        case 0x44fe2cu: goto label_44fe2c;
        case 0x44fe30u: goto label_44fe30;
        case 0x44fe34u: goto label_44fe34;
        case 0x44fe38u: goto label_44fe38;
        case 0x44fe3cu: goto label_44fe3c;
        case 0x44fe40u: goto label_44fe40;
        case 0x44fe44u: goto label_44fe44;
        case 0x44fe48u: goto label_44fe48;
        case 0x44fe4cu: goto label_44fe4c;
        case 0x44fe50u: goto label_44fe50;
        case 0x44fe54u: goto label_44fe54;
        case 0x44fe58u: goto label_44fe58;
        case 0x44fe5cu: goto label_44fe5c;
        case 0x44fe60u: goto label_44fe60;
        case 0x44fe64u: goto label_44fe64;
        case 0x44fe68u: goto label_44fe68;
        case 0x44fe6cu: goto label_44fe6c;
        case 0x44fe70u: goto label_44fe70;
        case 0x44fe74u: goto label_44fe74;
        case 0x44fe78u: goto label_44fe78;
        case 0x44fe7cu: goto label_44fe7c;
        case 0x44fe80u: goto label_44fe80;
        case 0x44fe84u: goto label_44fe84;
        case 0x44fe88u: goto label_44fe88;
        case 0x44fe8cu: goto label_44fe8c;
        case 0x44fe90u: goto label_44fe90;
        case 0x44fe94u: goto label_44fe94;
        case 0x44fe98u: goto label_44fe98;
        case 0x44fe9cu: goto label_44fe9c;
        case 0x44fea0u: goto label_44fea0;
        case 0x44fea4u: goto label_44fea4;
        case 0x44fea8u: goto label_44fea8;
        case 0x44feacu: goto label_44feac;
        case 0x44feb0u: goto label_44feb0;
        case 0x44feb4u: goto label_44feb4;
        case 0x44feb8u: goto label_44feb8;
        case 0x44febcu: goto label_44febc;
        case 0x44fec0u: goto label_44fec0;
        case 0x44fec4u: goto label_44fec4;
        case 0x44fec8u: goto label_44fec8;
        case 0x44feccu: goto label_44fecc;
        case 0x44fed0u: goto label_44fed0;
        case 0x44fed4u: goto label_44fed4;
        case 0x44fed8u: goto label_44fed8;
        case 0x44fedcu: goto label_44fedc;
        case 0x44fee0u: goto label_44fee0;
        case 0x44fee4u: goto label_44fee4;
        case 0x44fee8u: goto label_44fee8;
        case 0x44feecu: goto label_44feec;
        case 0x44fef0u: goto label_44fef0;
        case 0x44fef4u: goto label_44fef4;
        case 0x44fef8u: goto label_44fef8;
        case 0x44fefcu: goto label_44fefc;
        case 0x44ff00u: goto label_44ff00;
        case 0x44ff04u: goto label_44ff04;
        case 0x44ff08u: goto label_44ff08;
        case 0x44ff0cu: goto label_44ff0c;
        case 0x44ff10u: goto label_44ff10;
        case 0x44ff14u: goto label_44ff14;
        case 0x44ff18u: goto label_44ff18;
        case 0x44ff1cu: goto label_44ff1c;
        case 0x44ff20u: goto label_44ff20;
        case 0x44ff24u: goto label_44ff24;
        case 0x44ff28u: goto label_44ff28;
        case 0x44ff2cu: goto label_44ff2c;
        case 0x44ff30u: goto label_44ff30;
        case 0x44ff34u: goto label_44ff34;
        case 0x44ff38u: goto label_44ff38;
        case 0x44ff3cu: goto label_44ff3c;
        case 0x44ff40u: goto label_44ff40;
        case 0x44ff44u: goto label_44ff44;
        case 0x44ff48u: goto label_44ff48;
        case 0x44ff4cu: goto label_44ff4c;
        case 0x44ff50u: goto label_44ff50;
        case 0x44ff54u: goto label_44ff54;
        case 0x44ff58u: goto label_44ff58;
        case 0x44ff5cu: goto label_44ff5c;
        case 0x44ff60u: goto label_44ff60;
        case 0x44ff64u: goto label_44ff64;
        case 0x44ff68u: goto label_44ff68;
        case 0x44ff6cu: goto label_44ff6c;
        case 0x44ff70u: goto label_44ff70;
        case 0x44ff74u: goto label_44ff74;
        case 0x44ff78u: goto label_44ff78;
        case 0x44ff7cu: goto label_44ff7c;
        case 0x44ff80u: goto label_44ff80;
        case 0x44ff84u: goto label_44ff84;
        case 0x44ff88u: goto label_44ff88;
        case 0x44ff8cu: goto label_44ff8c;
        case 0x44ff90u: goto label_44ff90;
        case 0x44ff94u: goto label_44ff94;
        case 0x44ff98u: goto label_44ff98;
        case 0x44ff9cu: goto label_44ff9c;
        case 0x44ffa0u: goto label_44ffa0;
        case 0x44ffa4u: goto label_44ffa4;
        case 0x44ffa8u: goto label_44ffa8;
        case 0x44ffacu: goto label_44ffac;
        case 0x44ffb0u: goto label_44ffb0;
        case 0x44ffb4u: goto label_44ffb4;
        case 0x44ffb8u: goto label_44ffb8;
        case 0x44ffbcu: goto label_44ffbc;
        case 0x44ffc0u: goto label_44ffc0;
        case 0x44ffc4u: goto label_44ffc4;
        case 0x44ffc8u: goto label_44ffc8;
        case 0x44ffccu: goto label_44ffcc;
        case 0x44ffd0u: goto label_44ffd0;
        case 0x44ffd4u: goto label_44ffd4;
        case 0x44ffd8u: goto label_44ffd8;
        case 0x44ffdcu: goto label_44ffdc;
        case 0x44ffe0u: goto label_44ffe0;
        case 0x44ffe4u: goto label_44ffe4;
        case 0x44ffe8u: goto label_44ffe8;
        case 0x44ffecu: goto label_44ffec;
        case 0x44fff0u: goto label_44fff0;
        case 0x44fff4u: goto label_44fff4;
        case 0x44fff8u: goto label_44fff8;
        case 0x44fffcu: goto label_44fffc;
        case 0x450000u: goto label_450000;
        case 0x450004u: goto label_450004;
        case 0x450008u: goto label_450008;
        case 0x45000cu: goto label_45000c;
        case 0x450010u: goto label_450010;
        case 0x450014u: goto label_450014;
        case 0x450018u: goto label_450018;
        case 0x45001cu: goto label_45001c;
        case 0x450020u: goto label_450020;
        case 0x450024u: goto label_450024;
        case 0x450028u: goto label_450028;
        case 0x45002cu: goto label_45002c;
        case 0x450030u: goto label_450030;
        case 0x450034u: goto label_450034;
        case 0x450038u: goto label_450038;
        case 0x45003cu: goto label_45003c;
        case 0x450040u: goto label_450040;
        case 0x450044u: goto label_450044;
        default: break;
    }

    ctx->pc = 0x44fcc0u;

label_44fcc0:
    // 0x44fcc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_44fcc4:
    // 0x44fcc4: 0x3c02cff7  lui         $v0, 0xCFF7
    ctx->pc = 0x44fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53239 << 16));
label_44fcc8:
    // 0x44fcc8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x44fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_44fccc:
    // 0x44fccc: 0x3c03cee1  lui         $v1, 0xCEE1
    ctx->pc = 0x44fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52961 << 16));
label_44fcd0:
    // 0x44fcd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44fcd4:
    // 0x44fcd4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x44fcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_44fcd8:
    // 0x44fcd8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x44fcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_44fcdc:
    // 0x44fcdc: 0x3442ff78  ori         $v0, $v0, 0xFF78
    ctx->pc = 0x44fcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65400);
label_44fce0:
    // 0x44fce0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x44fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_44fce4:
    // 0x44fce4: 0x34637e10  ori         $v1, $v1, 0x7E10
    ctx->pc = 0x44fce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32272);
label_44fce8:
    // 0x44fce8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x44fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_44fcec:
    // 0x44fcec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x44fcecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44fcf0:
    // 0x44fcf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44fcf4:
    // 0x44fcf4: 0x2223824  and         $a3, $s1, $v0
    ctx->pc = 0x44fcf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_44fcf8:
    // 0x44fcf8: 0x2232824  and         $a1, $s1, $v1
    ctx->pc = 0x44fcf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_44fcfc:
    // 0x44fcfc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x44fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_44fd00:
    // 0x44fd00: 0x8e74004c  lw          $s4, 0x4C($s3)
    ctx->pc = 0x44fd00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_44fd04:
    // 0x44fd04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44fd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44fd08:
    // 0x44fd08: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x44fd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44fd0c:
    // 0x44fd0c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x44fd0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44fd10:
    // 0x44fd10: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x44fd10u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_44fd14:
    // 0x44fd14: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x44fd14u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_44fd18:
    // 0x44fd18: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x44fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_44fd1c:
    // 0x44fd1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_44fd20:
    if (ctx->pc == 0x44FD20u) {
        ctx->pc = 0x44FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD1Cu;
        // 0x44fd20: 0x31030010  andi        $v1, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FD24u;
        goto label_44fd24;
    }
    ctx->pc = 0x44FD1Cu;
    {
        const bool branch_taken_0x44fd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD1Cu;
        // 0x44fd20: 0x31030010  andi        $v1, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fd1c) {
            ctx->pc = 0x44FD30u;
            goto label_44fd30;
        }
    }
    ctx->pc = 0x44FD24u;
label_44fd24:
    // 0x44fd24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44fd24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fd28:
    // 0x44fd28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44fd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fd2c:
    // 0x44fd2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44fd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fd30:
    // 0x44fd30: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_44fd34:
    if (ctx->pc == 0x44FD34u) {
        ctx->pc = 0x44FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD30u;
        // 0x44fd34: 0x8f828418  lw          $v0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FD38u;
        goto label_44fd38;
    }
    ctx->pc = 0x44FD30u;
    {
        const bool branch_taken_0x44fd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD30u;
        // 0x44fd34: 0x8f828418  lw          $v0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fd30) {
            ctx->pc = 0x44FD8Cu;
            goto label_44fd8c;
        }
    }
    ctx->pc = 0x44FD38u;
label_44fd38:
    // 0x44fd38: 0x3c090052  lui         $t1, 0x52
    ctx->pc = 0x44fd38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)82 << 16));
label_44fd3c:
    // 0x44fd3c: 0x252aada8  addiu       $t2, $t1, -0x5258
    ctx->pc = 0x44fd3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946216));
label_44fd40:
    // 0x44fd40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44fd44:
    // 0x44fd44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x44fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_44fd48:
    // 0x44fd48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x44fd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44fd4c:
    // 0x44fd4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44fd50:
    // 0x44fd50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44fd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44fd54:
    // 0x44fd54: 0x252dada8  addiu       $t5, $t1, -0x5258
    ctx->pc = 0x44fd54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946216));
label_44fd58:
    // 0x44fd58: 0x69a20007  ldl         $v0, 0x7($t5)
    ctx->pc = 0x44fd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_44fd5c:
    // 0x44fd5c: 0x6da20000  ldr         $v0, 0x0($t5)
    ctx->pc = 0x44fd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_44fd60:
    // 0x44fd60: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x44fd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_44fd64:
    // 0x44fd64: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x44fd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_44fd68:
    // 0x44fd68: 0xb062001b  sdl         $v0, 0x1B($v1)
    ctx->pc = 0x44fd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44fd6c:
    // 0x44fd6c: 0xb4620014  sdr         $v0, 0x14($v1)
    ctx->pc = 0x44fd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44fd70:
    // 0x44fd70: 0xb06b0023  sdl         $t3, 0x23($v1)
    ctx->pc = 0x44fd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44fd74:
    // 0x44fd74: 0xb46b001c  sdr         $t3, 0x1C($v1)
    ctx->pc = 0x44fd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44fd78:
    // 0x44fd78: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x44fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_44fd7c:
    // 0x44fd7c: 0x40f809  jalr        $v0
label_44fd80:
    if (ctx->pc == 0x44FD80u) {
        ctx->pc = 0x44FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD7Cu;
        // 0x44fd80: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FD84u;
        goto label_44fd84;
    }
    ctx->pc = 0x44FD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44FD84u);
        ctx->pc = 0x44FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD7Cu;
        // 0x44fd80: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FD7Cu, 0x44FD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44FD84u;
label_44fd84:
    // 0x44fd84: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_44fd88:
    if (ctx->pc == 0x44FD88u) {
        ctx->pc = 0x44FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD84u;
        // 0x44fd88: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FD8Cu;
        goto label_44fd8c;
    }
    ctx->pc = 0x44FD84u;
    {
        const bool branch_taken_0x44fd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD84u;
        // 0x44fd88: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fd84) {
            ctx->pc = 0x450028u;
            goto label_450028;
        }
    }
    ctx->pc = 0x44FD8Cu;
label_44fd8c:
    // 0x44fd8c: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x44fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_44fd90:
    // 0x44fd90: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_44fd94:
    if (ctx->pc == 0x44FD94u) {
        ctx->pc = 0x44FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD90u;
        // 0x44fd94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FD98u;
        goto label_44fd98;
    }
    ctx->pc = 0x44FD90u;
    {
        const bool branch_taken_0x44fd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD90u;
        // 0x44fd94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fd90) {
            ctx->pc = 0x44FE88u;
            goto label_44fe88;
        }
    }
    ctx->pc = 0x44FD98u;
label_44fd98:
    // 0x44fd98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44fd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fd9c:
    // 0x44fd9c: 0xc11ac5c  jal         func_46B170
label_44fda0:
    if (ctx->pc == 0x44FDA0u) {
        ctx->pc = 0x44FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FD9Cu;
        // 0x44fda0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FDA4u;
        goto label_44fda4;
    }
    ctx->pc = 0x44FD9Cu;
    SET_GPR_U32(ctx, 31, 0x44FDA4u);
    ctx->pc = 0x44FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FD9Cu;
    // 0x44fda0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B170u, 0x44FD9Cu, 0x44FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FDA4u;
label_44fda4:
    // 0x44fda4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44fda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44fda8:
    // 0x44fda8: 0x1220009e  beqz        $s1, . + 4 + (0x9E << 2)
label_44fdac:
    if (ctx->pc == 0x44FDACu) {
        ctx->pc = 0x44FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDA8u;
        // 0x44fdac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FDB0u;
        goto label_44fdb0;
    }
    ctx->pc = 0x44FDA8u;
    {
        const bool branch_taken_0x44fda8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDA8u;
        // 0x44fdac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fda8) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x44FDB0u;
label_44fdb0:
    // 0x44fdb0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x44fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_44fdb4:
    // 0x44fdb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44fdb8:
    // 0x44fdb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x44fdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_44fdbc:
    // 0x44fdbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x44fdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44fdc0:
    // 0x44fdc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x44fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_44fdc4:
    // 0x44fdc4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x44fdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_44fdc8:
    // 0x44fdc8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x44fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_44fdcc:
    // 0x44fdcc: 0xc11aba8  jal         func_46AEA0
label_44fdd0:
    if (ctx->pc == 0x44FDD0u) {
        ctx->pc = 0x44FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDCCu;
        // 0x44fdd0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FDD4u;
        goto label_44fdd4;
    }
    ctx->pc = 0x44FDCCu;
    SET_GPR_U32(ctx, 31, 0x44FDD4u);
    ctx->pc = 0x44FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FDCCu;
    // 0x44fdd0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x44FDCCu, 0x44FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FDD4u;
label_44fdd4:
    // 0x44fdd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_44fdd8:
    if (ctx->pc == 0x44FDD8u) {
        ctx->pc = 0x44FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDD4u;
        // 0x44fdd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FDDCu;
        goto label_44fddc;
    }
    ctx->pc = 0x44FDD4u;
    {
        const bool branch_taken_0x44fdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDD4u;
        // 0x44fdd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fdd4) {
            ctx->pc = 0x44FDE4u;
            goto label_44fde4;
        }
    }
    ctx->pc = 0x44FDDCu;
label_44fddc:
    // 0x44fddc: 0x10000091  b           . + 4 + (0x91 << 2)
label_44fde0:
    if (ctx->pc == 0x44FDE0u) {
        ctx->pc = 0x44FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDDCu;
        // 0x44fde0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FDE4u;
        goto label_44fde4;
    }
    ctx->pc = 0x44FDDCu;
    {
        const bool branch_taken_0x44fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDDCu;
        // 0x44fde0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fddc) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x44FDE4u;
label_44fde4:
    // 0x44fde4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x44fde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44fde8:
    // 0x44fde8: 0xc11a984  jal         func_46A610
label_44fdec:
    if (ctx->pc == 0x44FDECu) {
        ctx->pc = 0x44FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDE8u;
        // 0x44fdec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FDF0u;
        goto label_44fdf0;
    }
    ctx->pc = 0x44FDE8u;
    SET_GPR_U32(ctx, 31, 0x44FDF0u);
    ctx->pc = 0x44FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FDE8u;
    // 0x44fdec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x44FDE8u, 0x44FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FDF0u;
label_44fdf0:
    // 0x44fdf0: 0xc11b010  jal         func_46C040
label_44fdf4:
    if (ctx->pc == 0x44FDF4u) {
        ctx->pc = 0x44FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FDF0u;
        // 0x44fdf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FDF8u;
        goto label_44fdf8;
    }
    ctx->pc = 0x44FDF0u;
    SET_GPR_U32(ctx, 31, 0x44FDF8u);
    ctx->pc = 0x44FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FDF0u;
    // 0x44fdf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x44FDF0u, 0x44FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FDF8u;
label_44fdf8:
    // 0x44fdf8: 0xc11b3b6  jal         func_46CED8
label_44fdfc:
    if (ctx->pc == 0x44FDFCu) {
        ctx->pc = 0x44FE00u;
        goto label_44fe00;
    }
    ctx->pc = 0x44FDF8u;
    SET_GPR_U32(ctx, 31, 0x44FE00u);
    ctx->pc = 0x46CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CED8u, 0x44FDF8u, 0x44FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FE00u;
label_44fe00:
    // 0x44fe00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44fe00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44fe04:
    // 0x44fe04: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x44fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_44fe08:
    // 0x44fe08: 0xc11b448  jal         func_46D120
label_44fe0c:
    if (ctx->pc == 0x44FE0Cu) {
        ctx->pc = 0x44FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE08u;
        // 0x44fe0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FE10u;
        goto label_44fe10;
    }
    ctx->pc = 0x44FE08u;
    SET_GPR_U32(ctx, 31, 0x44FE10u);
    ctx->pc = 0x44FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FE08u;
    // 0x44fe0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D120u, 0x44FE08u, 0x44FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FE10u;
label_44fe10:
    // 0x44fe10: 0xc11b3e4  jal         func_46CF90
label_44fe14:
    if (ctx->pc == 0x44FE14u) {
        ctx->pc = 0x44FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE10u;
        // 0x44fe14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FE18u;
        goto label_44fe18;
    }
    ctx->pc = 0x44FE10u;
    SET_GPR_U32(ctx, 31, 0x44FE18u);
    ctx->pc = 0x44FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FE10u;
    // 0x44fe14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x44FE10u, 0x44FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FE18u;
label_44fe18:
    // 0x44fe18: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x44fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44fe1c:
    // 0x44fe1c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_44fe20:
    // 0x44fe20: 0x8f86841c  lw          $a2, -0x7BE4($gp)
    ctx->pc = 0x44fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
label_44fe24:
    // 0x44fe24: 0x24a53b60  addiu       $a1, $a1, 0x3B60
    ctx->pc = 0x44fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15200));
label_44fe28:
    // 0x44fe28: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x44fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_44fe2c:
    // 0x44fe2c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x44fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_44fe30:
    // 0x44fe30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44fe34:
    // 0x44fe34: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x44fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_44fe38:
    // 0x44fe38: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44fe3c:
    // 0x44fe3c: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x44fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_44fe40:
    // 0x44fe40: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x44fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_44fe44:
    // 0x44fe44: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x44fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_44fe48:
    // 0x44fe48: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x44fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_44fe4c:
    // 0x44fe4c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x44fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_44fe50:
    // 0x44fe50: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x44fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_44fe54:
    // 0x44fe54: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x44fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_44fe58:
    // 0x44fe58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x44fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_44fe5c:
    // 0x44fe5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44fe60:
    // 0x44fe60: 0xae44006c  sw          $a0, 0x6C($s2)
    ctx->pc = 0x44fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 4));
label_44fe64:
    // 0x44fe64: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x44fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_44fe68:
    // 0x44fe68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x44fe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_44fe6c:
    // 0x44fe6c: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_44fe70:
    if (ctx->pc == 0x44FE70u) {
        ctx->pc = 0x44FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE6Cu;
        // 0x44fe70: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FE74u;
        goto label_44fe74;
    }
    ctx->pc = 0x44FE6Cu;
    {
        const bool branch_taken_0x44fe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE6Cu;
        // 0x44fe70: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fe6c) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x44FE74u;
label_44fe74:
    // 0x44fe74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44fe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44fe78:
    // 0x44fe78: 0xc113c34  jal         func_44F0D0
label_44fe7c:
    if (ctx->pc == 0x44FE7Cu) {
        ctx->pc = 0x44FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE78u;
        // 0x44fe7c: 0x26850190  addiu       $a1, $s4, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FE80u;
        goto label_44fe80;
    }
    ctx->pc = 0x44FE78u;
    SET_GPR_U32(ctx, 31, 0x44FE80u);
    ctx->pc = 0x44FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FE78u;
    // 0x44fe7c: 0x26850190  addiu       $a1, $s4, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F0D0u, 0x44FE78u, 0x44FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FE80u;
label_44fe80:
    // 0x44fe80: 0x10000068  b           . + 4 + (0x68 << 2)
label_44fe84:
    if (ctx->pc == 0x44FE84u) {
        ctx->pc = 0x44FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE80u;
        // 0x44fe84: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FE88u;
        goto label_44fe88;
    }
    ctx->pc = 0x44FE80u;
    {
        const bool branch_taken_0x44fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE80u;
        // 0x44fe84: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fe80) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x44FE88u;
label_44fe88:
    // 0x44fe88: 0x10e00038  beqz        $a3, . + 4 + (0x38 << 2)
label_44fe8c:
    if (ctx->pc == 0x44FE8Cu) {
        ctx->pc = 0x44FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE88u;
        // 0x44fe8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FE90u;
        goto label_44fe90;
    }
    ctx->pc = 0x44FE88u;
    {
        const bool branch_taken_0x44fe88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE88u;
        // 0x44fe8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fe88) {
            ctx->pc = 0x44FF6Cu;
            goto label_44ff6c;
        }
    }
    ctx->pc = 0x44FE90u;
label_44fe90:
    // 0x44fe90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44fe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44fe94:
    // 0x44fe94: 0xc114818  jal         func_452060
label_44fe98:
    if (ctx->pc == 0x44FE98u) {
        ctx->pc = 0x44FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FE94u;
        // 0x44fe98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FE9Cu;
        goto label_44fe9c;
    }
    ctx->pc = 0x44FE94u;
    SET_GPR_U32(ctx, 31, 0x44FE9Cu);
    ctx->pc = 0x44FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FE94u;
    // 0x44fe98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x452060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452060u, 0x44FE94u, 0x44FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FE9Cu;
label_44fe9c:
    // 0x44fe9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x44fe9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44fea0:
    // 0x44fea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44fea4:
    // 0x44fea4: 0x16a2005f  bne         $s5, $v0, . + 4 + (0x5F << 2)
label_44fea8:
    if (ctx->pc == 0x44FEA8u) {
        ctx->pc = 0x44FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FEA4u;
        // 0x44fea8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FEACu;
        goto label_44feac;
    }
    ctx->pc = 0x44FEA4u;
    {
        const bool branch_taken_0x44fea4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x44FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FEA4u;
        // 0x44fea8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fea4) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x44FEACu;
label_44feac:
    // 0x44feac: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44feb0:
    // 0x44feb0: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x44feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_44feb4:
    // 0x44feb4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x44feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_44feb8:
    // 0x44feb8: 0x24631428  addiu       $v1, $v1, 0x1428
    ctx->pc = 0x44feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5160));
label_44febc:
    // 0x44febc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x44febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_44fec0:
    // 0x44fec0: 0x24842328  addiu       $a0, $a0, 0x2328
    ctx->pc = 0x44fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9000));
label_44fec4:
    // 0x44fec4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x44fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44fec8:
    // 0x44fec8: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x44fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_44fecc:
    // 0x44fecc: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x44feccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
label_44fed0:
    // 0x44fed0: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x44fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_44fed4:
    // 0x44fed4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x44fed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_44fed8:
    // 0x44fed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44fedc:
    if (ctx->pc == 0x44FEDCu) {
        ctx->pc = 0x44FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FED8u;
        // 0x44fedc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FEE0u;
        goto label_44fee0;
    }
    ctx->pc = 0x44FED8u;
    {
        const bool branch_taken_0x44fed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FED8u;
        // 0x44fedc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fed8) {
            ctx->pc = 0x44FEE8u;
            goto label_44fee8;
        }
    }
    ctx->pc = 0x44FEE0u;
label_44fee0:
    // 0x44fee0: 0x10000003  b           . + 4 + (0x3 << 2)
label_44fee4:
    if (ctx->pc == 0x44FEE4u) {
        ctx->pc = 0x44FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FEE0u;
        // 0x44fee4: 0x24422600  addiu       $v0, $v0, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FEE8u;
        goto label_44fee8;
    }
    ctx->pc = 0x44FEE0u;
    {
        const bool branch_taken_0x44fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FEE0u;
        // 0x44fee4: 0x24422600  addiu       $v0, $v0, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fee0) {
            ctx->pc = 0x44FEF0u;
            goto label_44fef0;
        }
    }
    ctx->pc = 0x44FEE8u;
label_44fee8:
    // 0x44fee8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x44fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_44feec:
    // 0x44feec: 0x24422590  addiu       $v0, $v0, 0x2590
    ctx->pc = 0x44feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9616));
label_44fef0:
    // 0x44fef0: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x44fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
label_44fef4:
    // 0x44fef4: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x44fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_44fef8:
    // 0x44fef8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x44fef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_44fefc:
    // 0x44fefc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_44ff00:
    if (ctx->pc == 0x44FF00u) {
        ctx->pc = 0x44FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FEFCu;
        // 0x44ff00: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF04u;
        goto label_44ff04;
    }
    ctx->pc = 0x44FEFCu;
    {
        const bool branch_taken_0x44fefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FEFCu;
        // 0x44ff00: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fefc) {
            ctx->pc = 0x44FF10u;
            goto label_44ff10;
        }
    }
    ctx->pc = 0x44FF04u;
label_44ff04:
    // 0x44ff04: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x44ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
label_44ff08:
    // 0x44ff08: 0x10000009  b           . + 4 + (0x9 << 2)
label_44ff0c:
    if (ctx->pc == 0x44FF0Cu) {
        ctx->pc = 0x44FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF08u;
        // 0x44ff0c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF10u;
        goto label_44ff10;
    }
    ctx->pc = 0x44FF08u;
    {
        const bool branch_taken_0x44ff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF08u;
        // 0x44ff0c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff08) {
            ctx->pc = 0x44FF30u;
            goto label_44ff30;
        }
    }
    ctx->pc = 0x44FF10u;
label_44ff10:
    // 0x44ff10: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x44ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_44ff14:
    // 0x44ff14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x44ff14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44ff18:
    // 0x44ff18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_44ff1c:
    if (ctx->pc == 0x44FF1Cu) {
        ctx->pc = 0x44FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF18u;
        // 0x44ff1c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF20u;
        goto label_44ff20;
    }
    ctx->pc = 0x44FF18u;
    {
        const bool branch_taken_0x44ff18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF18u;
        // 0x44ff1c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff18) {
            ctx->pc = 0x44FF2Cu;
            goto label_44ff2c;
        }
    }
    ctx->pc = 0x44FF20u;
label_44ff20:
    // 0x44ff20: 0x24422470  addiu       $v0, $v0, 0x2470
    ctx->pc = 0x44ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
label_44ff24:
    // 0x44ff24: 0x10000002  b           . + 4 + (0x2 << 2)
label_44ff28:
    if (ctx->pc == 0x44FF28u) {
        ctx->pc = 0x44FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF24u;
        // 0x44ff28: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF2Cu;
        goto label_44ff2c;
    }
    ctx->pc = 0x44FF24u;
    {
        const bool branch_taken_0x44ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF24u;
        // 0x44ff28: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff24) {
            ctx->pc = 0x44FF30u;
            goto label_44ff30;
        }
    }
    ctx->pc = 0x44FF2Cu;
label_44ff2c:
    // 0x44ff2c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x44ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_44ff30:
    // 0x44ff30: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x44ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_44ff34:
    // 0x44ff34: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x44ff34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_44ff38:
    // 0x44ff38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44ff3c:
    if (ctx->pc == 0x44FF3Cu) {
        ctx->pc = 0x44FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF38u;
        // 0x44ff3c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF40u;
        goto label_44ff40;
    }
    ctx->pc = 0x44FF38u;
    {
        const bool branch_taken_0x44ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF38u;
        // 0x44ff3c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff38) {
            ctx->pc = 0x44FF48u;
            goto label_44ff48;
        }
    }
    ctx->pc = 0x44FF40u;
label_44ff40:
    // 0x44ff40: 0x10000003  b           . + 4 + (0x3 << 2)
label_44ff44:
    if (ctx->pc == 0x44FF44u) {
        ctx->pc = 0x44FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF40u;
        // 0x44ff44: 0x24422400  addiu       $v0, $v0, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF48u;
        goto label_44ff48;
    }
    ctx->pc = 0x44FF40u;
    {
        const bool branch_taken_0x44ff40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF40u;
        // 0x44ff44: 0x24422400  addiu       $v0, $v0, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff40) {
            ctx->pc = 0x44FF50u;
            goto label_44ff50;
        }
    }
    ctx->pc = 0x44FF48u;
label_44ff48:
    // 0x44ff48: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x44ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_44ff4c:
    // 0x44ff4c: 0x244223a0  addiu       $v0, $v0, 0x23A0
    ctx->pc = 0x44ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9120));
label_44ff50:
    // 0x44ff50: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x44ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_44ff54:
    // 0x44ff54: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x44ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
label_44ff58:
    // 0x44ff58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44ff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44ff5c:
    // 0x44ff5c: 0xc113c34  jal         func_44F0D0
label_44ff60:
    if (ctx->pc == 0x44FF60u) {
        ctx->pc = 0x44FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF5Cu;
        // 0x44ff60: 0x26850190  addiu       $a1, $s4, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF64u;
        goto label_44ff64;
    }
    ctx->pc = 0x44FF5Cu;
    SET_GPR_U32(ctx, 31, 0x44FF64u);
    ctx->pc = 0x44FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FF5Cu;
    // 0x44ff60: 0x26850190  addiu       $a1, $s4, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F0D0u, 0x44FF5Cu, 0x44FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FF64u;
label_44ff64:
    // 0x44ff64: 0x1000002f  b           . + 4 + (0x2F << 2)
label_44ff68:
    if (ctx->pc == 0x44FF68u) {
        ctx->pc = 0x44FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF64u;
        // 0x44ff68: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF6Cu;
        goto label_44ff6c;
    }
    ctx->pc = 0x44FF64u;
    {
        const bool branch_taken_0x44ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF64u;
        // 0x44ff68: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff64) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x44FF6Cu;
label_44ff6c:
    // 0x44ff6c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_44ff70:
    if (ctx->pc == 0x44FF70u) {
        ctx->pc = 0x44FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF6Cu;
        // 0x44ff70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF74u;
        goto label_44ff74;
    }
    ctx->pc = 0x44FF6Cu;
    {
        const bool branch_taken_0x44ff6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF6Cu;
        // 0x44ff70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff6c) {
            ctx->pc = 0x44FFC8u;
            goto label_44ffc8;
        }
    }
    ctx->pc = 0x44FF74u;
label_44ff74:
    // 0x44ff74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x44ff74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44ff78:
    // 0x44ff78: 0xc114dfa  jal         func_4537E8
label_44ff7c:
    if (ctx->pc == 0x44FF7Cu) {
        ctx->pc = 0x44FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF78u;
        // 0x44ff7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF80u;
        goto label_44ff80;
    }
    ctx->pc = 0x44FF78u;
    SET_GPR_U32(ctx, 31, 0x44FF80u);
    ctx->pc = 0x44FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FF78u;
    // 0x44ff7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4537E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4537E8u, 0x44FF78u, 0x44FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FF80u;
label_44ff80:
    // 0x44ff80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x44ff80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44ff84:
    // 0x44ff84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ff88:
    // 0x44ff88: 0x16a20026  bne         $s5, $v0, . + 4 + (0x26 << 2)
label_44ff8c:
    if (ctx->pc == 0x44FF8Cu) {
        ctx->pc = 0x44FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF88u;
        // 0x44ff8c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF90u;
        goto label_44ff90;
    }
    ctx->pc = 0x44FF88u;
    {
        const bool branch_taken_0x44ff88 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x44FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF88u;
        // 0x44ff8c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff88) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x44FF90u;
label_44ff90:
    // 0x44ff90: 0xc115540  jal         func_455500
label_44ff94:
    if (ctx->pc == 0x44FF94u) {
        ctx->pc = 0x44FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FF90u;
        // 0x44ff94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FF98u;
        goto label_44ff98;
    }
    ctx->pc = 0x44FF90u;
    SET_GPR_U32(ctx, 31, 0x44FF98u);
    ctx->pc = 0x44FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FF90u;
    // 0x44ff94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x455500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x455500u, 0x44FF90u, 0x44FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FF98u;
label_44ff98:
    // 0x44ff98: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44ff9c:
    // 0x44ff9c: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x44ff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
label_44ffa0:
    // 0x44ffa0: 0x24c62830  addiu       $a2, $a2, 0x2830
    ctx->pc = 0x44ffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10288));
label_44ffa4:
    // 0x44ffa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44ffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44ffa8:
    // 0x44ffa8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x44ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_44ffac:
    // 0x44ffac: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x44ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_44ffb0:
    // 0x44ffb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44ffb4:
    // 0x44ffb4: 0xac660024  sw          $a2, 0x24($v1)
    ctx->pc = 0x44ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
label_44ffb8:
    // 0x44ffb8: 0xc113c34  jal         func_44F0D0
label_44ffbc:
    if (ctx->pc == 0x44FFBCu) {
        ctx->pc = 0x44FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FFB8u;
        // 0x44ffbc: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FFC0u;
        goto label_44ffc0;
    }
    ctx->pc = 0x44FFB8u;
    SET_GPR_U32(ctx, 31, 0x44FFC0u);
    ctx->pc = 0x44FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FFB8u;
    // 0x44ffbc: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F0D0u, 0x44FFB8u, 0x44FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FFC0u;
label_44ffc0:
    // 0x44ffc0: 0x10000018  b           . + 4 + (0x18 << 2)
label_44ffc4:
    if (ctx->pc == 0x44FFC4u) {
        ctx->pc = 0x44FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FFC0u;
        // 0x44ffc4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FFC8u;
        goto label_44ffc8;
    }
    ctx->pc = 0x44FFC0u;
    {
        const bool branch_taken_0x44ffc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FFC0u;
        // 0x44ffc4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ffc0) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x44FFC8u;
label_44ffc8:
    // 0x44ffc8: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x44ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_44ffcc:
    // 0x44ffcc: 0xc113c34  jal         func_44F0D0
label_44ffd0:
    if (ctx->pc == 0x44FFD0u) {
        ctx->pc = 0x44FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FFCCu;
        // 0x44ffd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FFD4u;
        goto label_44ffd4;
    }
    ctx->pc = 0x44FFCCu;
    SET_GPR_U32(ctx, 31, 0x44FFD4u);
    ctx->pc = 0x44FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FFCCu;
    // 0x44ffd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F0D0u, 0x44FFCCu, 0x44FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FFD4u;
label_44ffd4:
    // 0x44ffd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44ffd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44ffd8:
    // 0x44ffd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x44ffd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44ffdc:
    // 0x44ffdc: 0xc117acc  jal         func_45EB30
label_44ffe0:
    if (ctx->pc == 0x44FFE0u) {
        ctx->pc = 0x44FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FFDCu;
        // 0x44ffe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FFE4u;
        goto label_44ffe4;
    }
    ctx->pc = 0x44FFDCu;
    SET_GPR_U32(ctx, 31, 0x44FFE4u);
    ctx->pc = 0x44FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44FFDCu;
    // 0x44ffe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x45EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EB30u, 0x44FFDCu, 0x44FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FFE4u;
label_44ffe4:
    // 0x44ffe4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x44ffe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44ffe8:
    // 0x44ffe8: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_44ffec:
    if (ctx->pc == 0x44FFECu) {
        ctx->pc = 0x44FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FFE8u;
        // 0x44ffec: 0x8f83841c  lw          $v1, -0x7BE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44FFF0u;
        goto label_44fff0;
    }
    ctx->pc = 0x44FFE8u;
    {
        const bool branch_taken_0x44ffe8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44FFE8u;
        // 0x44ffec: 0x8f83841c  lw          $v1, -0x7BE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ffe8) {
            ctx->pc = 0x450020u;
            goto label_450020;
        }
    }
    ctx->pc = 0x44FFF0u;
label_44fff0:
    // 0x44fff0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x44fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_44fff4:
    // 0x44fff4: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x44fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_44fff8:
    // 0x44fff8: 0x8f858418  lw          $a1, -0x7BE8($gp)
    ctx->pc = 0x44fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44fffc:
    // 0x44fffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_450000:
    // 0x450000: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x450000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_450004:
    // 0x450004: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x450004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_450008:
    // 0x450008: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x450008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_45000c:
    // 0x45000c: 0x24841278  addiu       $a0, $a0, 0x1278
    ctx->pc = 0x45000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4728));
label_450010:
    // 0x450010: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x450010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_450014:
    // 0x450014: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x450014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_450018:
    // 0x450018: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x450018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_45001c:
    // 0x45001c: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x45001cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_450020:
    // 0x450020: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x450020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_450024:
    // 0x450024: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x450024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_450028:
    // 0x450028: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x450028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45002c:
    // 0x45002c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x45002cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_450030:
    // 0x450030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x450030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_450034:
    // 0x450034: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x450034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_450038:
    // 0x450038: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x450038u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45003c:
    // 0x45003c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45003cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_450040:
    // 0x450040: 0x3e00008  jr          $ra
label_450044:
    if (ctx->pc == 0x450044u) {
        ctx->pc = 0x450044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450040u;
        // 0x450044: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x450048u;
        goto label_fallthrough_0x450040;
    }
    ctx->pc = 0x450040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450040u;
        // 0x450044: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x450040:
    ctx->pc = 0x450048u;
}
