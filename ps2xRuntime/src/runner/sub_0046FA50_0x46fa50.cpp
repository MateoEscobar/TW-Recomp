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

// Function: sub_0046FA50
// Address: 0x46fa50 - 0x46fe60
void sub_0046FA50_0x46fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046FA50_0x46fa50");
#endif

    switch (ctx->pc) {
        case 0x46fa50u: goto label_46fa50;
        case 0x46fa54u: goto label_46fa54;
        case 0x46fa58u: goto label_46fa58;
        case 0x46fa5cu: goto label_46fa5c;
        case 0x46fa60u: goto label_46fa60;
        case 0x46fa64u: goto label_46fa64;
        case 0x46fa68u: goto label_46fa68;
        case 0x46fa6cu: goto label_46fa6c;
        case 0x46fa70u: goto label_46fa70;
        case 0x46fa74u: goto label_46fa74;
        case 0x46fa78u: goto label_46fa78;
        case 0x46fa7cu: goto label_46fa7c;
        case 0x46fa80u: goto label_46fa80;
        case 0x46fa84u: goto label_46fa84;
        case 0x46fa88u: goto label_46fa88;
        case 0x46fa8cu: goto label_46fa8c;
        case 0x46fa90u: goto label_46fa90;
        case 0x46fa94u: goto label_46fa94;
        case 0x46fa98u: goto label_46fa98;
        case 0x46fa9cu: goto label_46fa9c;
        case 0x46faa0u: goto label_46faa0;
        case 0x46faa4u: goto label_46faa4;
        case 0x46faa8u: goto label_46faa8;
        case 0x46faacu: goto label_46faac;
        case 0x46fab0u: goto label_46fab0;
        case 0x46fab4u: goto label_46fab4;
        case 0x46fab8u: goto label_46fab8;
        case 0x46fabcu: goto label_46fabc;
        case 0x46fac0u: goto label_46fac0;
        case 0x46fac4u: goto label_46fac4;
        case 0x46fac8u: goto label_46fac8;
        case 0x46faccu: goto label_46facc;
        case 0x46fad0u: goto label_46fad0;
        case 0x46fad4u: goto label_46fad4;
        case 0x46fad8u: goto label_46fad8;
        case 0x46fadcu: goto label_46fadc;
        case 0x46fae0u: goto label_46fae0;
        case 0x46fae4u: goto label_46fae4;
        case 0x46fae8u: goto label_46fae8;
        case 0x46faecu: goto label_46faec;
        case 0x46faf0u: goto label_46faf0;
        case 0x46faf4u: goto label_46faf4;
        case 0x46faf8u: goto label_46faf8;
        case 0x46fafcu: goto label_46fafc;
        case 0x46fb00u: goto label_46fb00;
        case 0x46fb04u: goto label_46fb04;
        case 0x46fb08u: goto label_46fb08;
        case 0x46fb0cu: goto label_46fb0c;
        case 0x46fb10u: goto label_46fb10;
        case 0x46fb14u: goto label_46fb14;
        case 0x46fb18u: goto label_46fb18;
        case 0x46fb1cu: goto label_46fb1c;
        case 0x46fb20u: goto label_46fb20;
        case 0x46fb24u: goto label_46fb24;
        case 0x46fb28u: goto label_46fb28;
        case 0x46fb2cu: goto label_46fb2c;
        case 0x46fb30u: goto label_46fb30;
        case 0x46fb34u: goto label_46fb34;
        case 0x46fb38u: goto label_46fb38;
        case 0x46fb3cu: goto label_46fb3c;
        case 0x46fb40u: goto label_46fb40;
        case 0x46fb44u: goto label_46fb44;
        case 0x46fb48u: goto label_46fb48;
        case 0x46fb4cu: goto label_46fb4c;
        case 0x46fb50u: goto label_46fb50;
        case 0x46fb54u: goto label_46fb54;
        case 0x46fb58u: goto label_46fb58;
        case 0x46fb5cu: goto label_46fb5c;
        case 0x46fb60u: goto label_46fb60;
        case 0x46fb64u: goto label_46fb64;
        case 0x46fb68u: goto label_46fb68;
        case 0x46fb6cu: goto label_46fb6c;
        case 0x46fb70u: goto label_46fb70;
        case 0x46fb74u: goto label_46fb74;
        case 0x46fb78u: goto label_46fb78;
        case 0x46fb7cu: goto label_46fb7c;
        case 0x46fb80u: goto label_46fb80;
        case 0x46fb84u: goto label_46fb84;
        case 0x46fb88u: goto label_46fb88;
        case 0x46fb8cu: goto label_46fb8c;
        case 0x46fb90u: goto label_46fb90;
        case 0x46fb94u: goto label_46fb94;
        case 0x46fb98u: goto label_46fb98;
        case 0x46fb9cu: goto label_46fb9c;
        case 0x46fba0u: goto label_46fba0;
        case 0x46fba4u: goto label_46fba4;
        case 0x46fba8u: goto label_46fba8;
        case 0x46fbacu: goto label_46fbac;
        case 0x46fbb0u: goto label_46fbb0;
        case 0x46fbb4u: goto label_46fbb4;
        case 0x46fbb8u: goto label_46fbb8;
        case 0x46fbbcu: goto label_46fbbc;
        case 0x46fbc0u: goto label_46fbc0;
        case 0x46fbc4u: goto label_46fbc4;
        case 0x46fbc8u: goto label_46fbc8;
        case 0x46fbccu: goto label_46fbcc;
        case 0x46fbd0u: goto label_46fbd0;
        case 0x46fbd4u: goto label_46fbd4;
        case 0x46fbd8u: goto label_46fbd8;
        case 0x46fbdcu: goto label_46fbdc;
        case 0x46fbe0u: goto label_46fbe0;
        case 0x46fbe4u: goto label_46fbe4;
        case 0x46fbe8u: goto label_46fbe8;
        case 0x46fbecu: goto label_46fbec;
        case 0x46fbf0u: goto label_46fbf0;
        case 0x46fbf4u: goto label_46fbf4;
        case 0x46fbf8u: goto label_46fbf8;
        case 0x46fbfcu: goto label_46fbfc;
        case 0x46fc00u: goto label_46fc00;
        case 0x46fc04u: goto label_46fc04;
        case 0x46fc08u: goto label_46fc08;
        case 0x46fc0cu: goto label_46fc0c;
        case 0x46fc10u: goto label_46fc10;
        case 0x46fc14u: goto label_46fc14;
        case 0x46fc18u: goto label_46fc18;
        case 0x46fc1cu: goto label_46fc1c;
        case 0x46fc20u: goto label_46fc20;
        case 0x46fc24u: goto label_46fc24;
        case 0x46fc28u: goto label_46fc28;
        case 0x46fc2cu: goto label_46fc2c;
        case 0x46fc30u: goto label_46fc30;
        case 0x46fc34u: goto label_46fc34;
        case 0x46fc38u: goto label_46fc38;
        case 0x46fc3cu: goto label_46fc3c;
        case 0x46fc40u: goto label_46fc40;
        case 0x46fc44u: goto label_46fc44;
        case 0x46fc48u: goto label_46fc48;
        case 0x46fc4cu: goto label_46fc4c;
        case 0x46fc50u: goto label_46fc50;
        case 0x46fc54u: goto label_46fc54;
        case 0x46fc58u: goto label_46fc58;
        case 0x46fc5cu: goto label_46fc5c;
        case 0x46fc60u: goto label_46fc60;
        case 0x46fc64u: goto label_46fc64;
        case 0x46fc68u: goto label_46fc68;
        case 0x46fc6cu: goto label_46fc6c;
        case 0x46fc70u: goto label_46fc70;
        case 0x46fc74u: goto label_46fc74;
        case 0x46fc78u: goto label_46fc78;
        case 0x46fc7cu: goto label_46fc7c;
        case 0x46fc80u: goto label_46fc80;
        case 0x46fc84u: goto label_46fc84;
        case 0x46fc88u: goto label_46fc88;
        case 0x46fc8cu: goto label_46fc8c;
        case 0x46fc90u: goto label_46fc90;
        case 0x46fc94u: goto label_46fc94;
        case 0x46fc98u: goto label_46fc98;
        case 0x46fc9cu: goto label_46fc9c;
        case 0x46fca0u: goto label_46fca0;
        case 0x46fca4u: goto label_46fca4;
        case 0x46fca8u: goto label_46fca8;
        case 0x46fcacu: goto label_46fcac;
        case 0x46fcb0u: goto label_46fcb0;
        case 0x46fcb4u: goto label_46fcb4;
        case 0x46fcb8u: goto label_46fcb8;
        case 0x46fcbcu: goto label_46fcbc;
        case 0x46fcc0u: goto label_46fcc0;
        case 0x46fcc4u: goto label_46fcc4;
        case 0x46fcc8u: goto label_46fcc8;
        case 0x46fcccu: goto label_46fccc;
        case 0x46fcd0u: goto label_46fcd0;
        case 0x46fcd4u: goto label_46fcd4;
        case 0x46fcd8u: goto label_46fcd8;
        case 0x46fcdcu: goto label_46fcdc;
        case 0x46fce0u: goto label_46fce0;
        case 0x46fce4u: goto label_46fce4;
        case 0x46fce8u: goto label_46fce8;
        case 0x46fcecu: goto label_46fcec;
        case 0x46fcf0u: goto label_46fcf0;
        case 0x46fcf4u: goto label_46fcf4;
        case 0x46fcf8u: goto label_46fcf8;
        case 0x46fcfcu: goto label_46fcfc;
        case 0x46fd00u: goto label_46fd00;
        case 0x46fd04u: goto label_46fd04;
        case 0x46fd08u: goto label_46fd08;
        case 0x46fd0cu: goto label_46fd0c;
        case 0x46fd10u: goto label_46fd10;
        case 0x46fd14u: goto label_46fd14;
        case 0x46fd18u: goto label_46fd18;
        case 0x46fd1cu: goto label_46fd1c;
        case 0x46fd20u: goto label_46fd20;
        case 0x46fd24u: goto label_46fd24;
        case 0x46fd28u: goto label_46fd28;
        case 0x46fd2cu: goto label_46fd2c;
        case 0x46fd30u: goto label_46fd30;
        case 0x46fd34u: goto label_46fd34;
        case 0x46fd38u: goto label_46fd38;
        case 0x46fd3cu: goto label_46fd3c;
        case 0x46fd40u: goto label_46fd40;
        case 0x46fd44u: goto label_46fd44;
        case 0x46fd48u: goto label_46fd48;
        case 0x46fd4cu: goto label_46fd4c;
        case 0x46fd50u: goto label_46fd50;
        case 0x46fd54u: goto label_46fd54;
        case 0x46fd58u: goto label_46fd58;
        case 0x46fd5cu: goto label_46fd5c;
        case 0x46fd60u: goto label_46fd60;
        case 0x46fd64u: goto label_46fd64;
        case 0x46fd68u: goto label_46fd68;
        case 0x46fd6cu: goto label_46fd6c;
        case 0x46fd70u: goto label_46fd70;
        case 0x46fd74u: goto label_46fd74;
        case 0x46fd78u: goto label_46fd78;
        case 0x46fd7cu: goto label_46fd7c;
        case 0x46fd80u: goto label_46fd80;
        case 0x46fd84u: goto label_46fd84;
        case 0x46fd88u: goto label_46fd88;
        case 0x46fd8cu: goto label_46fd8c;
        case 0x46fd90u: goto label_46fd90;
        case 0x46fd94u: goto label_46fd94;
        case 0x46fd98u: goto label_46fd98;
        case 0x46fd9cu: goto label_46fd9c;
        case 0x46fda0u: goto label_46fda0;
        case 0x46fda4u: goto label_46fda4;
        case 0x46fda8u: goto label_46fda8;
        case 0x46fdacu: goto label_46fdac;
        case 0x46fdb0u: goto label_46fdb0;
        case 0x46fdb4u: goto label_46fdb4;
        case 0x46fdb8u: goto label_46fdb8;
        case 0x46fdbcu: goto label_46fdbc;
        case 0x46fdc0u: goto label_46fdc0;
        case 0x46fdc4u: goto label_46fdc4;
        case 0x46fdc8u: goto label_46fdc8;
        case 0x46fdccu: goto label_46fdcc;
        case 0x46fdd0u: goto label_46fdd0;
        case 0x46fdd4u: goto label_46fdd4;
        case 0x46fdd8u: goto label_46fdd8;
        case 0x46fddcu: goto label_46fddc;
        case 0x46fde0u: goto label_46fde0;
        case 0x46fde4u: goto label_46fde4;
        case 0x46fde8u: goto label_46fde8;
        case 0x46fdecu: goto label_46fdec;
        case 0x46fdf0u: goto label_46fdf0;
        case 0x46fdf4u: goto label_46fdf4;
        case 0x46fdf8u: goto label_46fdf8;
        case 0x46fdfcu: goto label_46fdfc;
        case 0x46fe00u: goto label_46fe00;
        case 0x46fe04u: goto label_46fe04;
        case 0x46fe08u: goto label_46fe08;
        case 0x46fe0cu: goto label_46fe0c;
        case 0x46fe10u: goto label_46fe10;
        case 0x46fe14u: goto label_46fe14;
        case 0x46fe18u: goto label_46fe18;
        case 0x46fe1cu: goto label_46fe1c;
        case 0x46fe20u: goto label_46fe20;
        case 0x46fe24u: goto label_46fe24;
        case 0x46fe28u: goto label_46fe28;
        case 0x46fe2cu: goto label_46fe2c;
        case 0x46fe30u: goto label_46fe30;
        case 0x46fe34u: goto label_46fe34;
        case 0x46fe38u: goto label_46fe38;
        case 0x46fe3cu: goto label_46fe3c;
        case 0x46fe40u: goto label_46fe40;
        case 0x46fe44u: goto label_46fe44;
        case 0x46fe48u: goto label_46fe48;
        case 0x46fe4cu: goto label_46fe4c;
        case 0x46fe50u: goto label_46fe50;
        case 0x46fe54u: goto label_46fe54;
        case 0x46fe58u: goto label_46fe58;
        case 0x46fe5cu: goto label_46fe5c;
        default: break;
    }

    ctx->pc = 0x46fa50u;

label_46fa50:
    // 0x46fa50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x46fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_46fa54:
    // 0x46fa54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46fa58:
    // 0x46fa58: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x46fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_46fa5c:
    // 0x46fa5c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x46fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_46fa60:
    // 0x46fa60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x46fa60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46fa64:
    // 0x46fa64: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x46fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_46fa68:
    // 0x46fa68: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x46fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_46fa6c:
    // 0x46fa6c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x46fa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_46fa70:
    // 0x46fa70: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x46fa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_46fa74:
    // 0x46fa74: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x46fa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_46fa78:
    // 0x46fa78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46fa7c:
    // 0x46fa7c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x46fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_46fa80:
    // 0x46fa80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46fa84:
    if (ctx->pc == 0x46FA84u) {
        ctx->pc = 0x46FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FA80u;
        // 0x46fa84: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FA88u;
        goto label_46fa88;
    }
    ctx->pc = 0x46FA80u;
    {
        const bool branch_taken_0x46fa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FA80u;
        // 0x46fa84: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fa80) {
            ctx->pc = 0x46FA90u;
            goto label_46fa90;
        }
    }
    ctx->pc = 0x46FA88u;
label_46fa88:
    // 0x46fa88: 0x100000ea  b           . + 4 + (0xEA << 2)
label_46fa8c:
    if (ctx->pc == 0x46FA8Cu) {
        ctx->pc = 0x46FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FA88u;
        // 0x46fa8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FA90u;
        goto label_46fa90;
    }
    ctx->pc = 0x46FA88u;
    {
        const bool branch_taken_0x46fa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FA88u;
        // 0x46fa8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fa88) {
            ctx->pc = 0x46FE34u;
            goto label_46fe34;
        }
    }
    ctx->pc = 0x46FA90u;
label_46fa90:
    // 0x46fa90: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46fa94:
    // 0x46fa94: 0x8f8588e8  lw          $a1, -0x7718($gp)
    ctx->pc = 0x46fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46fa98:
    // 0x46fa98: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x46fa98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46fa9c:
    // 0x46fa9c: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46faa0:
    // 0x46faa0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x46faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_46faa4:
    // 0x46faa4: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x46faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_46faa8:
    // 0x46faa8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x46faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46faac:
    // 0x46faac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46faacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46fab0:
    // 0x46fab0: 0x40f809  jalr        $v0
label_46fab4:
    if (ctx->pc == 0x46FAB4u) {
        ctx->pc = 0x46FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FAB0u;
        // 0x46fab4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FAB8u;
        goto label_46fab8;
    }
    ctx->pc = 0x46FAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FAB8u);
        ctx->pc = 0x46FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FAB0u;
        // 0x46fab4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FAB0u, 0x46FAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FAB8u;
label_46fab8:
    // 0x46fab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46fab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46fabc:
    // 0x46fabc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x46fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_46fac0:
    // 0x46fac0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x46fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_46fac4:
    // 0x46fac4: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x46fac4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_46fac8:
    // 0x46fac8: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_46facc:
    if (ctx->pc == 0x46FACCu) {
        ctx->pc = 0x46FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FAC8u;
        // 0x46facc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FAD0u;
        goto label_46fad0;
    }
    ctx->pc = 0x46FAC8u;
    {
        const bool branch_taken_0x46fac8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fac8) {
            ctx->pc = 0x46FACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FAC8u;
            // 0x46facc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FAF8u;
            goto label_46faf8;
        }
    }
    ctx->pc = 0x46FAD0u;
label_46fad0:
    // 0x46fad0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x46fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46fad4:
    // 0x46fad4: 0x0  nop
    ctx->pc = 0x46fad4u;
    // NOP
label_46fad8:
    // 0x46fad8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x46fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_46fadc:
    // 0x46fadc: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x46fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_46fae0:
    // 0x46fae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46fae4:
    // 0x46fae4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x46fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_46fae8:
    // 0x46fae8: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x46fae8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_46faec:
    // 0x46faec: 0x5640fffa  bnel        $s2, $zero, . + 4 + (-0x6 << 2)
label_46faf0:
    if (ctx->pc == 0x46FAF0u) {
        ctx->pc = 0x46FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FAECu;
        // 0x46faf0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FAF4u;
        goto label_46faf4;
    }
    ctx->pc = 0x46FAECu;
    {
        const bool branch_taken_0x46faec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x46faec) {
            ctx->pc = 0x46FAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FAECu;
            // 0x46faf0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fad8;
        }
    }
    ctx->pc = 0x46FAF4u;
label_46faf4:
    // 0x46faf4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x46faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46faf8:
    // 0x46faf8: 0x26e3ad18  addiu       $v1, $s7, -0x52E8
    ctx->pc = 0x46faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46fafc:
    // 0x46fafc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x46fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_46fb00:
    // 0x46fb00: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46fb04:
    // 0x46fb04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46fb08:
    // 0x46fb08: 0x40f809  jalr        $v0
label_46fb0c:
    if (ctx->pc == 0x46FB0Cu) {
        ctx->pc = 0x46FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB08u;
        // 0x46fb0c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FB10u;
        goto label_46fb10;
    }
    ctx->pc = 0x46FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FB10u);
        ctx->pc = 0x46FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB08u;
        // 0x46fb0c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FB08u, 0x46FB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FB10u;
label_46fb10:
    // 0x46fb10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x46fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_46fb14:
    // 0x46fb14: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x46fb14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_46fb18:
    // 0x46fb18: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x46fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_46fb1c:
    // 0x46fb1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_46fb20:
    if (ctx->pc == 0x46FB20u) {
        ctx->pc = 0x46FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB1Cu;
        // 0x46fb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FB24u;
        goto label_46fb24;
    }
    ctx->pc = 0x46FB1Cu;
    {
        const bool branch_taken_0x46fb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB1Cu;
        // 0x46fb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fb1c) {
            ctx->pc = 0x46FB68u;
            goto label_46fb68;
        }
    }
    ctx->pc = 0x46FB24u;
label_46fb24:
    // 0x46fb24: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x46fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_46fb28:
    // 0x46fb28: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x46fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_46fb2c:
    // 0x46fb2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fb30:
    // 0x46fb30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x46fb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_46fb34:
    // 0x46fb34: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_46fb38:
    // 0x46fb38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46fb3c:
    // 0x46fb3c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x46fb3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46fb40:
    // 0x46fb40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x46fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46fb44:
    // 0x46fb44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46fb48:
    // 0x46fb48: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x46fb48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_46fb4c:
    // 0x46fb4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fb50:
    // 0x46fb50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46fb54:
    // 0x46fb54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x46fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_46fb58:
    // 0x46fb58: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x46fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_46fb5c:
    // 0x46fb5c: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x46fb5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_46fb60:
    // 0x46fb60: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
label_46fb64:
    if (ctx->pc == 0x46FB64u) {
        ctx->pc = 0x46FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB60u;
        // 0x46fb64: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FB68u;
        goto label_46fb68;
    }
    ctx->pc = 0x46FB60u;
    {
        const bool branch_taken_0x46fb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fb60) {
            ctx->pc = 0x46FB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FB60u;
            // 0x46fb64: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fb28;
        }
    }
    ctx->pc = 0x46FB68u;
label_46fb68:
    // 0x46fb68: 0x26f1ad18  addiu       $s1, $s7, -0x52E8
    ctx->pc = 0x46fb68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46fb6c:
    // 0x46fb6c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x46fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_46fb70:
    // 0x46fb70: 0x40f809  jalr        $v0
label_46fb74:
    if (ctx->pc == 0x46FB74u) {
        ctx->pc = 0x46FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB70u;
        // 0x46fb74: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FB78u;
        goto label_46fb78;
    }
    ctx->pc = 0x46FB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FB78u);
        ctx->pc = 0x46FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB70u;
        // 0x46fb74: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FB70u, 0x46FB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FB78u;
label_46fb78:
    // 0x46fb78: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x46fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_46fb7c:
    // 0x46fb7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46fb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46fb80:
    // 0x46fb80: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x46fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_46fb84:
    // 0x46fb84: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46fb88:
    // 0x46fb88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46fb88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46fb8c:
    // 0x46fb8c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x46fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_46fb90:
    // 0x46fb90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46fb94:
    // 0x46fb94: 0x40f809  jalr        $v0
label_46fb98:
    if (ctx->pc == 0x46FB98u) {
        ctx->pc = 0x46FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB94u;
        // 0x46fb98: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FB9Cu;
        goto label_46fb9c;
    }
    ctx->pc = 0x46FB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FB9Cu);
        ctx->pc = 0x46FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB94u;
        // 0x46fb98: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FB94u, 0x46FB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FB9Cu;
label_46fb9c:
    // 0x46fb9c: 0x124000a2  beqz        $s2, . + 4 + (0xA2 << 2)
label_46fba0:
    if (ctx->pc == 0x46FBA0u) {
        ctx->pc = 0x46FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB9Cu;
        // 0x46fba0: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FBA4u;
        goto label_46fba4;
    }
    ctx->pc = 0x46FB9Cu;
    {
        const bool branch_taken_0x46fb9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FB9Cu;
        // 0x46fba0: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fb9c) {
            ctx->pc = 0x46FE28u;
            goto label_46fe28;
        }
    }
    ctx->pc = 0x46FBA4u;
label_46fba4:
    // 0x46fba4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x46fba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46fba8:
    // 0x46fba8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fbac:
    // 0x46fbac: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
label_46fbb0:
    if (ctx->pc == 0x46FBB0u) {
        ctx->pc = 0x46FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FBACu;
        // 0x46fbb0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FBB4u;
        goto label_46fbb4;
    }
    ctx->pc = 0x46FBACu;
    {
        const bool branch_taken_0x46fbac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FBACu;
        // 0x46fbb0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fbac) {
            ctx->pc = 0x46FC74u;
            goto label_46fc74;
        }
    }
    ctx->pc = 0x46FBB4u;
label_46fbb4:
    // 0x46fbb4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x46fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46fbb8:
    // 0x46fbb8: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x46fbb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46fbbc:
    // 0x46fbbc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x46fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_46fbc0:
    // 0x46fbc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46fbc4:
    // 0x46fbc4: 0x0  nop
    ctx->pc = 0x46fbc4u;
    // NOP
label_46fbc8:
    // 0x46fbc8: 0x9483fffe  lhu         $v1, -0x2($a0)
    ctx->pc = 0x46fbc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_46fbcc:
    // 0x46fbcc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x46fbccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46fbd0:
    // 0x46fbd0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_46fbd4:
    if (ctx->pc == 0x46FBD4u) {
        ctx->pc = 0x46FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FBD0u;
        // 0x46fbd4: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FBD8u;
        goto label_46fbd8;
    }
    ctx->pc = 0x46FBD0u;
    {
        const bool branch_taken_0x46fbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46fbd0) {
            ctx->pc = 0x46FBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FBD0u;
            // 0x46fbd4: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FBFCu;
            goto label_46fbfc;
        }
    }
    ctx->pc = 0x46FBD8u;
label_46fbd8:
    // 0x46fbd8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46fbdc:
    if (ctx->pc == 0x46FBDCu) {
        ctx->pc = 0x46FBE0u;
        goto label_46fbe0;
    }
    ctx->pc = 0x46FBD8u;
    {
        const bool branch_taken_0x46fbd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fbd8) {
            ctx->pc = 0x46FC04u;
            goto label_46fc04;
        }
    }
    ctx->pc = 0x46FBE0u;
label_46fbe0:
    // 0x46fbe0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_46fbe4:
    if (ctx->pc == 0x46FBE4u) {
        ctx->pc = 0x46FBE8u;
        goto label_46fbe8;
    }
    ctx->pc = 0x46FBE0u;
    {
        const bool branch_taken_0x46fbe0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fbe0) {
            ctx->pc = 0x46FC04u;
            goto label_46fc04;
        }
    }
    ctx->pc = 0x46FBE8u;
label_46fbe8:
    // 0x46fbe8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x46fbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_46fbec:
    // 0x46fbec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fbf0:
    // 0x46fbf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46fbf4:
    // 0x46fbf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_46fbf8:
    if (ctx->pc == 0x46FBF8u) {
        ctx->pc = 0x46FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FBF4u;
        // 0x46fbf8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FBFCu;
        goto label_46fbfc;
    }
    ctx->pc = 0x46FBF4u;
    {
        const bool branch_taken_0x46fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FBF4u;
        // 0x46fbf8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fbf4) {
            ctx->pc = 0x46FC04u;
            goto label_46fc04;
        }
    }
    ctx->pc = 0x46FBFCu;
label_46fbfc:
    // 0x46fbfc: 0x5620fff2  bnel        $s1, $zero, . + 4 + (-0xE << 2)
label_46fc00:
    if (ctx->pc == 0x46FC00u) {
        ctx->pc = 0x46FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FBFCu;
        // 0x46fc00: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC04u;
        goto label_46fc04;
    }
    ctx->pc = 0x46FBFCu;
    {
        const bool branch_taken_0x46fbfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fbfc) {
            ctx->pc = 0x46FC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FBFCu;
            // 0x46fc00: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fbc8;
        }
    }
    ctx->pc = 0x46FC04u;
label_46fc04:
    // 0x46fc04: 0x56200050  bnel        $s1, $zero, . + 4 + (0x50 << 2)
label_46fc08:
    if (ctx->pc == 0x46FC08u) {
        ctx->pc = 0x46FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC04u;
        // 0x46fc08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC0Cu;
        goto label_46fc0c;
    }
    ctx->pc = 0x46FC04u;
    {
        const bool branch_taken_0x46fc04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fc04) {
            ctx->pc = 0x46FC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FC04u;
            // 0x46fc08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FD48u;
            goto label_46fd48;
        }
    }
    ctx->pc = 0x46FC0Cu;
label_46fc0c:
    // 0x46fc0c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x46fc0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46fc10:
    // 0x46fc10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fc14:
    // 0x46fc14: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_46fc18:
    if (ctx->pc == 0x46FC18u) {
        ctx->pc = 0x46FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC14u;
        // 0x46fc18: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC1Cu;
        goto label_46fc1c;
    }
    ctx->pc = 0x46FC14u;
    {
        const bool branch_taken_0x46fc14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC14u;
        // 0x46fc18: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fc14) {
            ctx->pc = 0x46FC74u;
            goto label_46fc74;
        }
    }
    ctx->pc = 0x46FC1Cu;
label_46fc1c:
    // 0x46fc1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x46fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46fc20:
    // 0x46fc20: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x46fc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46fc24:
    // 0x46fc24: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x46fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_46fc28:
    // 0x46fc28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46fc2c:
    // 0x46fc2c: 0x0  nop
    ctx->pc = 0x46fc2cu;
    // NOP
label_46fc30:
    // 0x46fc30: 0x9483fffc  lhu         $v1, -0x4($a0)
    ctx->pc = 0x46fc30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_46fc34:
    // 0x46fc34: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x46fc34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46fc38:
    // 0x46fc38: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_46fc3c:
    if (ctx->pc == 0x46FC3Cu) {
        ctx->pc = 0x46FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC38u;
        // 0x46fc3c: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC40u;
        goto label_46fc40;
    }
    ctx->pc = 0x46FC38u;
    {
        const bool branch_taken_0x46fc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46fc38) {
            ctx->pc = 0x46FC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FC38u;
            // 0x46fc3c: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FC60u;
            goto label_46fc60;
        }
    }
    ctx->pc = 0x46FC40u;
label_46fc40:
    // 0x46fc40: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_46fc44:
    if (ctx->pc == 0x46FC44u) {
        ctx->pc = 0x46FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC40u;
        // 0x46fc44: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC48u;
        goto label_46fc48;
    }
    ctx->pc = 0x46FC40u;
    {
        const bool branch_taken_0x46fc40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC40u;
        // 0x46fc44: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fc40) {
            ctx->pc = 0x46FC50u;
            goto label_46fc50;
        }
    }
    ctx->pc = 0x46FC48u;
label_46fc48:
    // 0x46fc48: 0x1680001e  bnez        $s4, . + 4 + (0x1E << 2)
label_46fc4c:
    if (ctx->pc == 0x46FC4Cu) {
        ctx->pc = 0x46FC50u;
        goto label_46fc50;
    }
    ctx->pc = 0x46FC48u;
    {
        const bool branch_taken_0x46fc48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fc48) {
            ctx->pc = 0x46FCC4u;
            goto label_46fcc4;
        }
    }
    ctx->pc = 0x46FC50u;
label_46fc50:
    // 0x46fc50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fc54:
    // 0x46fc54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46fc58:
    // 0x46fc58: 0x10000003  b           . + 4 + (0x3 << 2)
label_46fc5c:
    if (ctx->pc == 0x46FC5Cu) {
        ctx->pc = 0x46FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC58u;
        // 0x46fc5c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC60u;
        goto label_46fc60;
    }
    ctx->pc = 0x46FC58u;
    {
        const bool branch_taken_0x46fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC58u;
        // 0x46fc5c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fc58) {
            ctx->pc = 0x46FC68u;
            goto label_46fc68;
        }
    }
    ctx->pc = 0x46FC60u;
label_46fc60:
    // 0x46fc60: 0x5620fff3  bnel        $s1, $zero, . + 4 + (-0xD << 2)
label_46fc64:
    if (ctx->pc == 0x46FC64u) {
        ctx->pc = 0x46FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC60u;
        // 0x46fc64: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC68u;
        goto label_46fc68;
    }
    ctx->pc = 0x46FC60u;
    {
        const bool branch_taken_0x46fc60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fc60) {
            ctx->pc = 0x46FC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FC60u;
            // 0x46fc64: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fc30;
        }
    }
    ctx->pc = 0x46FC68u;
label_46fc68:
    // 0x46fc68: 0x56200037  bnel        $s1, $zero, . + 4 + (0x37 << 2)
label_46fc6c:
    if (ctx->pc == 0x46FC6Cu) {
        ctx->pc = 0x46FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC68u;
        // 0x46fc6c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC70u;
        goto label_46fc70;
    }
    ctx->pc = 0x46FC68u;
    {
        const bool branch_taken_0x46fc68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fc68) {
            ctx->pc = 0x46FC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FC68u;
            // 0x46fc6c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FD48u;
            goto label_46fd48;
        }
    }
    ctx->pc = 0x46FC70u;
label_46fc70:
    // 0x46fc70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fc74:
    // 0x46fc74: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x46fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46fc78:
    // 0x46fc78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46fc7c:
    if (ctx->pc == 0x46FC7Cu) {
        ctx->pc = 0x46FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC78u;
        // 0x46fc7c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC80u;
        goto label_46fc80;
    }
    ctx->pc = 0x46FC78u;
    {
        const bool branch_taken_0x46fc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC78u;
        // 0x46fc7c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fc78) {
            ctx->pc = 0x46FC88u;
            goto label_46fc88;
        }
    }
    ctx->pc = 0x46FC80u;
label_46fc80:
    // 0x46fc80: 0x5680001b  bnel        $s4, $zero, . + 4 + (0x1B << 2)
label_46fc84:
    if (ctx->pc == 0x46FC84u) {
        ctx->pc = 0x46FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FC80u;
        // 0x46fc84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FC88u;
        goto label_46fc88;
    }
    ctx->pc = 0x46FC80u;
    {
        const bool branch_taken_0x46fc80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fc80) {
            ctx->pc = 0x46FC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FC80u;
            // 0x46fc84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FCF0u;
            goto label_46fcf0;
        }
    }
    ctx->pc = 0x46FC88u;
label_46fc88:
    // 0x46fc88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46fc8c:
    // 0x46fc8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x46fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46fc90:
    // 0x46fc90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x46fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_46fc94:
    // 0x46fc94: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x46fc94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
label_46fc98:
    // 0x46fc98: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x46fc98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_46fc9c:
    // 0x46fc9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x46fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_46fca0:
    // 0x46fca0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x46fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fca4:
    // 0x46fca4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x46fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46fca8:
    // 0x46fca8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x46fca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46fcac:
    // 0x46fcac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46fcb0:
    // 0x46fcb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46fcb4:
    // 0x46fcb4: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x46fcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_46fcb8:
    // 0x46fcb8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fcbc:
    // 0x46fcbc: 0x10000020  b           . + 4 + (0x20 << 2)
label_46fcc0:
    if (ctx->pc == 0x46FCC0u) {
        ctx->pc = 0x46FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FCBCu;
        // 0x46fcc0: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FCC4u;
        goto label_46fcc4;
    }
    ctx->pc = 0x46FCBCu;
    {
        const bool branch_taken_0x46fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FCBCu;
        // 0x46fcc0: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fcbc) {
            ctx->pc = 0x46FD40u;
            goto label_46fd40;
        }
    }
    ctx->pc = 0x46FCC4u;
label_46fcc4:
    // 0x46fcc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46fcc8:
    // 0x46fcc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fccc:
    // 0x46fccc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x46fcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46fcd0:
    // 0x46fcd0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46fcd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46fcd4:
    // 0x46fcd4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x46fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46fcd8:
    // 0x46fcd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46fcdc:
    // 0x46fcdc: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x46fcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
label_46fce0:
    // 0x46fce0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fce4:
    // 0x46fce4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x46fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_46fce8:
    // 0x46fce8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_46fcec:
    if (ctx->pc == 0x46FCECu) {
        ctx->pc = 0x46FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FCE8u;
        // 0x46fcec: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FCF0u;
        goto label_46fcf0;
    }
    ctx->pc = 0x46FCE8u;
    {
        const bool branch_taken_0x46fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FCE8u;
        // 0x46fcec: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fce8) {
            ctx->pc = 0x46FC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fc68;
        }
    }
    ctx->pc = 0x46FCF0u;
label_46fcf0:
    // 0x46fcf0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x46fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46fcf4:
    // 0x46fcf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x46fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_46fcf8:
    // 0x46fcf8: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x46fcf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
label_46fcfc:
    // 0x46fcfc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x46fcfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_46fd00:
    // 0x46fd00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x46fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_46fd04:
    // 0x46fd04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x46fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fd08:
    // 0x46fd08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x46fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46fd0c:
    // 0x46fd0c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x46fd0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_46fd10:
    // 0x46fd10: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46fd14:
    // 0x46fd14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46fd18:
    // 0x46fd18: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x46fd18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_46fd1c:
    // 0x46fd1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x46fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_46fd20:
    // 0x46fd20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fd24:
    // 0x46fd24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x46fd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46fd28:
    // 0x46fd28: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46fd28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46fd2c:
    // 0x46fd2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x46fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46fd30:
    // 0x46fd30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46fd34:
    // 0x46fd34: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x46fd34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
label_46fd38:
    // 0x46fd38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fd3c:
    // 0x46fd3c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x46fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_46fd40:
    // 0x46fd40: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x46fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_46fd44:
    // 0x46fd44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x46fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46fd48:
    // 0x46fd48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_46fd4c:
    if (ctx->pc == 0x46FD4Cu) {
        ctx->pc = 0x46FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FD48u;
        // 0x46fd4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FD50u;
        goto label_46fd50;
    }
    ctx->pc = 0x46FD48u;
    {
        const bool branch_taken_0x46fd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FD48u;
        // 0x46fd4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fd48) {
            ctx->pc = 0x46FD98u;
            goto label_46fd98;
        }
    }
    ctx->pc = 0x46FD50u;
label_46fd50:
    // 0x46fd50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x46fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46fd54:
    // 0x46fd54: 0x0  nop
    ctx->pc = 0x46fd54u;
    // NOP
label_46fd58:
    // 0x46fd58: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x46fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_46fd5c:
    // 0x46fd5c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x46fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fd60:
    // 0x46fd60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x46fd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_46fd64:
    // 0x46fd64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_46fd68:
    // 0x46fd68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46fd6c:
    // 0x46fd6c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x46fd6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46fd70:
    // 0x46fd70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x46fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_46fd74:
    // 0x46fd74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46fd78:
    // 0x46fd78: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x46fd78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_46fd7c:
    // 0x46fd7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x46fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_46fd80:
    // 0x46fd80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46fd84:
    // 0x46fd84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x46fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_46fd88:
    // 0x46fd88: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x46fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46fd8c:
    // 0x46fd8c: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x46fd8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_46fd90:
    // 0x46fd90: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
label_46fd94:
    if (ctx->pc == 0x46FD94u) {
        ctx->pc = 0x46FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FD90u;
        // 0x46fd94: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FD98u;
        goto label_46fd98;
    }
    ctx->pc = 0x46FD90u;
    {
        const bool branch_taken_0x46fd90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fd90) {
            ctx->pc = 0x46FD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FD90u;
            // 0x46fd94: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fd58;
        }
    }
    ctx->pc = 0x46FD98u;
label_46fd98:
    // 0x46fd98: 0x26f3ad18  addiu       $s3, $s7, -0x52E8
    ctx->pc = 0x46fd98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_46fd9c:
    // 0x46fd9c: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46fda0:
    // 0x46fda0: 0x40f809  jalr        $v0
label_46fda4:
    if (ctx->pc == 0x46FDA4u) {
        ctx->pc = 0x46FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDA0u;
        // 0x46fda4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FDA8u;
        goto label_46fda8;
    }
    ctx->pc = 0x46FDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FDA8u);
        ctx->pc = 0x46FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDA0u;
        // 0x46fda4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FDA0u, 0x46FDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FDA8u;
label_46fda8:
    // 0x46fda8: 0x1651000a  bne         $s2, $s1, . + 4 + (0xA << 2)
label_46fdac:
    if (ctx->pc == 0x46FDACu) {
        ctx->pc = 0x46FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDA8u;
        // 0x46fdac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FDB0u;
        goto label_46fdb0;
    }
    ctx->pc = 0x46FDA8u;
    {
        const bool branch_taken_0x46fda8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x46FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDA8u;
        // 0x46fdac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fda8) {
            ctx->pc = 0x46FDD4u;
            goto label_46fdd4;
        }
    }
    ctx->pc = 0x46FDB0u;
label_46fdb0:
    // 0x46fdb0: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46fdb4:
    // 0x46fdb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46fdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46fdb8:
    // 0x46fdb8: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x46fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_46fdbc:
    // 0x46fdbc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x46fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_46fdc0:
    // 0x46fdc0: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x46fdc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_46fdc4:
    // 0x46fdc4: 0x40f809  jalr        $v0
label_46fdc8:
    if (ctx->pc == 0x46FDC8u) {
        ctx->pc = 0x46FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDC4u;
        // 0x46fdc8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FDCCu;
        goto label_46fdcc;
    }
    ctx->pc = 0x46FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FDCCu);
        ctx->pc = 0x46FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDC4u;
        // 0x46fdc8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FDC4u, 0x46FDCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FDCCu;
label_46fdcc:
    // 0x46fdcc: 0x10000014  b           . + 4 + (0x14 << 2)
label_46fdd0:
    if (ctx->pc == 0x46FDD0u) {
        ctx->pc = 0x46FDD4u;
        goto label_46fdd4;
    }
    ctx->pc = 0x46FDCCu;
    {
        const bool branch_taken_0x46fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fdcc) {
            ctx->pc = 0x46FE20u;
            goto label_46fe20;
        }
    }
    ctx->pc = 0x46FDD4u;
label_46fdd4:
    // 0x46fdd4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x46fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_46fdd8:
    // 0x46fdd8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x46fdd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46fddc:
    // 0x46fddc: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_46fde0:
    if (ctx->pc == 0x46FDE0u) {
        ctx->pc = 0x46FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDDCu;
        // 0x46fde0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FDE4u;
        goto label_46fde4;
    }
    ctx->pc = 0x46FDDCu;
    {
        const bool branch_taken_0x46fddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x46FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDDCu;
        // 0x46fde0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fddc) {
            ctx->pc = 0x46FE04u;
            goto label_46fe04;
        }
    }
    ctx->pc = 0x46FDE4u;
label_46fde4:
    // 0x46fde4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x46fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_46fde8:
    // 0x46fde8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x46fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_46fdec:
    // 0x46fdec: 0x0  nop
    ctx->pc = 0x46fdecu;
    // NOP
label_46fdf0:
    // 0x46fdf0: 0x0  nop
    ctx->pc = 0x46fdf0u;
    // NOP
label_46fdf4:
    // 0x46fdf4: 0x0  nop
    ctx->pc = 0x46fdf4u;
    // NOP
label_46fdf8:
    // 0x46fdf8: 0x0  nop
    ctx->pc = 0x46fdf8u;
    // NOP
label_46fdfc:
    // 0x46fdfc: 0x5451fffa  bnel        $v0, $s1, . + 4 + (-0x6 << 2)
label_46fe00:
    if (ctx->pc == 0x46FE00u) {
        ctx->pc = 0x46FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FDFCu;
        // 0x46fe00: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FE04u;
        goto label_46fe04;
    }
    ctx->pc = 0x46FDFCu;
    {
        const bool branch_taken_0x46fdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x46fdfc) {
            ctx->pc = 0x46FE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46FDFCu;
            // 0x46fe00: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46FDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fde8;
        }
    }
    ctx->pc = 0x46FE04u;
label_46fe04:
    // 0x46fe04: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x46fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_46fe08:
    // 0x46fe08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46fe08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46fe0c:
    // 0x46fe0c: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46fe10:
    // 0x46fe10: 0x8ec2011c  lw          $v0, 0x11C($s6)
    ctx->pc = 0x46fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 284)));
label_46fe14:
    // 0x46fe14: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x46fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_46fe18:
    // 0x46fe18: 0x40f809  jalr        $v0
label_46fe1c:
    if (ctx->pc == 0x46FE1Cu) {
        ctx->pc = 0x46FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FE18u;
        // 0x46fe1c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FE20u;
        goto label_46fe20;
    }
    ctx->pc = 0x46FE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46FE20u);
        ctx->pc = 0x46FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FE18u;
        // 0x46fe1c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FE18u, 0x46FE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46FE20u;
label_46fe20:
    // 0x46fe20: 0x1640ff61  bnez        $s2, . + 4 + (-0x9F << 2)
label_46fe24:
    if (ctx->pc == 0x46FE24u) {
        ctx->pc = 0x46FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FE20u;
        // 0x46fe24: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FE28u;
        goto label_46fe28;
    }
    ctx->pc = 0x46FE20u;
    {
        const bool branch_taken_0x46fe20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x46FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FE20u;
        // 0x46fe24: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fe20) {
            ctx->pc = 0x46FBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46fba8;
        }
    }
    ctx->pc = 0x46FE28u;
label_46fe28:
    // 0x46fe28: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x46fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_46fe2c:
    // 0x46fe2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46fe30:
    // 0x46fe30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x46fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_46fe34:
    // 0x46fe34: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x46fe34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46fe38:
    // 0x46fe38: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x46fe38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46fe3c:
    // 0x46fe3c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x46fe3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46fe40:
    // 0x46fe40: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x46fe40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46fe44:
    // 0x46fe44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46fe44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46fe48:
    // 0x46fe48: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x46fe48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46fe4c:
    // 0x46fe4c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x46fe4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46fe50:
    // 0x46fe50: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x46fe50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46fe54:
    // 0x46fe54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46fe54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46fe58:
    // 0x46fe58: 0x3e00008  jr          $ra
label_46fe5c:
    if (ctx->pc == 0x46FE5Cu) {
        ctx->pc = 0x46FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FE58u;
        // 0x46fe5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46FE60u;
        goto label_fallthrough_0x46fe58;
    }
    ctx->pc = 0x46FE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46FE58u;
        // 0x46fe5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46fe58:
    ctx->pc = 0x46FE60u;
}
